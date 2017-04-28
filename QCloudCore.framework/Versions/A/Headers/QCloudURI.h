//
//  QCloudURI.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/31.
//
//

#import <Foundation/Foundation.h>
#import "QCloudServiceEnum.h"
@interface QCloudURI : NSObject
    @property (nonatomic, assign) QCloudRegionType region;
    @property (nonatomic, strong) NSString* bucket;
    @property (nonatomic, strong) NSString* directory;
    @property (nonatomic, strong) NSString* filename;
@end
