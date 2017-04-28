//
//  QCloudSignature.h
//  Pods
//
//  Created by Dong Zhao on 2017/4/5.
//
//

#import <Foundation/Foundation.h>

@interface QCloudSignature : NSObject

/**
 签名
 */
@property (nonatomic, strong) NSString* signature;

/**
 签名过期时间，最长为1个月（30天）当您传入大于30天的数值的时候，会自动降级到30天
 */
@property (nonatomic, strong) NSDate* expiration;


+ (QCloudSignature*) signatureWith1Day:(NSString*)signature;
+ (QCloudSignature*) signatureWith7Day:(NSString*)signature;
+ (QCloudSignature*) signatureWithMaxExpiration:(NSString*)signature;

- (instancetype) initWithSignature:(NSString*)signature expiration:(NSDate*)signature;
@end
