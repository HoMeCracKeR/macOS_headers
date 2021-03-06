//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalendarLink.h"

@class CalNWideQueue, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface CalendarLinkProxy : NSObject <CalendarLink>
{
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CalNWideQueue *_nWideQueue;
    NSObject<OS_dispatch_group> *_delayForCoreDataGroup;
}

+ (BOOL)_validateSelectorName:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain) NSObject<OS_dispatch_group> *delayForCoreDataGroup; // @synthesize delayForCoreDataGroup=_delayForCoreDataGroup;
@property(retain) CalNWideQueue *nWideQueue; // @synthesize nWideQueue=_nWideQueue;
@property(retain) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (void).cxx_destruct;
- (void)updateClientSideCacheWithReply:(CDUnknownBlockType)arg1;
- (void)registerWithAgent;
- (void)broadcastNotificationToOtherClients:(id)arg1 userInfo:(id)arg2;
- (id)init;

@end

