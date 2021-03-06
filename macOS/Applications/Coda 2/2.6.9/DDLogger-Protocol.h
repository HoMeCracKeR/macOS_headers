//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDLogMessage, NSObject<OS_dispatch_queue>, NSString;

@protocol DDLogger <NSObject>
- (void)setLogFormatter:(id <DDLogFormatter>)arg1;
- (id <DDLogFormatter>)logFormatter;
- (void)logMessage:(DDLogMessage *)arg1;

@optional
- (NSString *)loggerName;
- (NSObject<OS_dispatch_queue> *)loggerQueue;
- (void)willRemoveLogger;
- (void)didAddLogger;
@end

