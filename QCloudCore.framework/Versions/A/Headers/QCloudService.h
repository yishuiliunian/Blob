//
//  QCloudService.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/13.
//
//

#import <Foundation/Foundation.h>
#import "QCloudServiceConfiguration.h"
#import "QCloudBizHTTPRequest.h"
NS_ASSUME_NONNULL_BEGIN
@class QCloudHTTPRequest;
@class QCloudSignatureFields;
@interface QCloudService : NSObject
{
    @protected
    QCloudServiceConfiguration* _configuration;
}
@property (nonatomic, strong, readonly) QCloudServiceConfiguration* configuration;
- (instancetype) initWithConfiguration:(QCloudServiceConfiguration *)configuration;
//
- (int) performRequest:(QCloudBizHTTPRequest*)httpRequst;
- (int) performRequest:(QCloudBizHTTPRequest *)httpRequst withFinishBlock:(QCloudRequestFinishBlock)block;
- (void) cancelRequestWithID:(int)requestID;
- (void) cancelAllRequest;
//
- (QCloudTask*) fillCommonParamtersForRequest:(QCloudBizHTTPRequest*)request;
- (QCloudSignatureFields*) signatureFiledsForRequest:(QCloudBizHTTPRequest*)request;
@end
NS_ASSUME_NONNULL_END
