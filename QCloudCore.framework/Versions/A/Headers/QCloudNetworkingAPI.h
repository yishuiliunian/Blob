//
//  QCloudNetworkingAPI.h
//  BaiduWallet_CommonLogic
//
//  Created by tencent on 5/12/16.
//  Copyright © 2016 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QCloudHTTPRequestDelegate.h"


extern NSString* const kQCloudRestNetURLUsageNotification;

@interface NSDictionary (QCloudRestNetUsage)
- (NSURL*) bdwt_RestNetCoreUsagedURL;
@end


@class QCloudHTTPRequest;
@protocol QCloudNetworkingAPI <NSObject>
/**
   最大并发的网络线程数量
 */
@property (atomic, assign) int32_t maxConcurrencyTask;
+ (NSObject<QCloudNetworkingAPI>*) shareClient;
- (int) performRequest:(QCloudHTTPRequest*)httpRequst;
- (int) performRequest:(QCloudHTTPRequest *)httpRequst withFinishBlock:(QCloudRequestFinishBlock)block;
- (void) cancelRequestWithID:(int)requestID;
- (void) cancelAllRequest;
@end
