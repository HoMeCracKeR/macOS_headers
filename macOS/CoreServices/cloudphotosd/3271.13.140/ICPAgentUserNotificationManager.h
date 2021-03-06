//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol ICPAgentServiceManager;

@interface ICPAgentUserNotificationManager : NSObject <NSUserNotificationCenterDelegate>
{
    NSMutableDictionary *_aggregateEventMap;
    NSObject<ICPAgentServiceManager> *_serviceManager;
    NSMutableArray *_postedEvents;
}

@property(retain) NSMutableArray *postedEvents; // @synthesize postedEvents=_postedEvents;
@property __weak NSObject<ICPAgentServiceManager> *serviceManager; // @synthesize serviceManager=_serviceManager;
@property(retain) NSMutableDictionary *aggregateEventMap; // @synthesize aggregateEventMap=_aggregateEventMap;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)removeDeliveredNotificationsMatchingPredicate:(id)arg1;
- (void)postUserNotification:(id)arg1 forEvent:(id)arg2;
- (void)notifyEvent:(id)arg1;
- (id)postedEventCorrespondingToEvent:(id)arg1;
- (void)unregisterAsDelegate;
- (void)registerAsDelegate;
- (id)userNotificationCenter;
- (id)photosAppUserNotificationCenter;
- (void)dealloc;
- (id)initWithServiceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

