//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PGGraph, PHFetchResult;

@interface PGSharingSuggestionInput : NSObject
{
    NSArray *_assetLocalIdentifiers;
    NSArray *_momentLocalIdentifiers;
    NSArray *_momentNodes;
    PHFetchResult *_assets;
    PHFetchResult *_moments;
    PGGraph *_graph;
}

@property(readonly, nonatomic) PGGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) PHFetchResult *moments;
@property(readonly, nonatomic) PHFetchResult *assets;
@property(readonly, nonatomic) NSArray *momentNodes;
- (id)initWithMomentNodes:(id)arg1;
- (id)initWithAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 andGraph:(id)arg3;

@end

