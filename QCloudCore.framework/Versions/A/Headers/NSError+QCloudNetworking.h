//
//  NSError+QCloudNetworking.h
//  QCloudNetworking
//
//  Created by tencent on 16/2/19.
//  Copyright © 2016年 BaiduWallet. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(int,QCloudNetworkErrorCode) {
    QCloudNetworkErrorCodeDecodeError = -20005,
    QCloudNetworkErrorCodeParamterInvalid = -24003
};

@protocol QCloudNetworkError <NSObject>
- (NSError*) toError;
@end


@interface QCloudCommonNetworkError : NSObject <QCloudNetworkError>
@property (nonatomic, assign) int code;
@property (nonatomic, strong) NSString* message;
@property (nonatomic, strong) NSString* request_id;
@end



@interface NSError (QCloudNetworking)
+ (NSError*) bwn_errorWithCode:(int)code message:(NSString*)message;
@end



