//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXFramerateMetric : MXMetric
{
    MXAverage *_averageFramerate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) MXAverage *averageFramerate; // @synthesize averageFramerate=_averageFramerate;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAverageFramerate:(id)arg1;
- (id)initWithAverageFramerate:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3;

@end

