//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBClientHandle;

__attribute__((visibility("hidden")))
@interface CHDatabaseClientHandleManager : CHSynchronizedLoggable
{
    CallHistoryDBClientHandle *_databaseClientHandle;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak CallHistoryDBClientHandle *databaseClientHandle; // @synthesize databaseClientHandle=_databaseClientHandle;
- (id)init;

@end

