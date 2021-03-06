//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface iTermThroughputEstimator : NSObject
{
    NSMutableArray *_buckets;
    double _historyDuration;
    double _secondsPerBucket;
    double _startTime;
    long long _lastTimeIndex;
}

- (double)eraseBucketsIfNeeded;
- (void)addByteCount:(long long)arg1;
@property(readonly, nonatomic) long long estimatedThroughput;
- (void)dealloc;
- (id)initWithHistoryOfDuration:(double)arg1 secondsPerBucket:(double)arg2;

@end

