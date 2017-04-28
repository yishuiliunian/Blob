//
//  QCloudServiceConfiguration.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/13.
//
//

#import <Foundation/Foundation.h>
#import "QCloudSignatureProvider.h"
#import "QCloudServiceEnum.h"
@interface QCloudServiceConfiguration : NSObject <NSCopying>
@property (nonatomic, strong) id<QCloudSignatureProvider> signatureProvider;
@property (nonatomic, strong) NSString* appID;
//
@property (nonatomic, assign) QCloudRegionType regionType;
@end


