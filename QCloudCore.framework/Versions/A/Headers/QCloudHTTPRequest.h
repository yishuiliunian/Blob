//
//  QCloudHTTPRequest.h
//  QCloudNetworking
//
//  Created by tencent on 15/9/25.
//  Copyright © 2015年 BaiduWallet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QCloudRequestData.h"
#import "QCloudRequestSerializer.h"
#import "QCloudResponseSerializer.h"
#import "QCloudHTTPRequestDelegate.h"
#import "QCloudAbstractRequest.h"
@class QCloudHTTPRetryHanlder;

typedef void(^QCloudHTTPRequestConfigure)(QCloudRequestSerializer* requestSerializer, QCloudResponseSerializer* responseSerializer);



/**
 network base request
 */
@interface QCloudHTTPRequest : QCloudAbstractRequest
{
    @protected
    QCloudRequestData*              _requestData;
    QCloudRequestSerializer*        _requestSerializer;
    QCloudResponseSerializer*       _responseSerializer;
    QCloudHTTPRetryHanlder*         _retryHandler;
}
@property (nonatomic, strong, readonly) QCloudRequestSerializer* requestSerializer;
@property (nonatomic, assign, readonly) BOOL canceled;
@property (nonatomic, strong, readonly) QCloudRequestData* requestData;
@property (nonatomic, strong, readonly) QCloudResponseSerializer* responseSerializer;

/**
 在特殊网络错误下，进行重试的策略，默认是不进行重试。可通过集成QCloudHTTPRetryHandler来自定义重试的出发条件和重试策略。
 */
@property (nonatomic, strong, readonly) QCloudHTTPRetryHanlder* retryPolicy;

/**
  服务器返回数据，当服务器有返回数据的时候，该字段有值，其他时候该字段无意义
 */
@property (nonatomic, strong, readonly) NSData* responseData;

/**
  服务器响应结构，当服务器有返回数据的时候，该字段有值，其他时候该字段无意义
 */
@property (nonatomic, strong, readonly) NSHTTPURLResponse* httpURLResponse;

/**
 当系统调用结束，并且出错的情况下，使用该字段表示错误信息，注意：只有在错误的情况下，该字段才会有数据
 */
@property (nonatomic, strong, readonly) NSError* httpURLError;


/**
  用来配置协议中HTTP的请求参数和解析
 */
@property (nonatomic, strong) QCloudHTTPRequestConfigure configureBlock;

/**
  当前的ConfiureBlock为空的时候，会调用该函数加载配置函数。
 */
- (void)    loadConfigureBlock;

- (void) setConfigureBlock:(void(^)(QCloudRequestSerializer* requestSerializer, QCloudResponseSerializer* responseSerializer))configBlock;

/**
 构架RequestData，加载自定义的参数
 */
- (BOOL)    buildRequestData:(NSError* __autoreleasing*)error;


/**
 构建真实网络请求需要的NSURLRequest
 
 @param error 当出错的时候，表示出错信息
 @return 用于构建真实网络请求的NSURLRequest
 */
- (NSURLRequest*) buildURLRequest:(NSError* __autoreleasing*)error;

@end

#define SUPER_BUILD_REUQSET_DATA if (![super buildRequestData:error]) return NO;



@interface QCloudHTTPRequest (SubClass)

/**
  将要开始发送请求的时候，将会调用该接口通知子类
 */
- (void) willStart;


/**
  加载错误重试策略，只有在第一次调用retryPolicy并且其值为空的时候会调用该方法来加载重试策略。子类可以重载该方法返回自己的重试策略。父类的默认行为是返回一个不进行重试的策略。
  */
- (void) loadRetryPolicy;



- (void) setConfigureBlock:(void(^)(QCloudRequestSerializer* requestSerializer, QCloudResponseSerializer* responseSerializer))confBlock;
@end


@class RNAsyncBenchMark;

#pragma build Request
@interface QCloudHTTPRequest  ()


- (void) onReviveErrorResponse:(NSURLResponse*)prsponse error:(NSError*)error;
- (void) onReciveRespone:(NSURLResponse *)response data:(NSData *)data;

@end