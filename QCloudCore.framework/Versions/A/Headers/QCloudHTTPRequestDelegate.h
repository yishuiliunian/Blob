//
//  QCloudHTTPRequestDelegate.h
//  QCloudNetworking
//
//  Created by tencent on 15/9/30.
//  Copyright © 2015年 BaiduWallet. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^QCloudRequestFinishBlock)(id outputObject, NSError* error);

@class QCloudAbstractRequest;
@protocol QCloudHTTPRequestDelegate <NSObject>
@optional
- (void) QCloudHTTPRequestDidFinished:(QCloudAbstractRequest*)request succeedWithObject:(id)object;
- (void) QCloudHTTPRequestDidFinished:(QCloudAbstractRequest *)request failed:(NSError*)object;

@end
