//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RouteTableViewCell.h"

@class NSArray, NSLayoutConstraint, TransitArtworkListView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface TransitRouteTableViewCell : RouteTableViewCell
{
    BOOL _inRecursiveLayout;
    TransitArtworkListView *_shieldListView;
    NSLayoutConstraint *_topToShieldListViewConstraint;
    _MKUILabel *_badgeLabel;
    NSLayoutConstraint *_badgeLabelTrailingConstraint;
    NSLayoutConstraint *_topShieldViewToBadgeLabelConstraint;
    NSLayoutConstraint *_secondaryLabelBaselineAlignWithBadgeConstraint;
    NSLayoutConstraint *_secondaryLabelTrailingToBadgeLeadingConstraint;
    BOOL _canSpanFullWidth;
    double _leftPadding;
}

- (void).cxx_destruct;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) BOOL canSpanFullWidth; // @synthesize canSpanFullWidth=_canSpanFullWidth;
@property(readonly, nonatomic) NSArray *_indexedContentSubviewOrNullArray;
- (id)_buttonConstraintsController;
- (void)setShowDisclosureButton:(BOOL)arg1;
- (void)_configureRouteBadge;
- (id)_badgeLabelFont;
- (void)_updateRouteBadge;
- (void)_updateShieldListView;
- (void)_updateCellLabels;
- (void)_updateConstraintValues;
- (double)_distanceToPositionPrimaryLabelFirstBaseline;
- (id)_anchorFromWhichToPositionPrimaryLabelFirstBaseline;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
@property(readonly, nonatomic) struct UIEdgeInsets contentHorizontalMargins;
- (BOOL)_isShieldListViewOverlappingWithBadge;
- (void)layoutSubviews;
- (id)_autolayoutConstraints;
- (void)_createSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

