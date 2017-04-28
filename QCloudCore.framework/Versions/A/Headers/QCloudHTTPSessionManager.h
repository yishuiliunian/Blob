//
//  QCloudHTTPSessionManager.h
//  BaiduWallet_CommonLogic
//
//  Created by tencent on 16/3/30.
//  Copyright © 2016年 Baidu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QCloudNetworkingAPI.h"



@interface QCloudHTTPSessionManager : NSObject <QCloudNetworkingAPI>
+ (QCloudHTTPSessionManager*) shareClient;
@end
