//
//  QCloudSignatureProvider.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/31.
//
//

#import <Foundation/Foundation.h>
#import "QCloudBolts.h"
#import "QCloudSignature.h"
#import "QCloudSignatureFields.h"
@class QCloudPath;
@class QCloudBizHTTPRequest;
@class QCloudSignatureFields;
@protocol QCloudSignatureProvider <NSObject>
- (QCloudTask<QCloudSignature*>*) signatureWithFields:(QCloudSignatureFields*)fileds request:(QCloudBizHTTPRequest*) request;
@end
