//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSString, PGGraphNode;

@interface PGPotentialBusinessMemory : PGPotentialMemory
{
    NSMutableSet *_mutableMomentNodes;
    PGGraphNode *_businessNode;
    long long _year;
}

- (void).cxx_destruct;
@property(readonly) long long year; // @synthesize year=_year;
@property(readonly) PGGraphNode *businessNode; // @synthesize businessNode=_businessNode;
- (void)addMomentNode:(id)arg1;
@property(readonly) NSString *business;
- (id)initWithBusinessNode:(id)arg1 year:(long long)arg2;

@end

