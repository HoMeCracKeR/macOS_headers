//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SessionStateMonitor : NSObject
{
    int _currentLoginState;
    int _currentOverallSessionState;
    int _currentLogoutState;
    NSMutableArray *_loginStateArray;
    NSMutableArray *_logoutStateArray;
}

+ (id)sharedSessionStateMonitor;
@property int currentLogoutState; // @synthesize currentLogoutState=_currentLogoutState;
@property(readonly) NSMutableArray *logoutStateArray; // @synthesize logoutStateArray=_logoutStateArray;
@property int currentOverallSessionState; // @synthesize currentOverallSessionState=_currentOverallSessionState;
@property int currentLoginState; // @synthesize currentLoginState=_currentLoginState;
@property(readonly) NSMutableArray *loginStateArray; // @synthesize loginStateArray=_loginStateArray;
- (id)stringForLogoutState:(int)arg1;
- (id)stringForOverallSessionState:(int)arg1;
- (id)logoutStatesString;
- (id)loginStatesString;
- (id)stringForLoginState:(int)arg1;
- (void)logFullStateInfo;
- (void)logSessionStateSummary;
- (void)setCrashLogSessionState;
- (void)setLogoutState:(int)arg1;
- (void)setOverallSessionState:(int)arg1;
- (void)setLoginState:(int)arg1;
- (void)logSessionStateToDebugLogs;
- (void)logSessionStateForLoginwindowExit;
- (void)dealloc;
- (id)init;

@end

