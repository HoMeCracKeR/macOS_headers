//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUndoManager, TSUWeakReference;

@interface TSAUndoManagerChangeObserver : NSObject
{
    NSUndoManager *_undoManager;
    TSUWeakReference *_weakDelegate;
    unsigned long long _ignoreNotificationsCount;
}

- (void)_changeWillBeDone:(id)arg1;
- (void)_changeWasDone:(id)arg1;
- (void)_changeWasRedone:(id)arg1;
- (void)_changeWasUndone:(id)arg1;
- (void)dealloc;
- (id)initWithUndoManager:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

