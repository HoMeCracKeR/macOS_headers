//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSWindowRestoration-Protocol.h"

@class NSString;

@interface CALMainWindowRestoration : NSObject <NSWindowRestoration>
{
}

+ (void)encodeRestorableState:(id)arg1 forMainController:(id)arg2;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_restoreCommonForMainController:(id)arg1 withState:(id)arg2;
+ (void)_restoreVisibleDatesForViewController:(id)arg1 withState:(id)arg2;
+ (BOOL)lastSaveIsUnderTimeLimitForRestore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

