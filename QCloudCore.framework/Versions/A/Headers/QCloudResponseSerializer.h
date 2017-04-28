//
//  QCloudResponseSerializer.h
//  QCloudNetworking
//
//  Created by tencent on 15/9/25.
//  Copyright © 2015年 BaiduWallet. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef id (^QCloudResponseSerializerBlock)(NSHTTPURLResponse* response,  id inputData, NSError* __autoreleasing* error);




@interface QCloudResponseSerializer : NSObject
@property (nonatomic, strong) NSArray<QCloudResponseSerializerBlock>* serializerBlocks;
- (id) decodeWithWithResponse:(NSHTTPURLResponse*)response data:(NSData*)data error:(NSError*__autoreleasing*)error;
@end


FOUNDATION_EXTERN QCloudResponseSerializerBlock QCloudAcceptRespnseCodeBlock(NSSet* acceptCode , Class errorModel);
extern QCloudResponseSerializerBlock QCloudResponseJSONSerilizerBlock;
