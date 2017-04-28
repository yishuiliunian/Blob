//
//  QCloudLogModel.h
//  Pods
//
//  Created by Dong Zhao on 2017/3/15.
//
//

#import <Foundation/Foundation.h>
/**
 `QCloudLogLevel` enum specifies different levels of logging that could be used to limit or display more messages in logs.
 */
typedef NS_ENUM(uint8_t, QCloudLogLevel) {
    /**
     Log level that disables all logging.
     */
    QCloudLogLevelNone =  1,
    /**
     Log level that if set is going to output error messages to the log.
     */
    QCloudLogLevelError = 1 << 1,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     */
    QCloudLogLevelWarning = 1 << 2,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     - Informational messages
     */
    QCloudLogLevelInfo = 1 << 3,
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     - Informational messages
     - Debug messages
     */
    QCloudLogLevelDebug = 1 << 4,
    
    /**
     Log level that if set is going to output the following messages to log:
     - Errors
     - Warnings
     - Informational messages
     - Debug messages
     - Verbose
     */
    QCloudLogLevelVerbose = 1 << 5
};


@interface QCloudLogModel : NSObject
@property (nonatomic, assign) QCloudLogLevel level;
@property (nonatomic, strong) NSString* message;
@property (nonatomic, strong) NSDate* date;
@property (nonatomic, strong) NSString* file;
@property (nonatomic, assign) int line;
@property (nonatomic, strong) NSString* funciton;

/**
 生成用于写文件的Log信息

 @return 写入文件的Log信息
 */
- (NSString*) fileDescription;
@end
