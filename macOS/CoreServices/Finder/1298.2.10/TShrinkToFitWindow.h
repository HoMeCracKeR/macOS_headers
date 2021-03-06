//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class TShrinkToFitScrollView, TShrinkToFitTextView;

@interface TShrinkToFitWindow : NSPanel
{
    struct TNSWeakPtr<TShrinkToFitScrollView, void> _weakStfScrollView;
    struct TNSWeakPtr<TShrinkToFitTextView, void> _weakStfTextView;
    struct TNotificationCenterObserver _stfScrollViewFrameChangedObserver;
    struct TNotificationCenterObserver _stfScrollViewPreferredScrollerStyleDidChangeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)calcGlobalFrame;
- (void)sizeToFit;
- (BOOL)accessibilityIsIgnored;
- (void)_resignKeyFocus;
- (BOOL)_canBecomeSecondaryKeyWindow;
- (BOOL)canBecomeKeyWindow;
@property(nonatomic) __weak TShrinkToFitTextView *stfTextView; // @dynamic stfTextView;
@property(nonatomic) __weak TShrinkToFitScrollView *stfScrollView; // @dynamic stfScrollView;
- (id)initWithSTFTextView:(id)arg1;
- (double)_focusRingThickness;

@end

