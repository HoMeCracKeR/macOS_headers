//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface PLOPTICSClusterDescriptor : NSObject
{
    NSNumber *_startIndex;
    NSNumber *_endIndex;
    NSNumber *_clusterSize;
    NSNumber *_rootLevel;
    NSNumber *_minCoreDistanceIndex;
    NSNumber *_minCoreDistance;
}

+ (id)clusterDescriptor:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSNumber *minCoreDistance; // @synthesize minCoreDistance=_minCoreDistance;
@property(readonly, retain, nonatomic) NSNumber *minCoreDistanceIndex; // @synthesize minCoreDistanceIndex=_minCoreDistanceIndex;
@property(readonly, retain, nonatomic) NSNumber *rootLevel; // @synthesize rootLevel=_rootLevel;
@property(readonly, retain, nonatomic) NSNumber *clusterSize; // @synthesize clusterSize=_clusterSize;
@property(readonly, retain, nonatomic) NSNumber *endIndex; // @synthesize endIndex=_endIndex;
@property(readonly, retain, nonatomic) NSNumber *startIndex; // @synthesize startIndex=_startIndex;
@property(readonly, nonatomic) struct _NSRange indexRange;
- (id)initWithParameters:(struct _NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4;

@end

