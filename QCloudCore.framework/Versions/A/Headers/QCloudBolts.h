/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import "QCloudCancellationToken.h"
#import "QCloudCancellationTokenRegistration.h"
#import "QCloudCancellationTokenSource.h"
#import "QCloudExecutor.h"
#import "QCloudBoltsGeneric.h"
#import "QCloudTask.h"
#import "QCloudTaskCompletionSource.h"

NS_ASSUME_NONNULL_BEGIN

/**
 A string containing the version of the Bolts Framework used by the current application.
 */
extern NSString *const QCloudBoltsFrameworkVersionString;

NS_ASSUME_NONNULL_END
