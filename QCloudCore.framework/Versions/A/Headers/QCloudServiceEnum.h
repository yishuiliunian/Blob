//
//  QCloudServiceEnum.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/31.
//
//

#ifndef QCloudServiceEnum_h
#define QCloudServiceEnum_h

typedef NS_ENUM (NSInteger, QCloudRegionType)
{
    QCloudRegionBeijing,
    QCloudRegionGuangzhou,
    QCloudRegionShanghai,
    QCloudRegionHongkong,
    QCloudRegionSingapore,
    QCloudRegionShanghaiFinance,
    QCloudRegionShenzhenFinance,
    QCloudRegionGuangzhouOpen,
    QCloudRegionCNEast,
    QCloudRegionCNNorth,
    QCloudRegionCNSouth,
};

typedef NS_ENUM(NSInteger, QCloudServiceType) {
    
    QCloudServiceCOS,
    QCloudServiceAII,
    QCloudServiceCIOCR,
    QCloudServiceCII,
    QCloudServiceFaceIn
};


#endif /* QCloudServiceEnum_h */
