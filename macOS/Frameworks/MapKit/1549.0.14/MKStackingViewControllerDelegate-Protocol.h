//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKStackingViewController, _MKUIViewController;

@protocol MKStackingViewControllerDelegate <NSObject>

@optional
- (void)stackingViewController:(MKStackingViewController *)arg1 verticalScrollerInsetDidChangeDuringLayoutPhase:(long long)arg2;
- (void)stackingViewControllerDidEndScroll:(MKStackingViewController *)arg1;
- (void)stackingViewControllerWillBeginScroll:(MKStackingViewController *)arg1;
- (void)stackingViewController:(MKStackingViewController *)arg1 willSelectViewController:(_MKUIViewController *)arg2;
- (BOOL)stackingViewController:(MKStackingViewController *)arg1 showsTitleForViewController:(_MKUIViewController *)arg2;
- (void)stackingViewController:(MKStackingViewController *)arg1 calculatedTransformForHeaderView:(struct CATransform3D)arg2;
- (double)stackingViewControllerTopLayoutGuideLength:(MKStackingViewController *)arg1;
- (double)stackingViewControllerHeightForSelectorView:(MKStackingViewController *)arg1;
- (double)stackingViewControllerHeightForHeaderView:(MKStackingViewController *)arg1;
- (double)stackingViewControllerHeightForTitleView:(MKStackingViewController *)arg1;
- (void)stackingViewControllerUpdateSelectorView:(MKStackingViewController *)arg1;
@end

