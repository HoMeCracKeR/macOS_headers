//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSTTableSelectionMoverKnobTrackerAccessibility_super.h"

@class NSString, TSTTableRepAccessibility;

@interface TSTTableSelectionMoverKnobTrackerAccessibility : __TSTTableSelectionMoverKnobTrackerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
@property(readonly, nonatomic) TSTTableRepAccessibility *_tsaxDropZoneTableRep;
@property(readonly, nonatomic) TSTTableRepAccessibility *_tsaxTableRep;
@property(readonly, nonatomic) struct TSUCellRect _tsaxDropZoneCellRange;
@property(readonly, nonatomic) struct TSUCellRect _tsaxKnobTrackInitialSelection;
- (void)endMovingKnob;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (void)beginMovingKnob;
@property(retain, nonatomic, setter=_tsaxSetLastSpokenTableDescription:) NSString *_tsaxLastSpokenTableDescription;
@property(retain, nonatomic, setter=_tsaxSetLastSpokenLocationDescription:) NSString *_tsaxLastSpokenLocationDescription;

@end

