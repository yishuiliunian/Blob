//
//  QCloudURLSessionTaskData.h
//  BaiduWallet_CommonLogic
//
//  Created by tencent on 5/12/16.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>

@class QCloudHTTPRetryHanlder;
@class QCloudHTTPRequest;

@interface QCloudURLSessionTaskData : NSObject
@property (nonatomic, assign) int identifier;
@property (nonatomic, strong) NSURLRequest* originURLReqest;
@property (nonatomic, strong) QCloudHTTPRetryHanlder* retryHandler;
@property (nonatomic, strong) QCloudHTTPRequest* httpRequest;
@property (nonatomic, strong, readonly) NSData* data;
- (void) restData;
- (void) appendData:(NSData*)data;
@end
