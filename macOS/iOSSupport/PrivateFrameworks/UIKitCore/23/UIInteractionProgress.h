//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface UIInteractionProgress : NSObject
{
    NSPointerArray *_observers;
    double _previousPercentComplete;
    double _previousUpdateTime;
    double _mostRecentUpdateTime;
    long long _atLeastTwoUpdates;
    double _percentComplete;
}

@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void).cxx_destruct;
- (long long)numberOfObservers;
- (void)removeProgressObserver:(id)arg1;
- (void)addProgressObserver:(id)arg1;
- (unsigned long long)_indexOfObserver:(id)arg1;
- (void)endInteraction:(BOOL)arg1 finalVelocity:(double)arg2;
- (void)endInteraction:(BOOL)arg1;
@property(readonly, nonatomic) double velocity;
- (void)setPercentComplete:(double)arg1;
- (id)description;
- (id)init;

@end

