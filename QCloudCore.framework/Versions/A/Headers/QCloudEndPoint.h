//
//  QCloudEndPoint.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/31.
//
//

#import <Foundation/Foundation.h>
#import "QCloudServiceEnum.h"
typedef NSString* QCloudRegion;
typedef NSString* QCloudServiceName;

@interface QCloudEndPoint : NSObject <NSCopying>
@property (nonatomic, readonly) QCloudRegionType regionType;
@property (nonatomic, readonly) QCloudRegion regionName;
@property (nonatomic, readonly) QCloudServiceType serviceType;
@property (nonatomic, readonly) QCloudServiceName serviceName;
@property (nonatomic, readonly) NSURL* url;
@property (nonatomic, readonly) NSString* hostName;

- (instancetype) initWithRegionType:(QCloudRegionType)type
                        serviceType:(QCloudServiceType)serviceType
                                URL:(NSURL*)url;

- (instancetype) initWithRegionType:(QCloudRegionType)type
                        serviceType:(QCloudServiceType)serviceType
                             useSSL:(BOOL)useSSL;


- (instancetype) initWithRegionType:(QCloudRegionType)type
                        serviceType:(QCloudServiceType)serviceType
                                URL:(NSURL *)url
                           mockHost:(NSString*)host;
@end
