//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSAStatusHUDControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, NSView, TSAAlternateStatusHUDController, TSACollaborationConnectionStatusHUDController;
@protocol TSACollaborationStatusHUDManagerDelegate;

@interface TSACollaborationStatusHUDManager : NSObject <TSAStatusHUDControllerDelegate>
{
    TSAAlternateStatusHUDController *_alternateHUDController;
    TSACollaborationConnectionStatusHUDController *_currentConnectionStatusHUDController;
    BOOL _statusNotificationEnabled;
    BOOL _visible;
    NSView *_statusView;
    id <TSACollaborationStatusHUDManagerDelegate> _delegate;
    TSACollaborationConnectionStatusHUDController *_lastNetworkOrErrorStatus;
    NSMutableDictionary *_joiningLobbySessions;
    NSMutableDictionary *_leavingLobbySessions;
    NSMutableSet *_currentCollaboratorSessions;
    long long _postponedConnectionStatus;
    NSArray *_layoutConstraints;
}

@property(retain, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(nonatomic) long long postponedConnectionStatus; // @synthesize postponedConnectionStatus=_postponedConnectionStatus;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(retain, nonatomic) NSMutableSet *currentCollaboratorSessions; // @synthesize currentCollaboratorSessions=_currentCollaboratorSessions;
@property(retain, nonatomic) NSMutableDictionary *leavingLobbySessions; // @synthesize leavingLobbySessions=_leavingLobbySessions;
@property(retain, nonatomic) NSMutableDictionary *joiningLobbySessions; // @synthesize joiningLobbySessions=_joiningLobbySessions;
@property(retain, nonatomic) TSACollaborationConnectionStatusHUDController *lastNetworkOrErrorStatus; // @synthesize lastNetworkOrErrorStatus=_lastNetworkOrErrorStatus;
@property(nonatomic) __weak id <TSACollaborationStatusHUDManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) BOOL statusNotificationEnabled; // @synthesize statusNotificationEnabled=_statusNotificationEnabled;
- (void).cxx_destruct;
- (void)hudDidClose:(id)arg1;
- (void)updateLayout;
- (void)hideAlternateHUD;
- (void)showAlternateHUDView:(id)arg1 forDuration:(double)arg2;
- (void)showAlternateHUDView:(id)arg1 forDuration:(double)arg2 showInViewBlock:(CDUnknownBlockType)arg3;
- (id)alternateHUDController;
- (id)currentConnectionStatusHUDController;
- (BOOL)isNetworkOrErrorStatus:(long long)arg1;
- (void)showConnectionStatusHUDController:(id)arg1 showInViewBlock:(CDUnknownBlockType)arg2;
- (BOOL)p_shouldShowOnlineHUD;
- (void)remindUserOfCurrentStatusIfNeeded;
- (void)collaborationErrorAction:(id)arg1;
- (void)showCollaborationNetworkHealthMonitorOfflineReason:(unsigned long long)arg1 serviceType:(unsigned long long)arg2;
- (double)visibleCanvasWidth;
- (double)contentsScale;
- (void)reset;
- (void)collabHUDActivated;
- (void)hideHUD;
- (void)attemptToShowCollaboratorStatusNotification;
- (void)p_collaboratorLeftSession:(id)arg1 withString:(id)arg2;
- (void)p_collaboratorJoinedSession:(id)arg1 withString:(id)arg2;
- (void)lobbySessionWasReplacedWithLobbySession:(id)arg1;
- (void)collaboratorDidLeave:(id)arg1;
- (void)collaboratorDidJoin:(id)arg1;
- (void)removeCollaboratorFromLobbySessionsNotInList:(id)arg1;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

