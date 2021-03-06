//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneController.h"

@class NSArrayController, NSTextField, TMALocFittingSegmentedControl;

@interface TMAChartAxisSwitcherPaneController : TMAChartInspectorPaneController
{
    TMALocFittingSegmentedControl *mAxisSelectionControl;
    NSArrayController *mChartsArrayController;
    NSTextField *_axisLabel;
}

+ (id)p_findSimilarAxisGroup:(id)arg1 axisGroups:(id)arg2;
+ (void)updateVisibilityStateForEditingState:(id)arg1;
+ (id)keyPathsForValuesAffectingSelectedSegment;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) __weak NSTextField *axisLabel; // @synthesize axisLabel=_axisLabel;
@property(retain) NSArrayController *chartsArrayController; // @synthesize chartsArrayController=mChartsArrayController;
@property(nonatomic) __weak TMALocFittingSegmentedControl *axisSelectionControl; // @synthesize axisSelectionControl=mAxisSelectionControl;
- (void).cxx_destruct;
- (id)p_axisIDStringForAxisGroup:(id)arg1;
- (void)updatePanes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_updateChildPanes;
- (void)p_updateSegments;
- (void)p_segmentClicked:(id)arg1;
@property(nonatomic) long long selectedSegment;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)needsPaneDivider;

@end

