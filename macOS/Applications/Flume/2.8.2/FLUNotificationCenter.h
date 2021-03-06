//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class NSSet, NSString, NSTimer;

@interface FLUNotificationCenter : NSObject <NSUserNotificationCenterDelegate>
{
    BOOL _ignoreModifiedObjectsNotification;
    NSSet *_queuedActivityNotifications;
    NSSet *_queuedMediaNotifications;
    NSTimer *_queuedNotificationTimer;
}

+ (id)shared;
@property(retain, nonatomic) NSTimer *queuedNotificationTimer; // @synthesize queuedNotificationTimer=_queuedNotificationTimer;
@property(retain, nonatomic) NSSet *queuedMediaNotifications; // @synthesize queuedMediaNotifications=_queuedMediaNotifications;
@property(retain, nonatomic) NSSet *queuedActivityNotifications; // @synthesize queuedActivityNotifications=_queuedActivityNotifications;
@property(nonatomic) BOOL ignoreModifiedObjectsNotification; // @synthesize ignoreModifiedObjectsNotification=_ignoreModifiedObjectsNotification;
- (void).cxx_destruct;
- (id)authorNamesWithMaxNumberOfParticipants:(long long)arg1 forMedia:(id)arg2;
- (void)postNotificationForType:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 image:(id)arg4 soundFilename:(id)arg5 showButtons:(BOOL)arg6 showReplyButton:(BOOL)arg7 userInfo:(id)arg8;
- (void)shouldPostQueuedNotifications;
- (void)showNewDesktopNotifications:(id)arg1;
- (BOOL)shouldBadgeDockIcon;
- (void)updateDockIconNotificationBadge;
- (unsigned long long)badgeCountForUnreadFollowerRequests;
- (unsigned long long)badgeCountForUnreadMessages;
- (unsigned long long)countForUnalertedActivity;
- (unsigned long long)badgeCountForUnreadActivity;
- (unsigned long long)badgeCountForUnreadPosts;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)didReceivePushNotification:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

