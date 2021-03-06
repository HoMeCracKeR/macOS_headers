//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class FRAdjustableIndexMapEnumerator, FRFeedCollectionViewLayoutRegion, FRFeedCollectionViewLayoutSection;

@interface FRFeedCollectionViewLayoutBlueprintSectionRegionEnumerator : NSEnumerator
{
    BOOL _inReverse;
    BOOL _isFinished;
    long long _currentIndex;
    long long _currentRelativeYOrigin;
    FRFeedCollectionViewLayoutRegion *_currentRegion;
    FRFeedCollectionViewLayoutSection *_section;
    FRAdjustableIndexMapEnumerator *_indexEnumerator;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) BOOL inReverse; // @synthesize inReverse=_inReverse;
@property(retain, nonatomic) FRAdjustableIndexMapEnumerator *indexEnumerator; // @synthesize indexEnumerator=_indexEnumerator;
@property(retain, nonatomic) FRFeedCollectionViewLayoutSection *section; // @synthesize section=_section;
@property(retain, nonatomic) FRFeedCollectionViewLayoutRegion *currentRegion; // @synthesize currentRegion=_currentRegion;
@property(readonly, nonatomic) long long currentRelativeYOrigin; // @synthesize currentRelativeYOrigin=_currentRelativeYOrigin;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (id)nextObject;
- (id)initWithSection:(id)arg1 startingAtIndex:(long long)arg2 inReverse:(BOOL)arg3;
- (id)init;

@end

