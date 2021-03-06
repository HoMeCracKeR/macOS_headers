//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SolidColorView.h"

#import "iTermDragHandleViewDelegate.h"
#import "iTermGenericStatusBarContainer.h"
#import "iTermStoplightHotboxDelegate.h"
#import "iTermTabBarControlViewDelegate.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, NSTextField, PTYTabView, iTermDragHandleView, iTermFakeWindowTitleLabel, iTermGenericStatusBarContainer, iTermLayerBackedSolidColorView, iTermStandardWindowButtonsView, iTermStatusBarViewController, iTermStoplightHotbox, iTermTabBarBacking, iTermTabBarControlView, iTermToolbeltView, iTermWindowSizeView;

@interface iTermRootTerminalView : SolidColorView <iTermTabBarControlViewDelegate, iTermDragHandleViewDelegate, iTermGenericStatusBarContainer, iTermStoplightHotboxDelegate>
{
    BOOL _tabViewFrameReduced;
    BOOL _haveShownToolbelt;
    iTermStoplightHotbox *_stoplightHotbox;
    iTermStandardWindowButtonsView *_standardWindowButtonsView;
    NSMutableDictionary *_standardButtons;
    NSString *_windowTitle;
    NSNumber *_windowNumber;
    NSTextField *_windowNumberLabel;
    iTermFakeWindowTitleLabel *_windowTitleLabel;
    iTermTabBarBacking *_tabBarBacking;
    iTermGenericStatusBarContainer *_statusBarContainer;
    NSDictionary *_desiredToolbeltProportions;
    iTermWindowSizeView *_windowSizeView;
    iTermLayerBackedSolidColorView *_titleBackgroundView;
    iTermLayerBackedSolidColorView *_topBorderView;
    iTermLayerBackedSolidColorView *_rightBorderView;
    iTermLayerBackedSolidColorView *_bottomBorderView;
    iTermLayerBackedSolidColorView *_leftBorderView;
    BOOL _shouldShowToolbelt;
    BOOL _useMetal;
    BOOL _tabBarControlOnLoan;
    id <iTermRootTerminalViewDelegate> _delegate;
    PTYTabView *_tabView;
    iTermTabBarControlView *_tabBarControl;
    SolidColorView *_divisionView;
    iTermToolbeltView *_toolbelt;
    double _toolbeltWidth;
    double _leftTabBarWidth;
    double _leftTabBarPreferredWidth;
    iTermStatusBarViewController *_statusBarViewController;
    iTermDragHandleView *_leftTabBarDragHandle;
}

@property(retain, nonatomic) iTermDragHandleView *leftTabBarDragHandle; // @synthesize leftTabBarDragHandle=_leftTabBarDragHandle;
@property(readonly, nonatomic) iTermStatusBarViewController *statusBarViewController; // @synthesize statusBarViewController=_statusBarViewController;
@property(readonly, nonatomic) BOOL tabBarControlOnLoan; // @synthesize tabBarControlOnLoan=_tabBarControlOnLoan;
@property(nonatomic) BOOL useMetal; // @synthesize useMetal=_useMetal;
@property(readonly, nonatomic) double leftTabBarPreferredWidth; // @synthesize leftTabBarPreferredWidth=_leftTabBarPreferredWidth;
@property(readonly, nonatomic) double leftTabBarWidth; // @synthesize leftTabBarWidth=_leftTabBarWidth;
@property(nonatomic) double toolbeltWidth; // @synthesize toolbeltWidth=_toolbeltWidth;
@property(nonatomic) BOOL shouldShowToolbelt; // @synthesize shouldShowToolbelt=_shouldShowToolbelt;
@property(retain, nonatomic) iTermToolbeltView *toolbelt; // @synthesize toolbelt=_toolbelt;
@property(retain, nonatomic) SolidColorView *divisionView; // @synthesize divisionView=_divisionView;
@property(retain, nonatomic) iTermTabBarControlView *tabBarControl; // @synthesize tabBarControl=_tabBarControl;
@property(retain, nonatomic) PTYTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) __weak id <iTermRootTerminalViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)genericStatusBarContainerBackgroundColor;
- (BOOL)stoplightHotboxCanDrag;
- (id)stoplightHotboxOutlineColor;
- (id)stoplightHotboxColor;
- (BOOL)stoplightHotboxMouseEnter;
- (void)stoplightHotboxMouseExit;
- (void)dragHandleViewDidFinishMoving:(id)arg1;
- (double)dragHandleView:(id)arg1 didMoveBy:(double)arg2;
- (BOOL)iTermTabBarShouldHideBacking;
- (BOOL)iTermTabBarCanDragWindow;
- (BOOL)iTermTabBarWindowIsFullScreen;
- (void)iTermTabBarDidFinishFlash;
- (void)iTermTabBarWillBeginFlash;
- (BOOL)iTermTabBarShouldFlashAutomatically;
- (void)layoutStatusBar:(CDStruct_c3b9c2ee *)arg1 window:(id)arg2 frame:(struct CGRect)arg3;
- (void)layoutIfStatusBarChanged;
- (void)updateDecorationHeightsForStatusBar:(CDStruct_c3b9c2ee *)arg1;
- (unsigned long long)statusBarContainerAutoresizingMask;
- (struct CGRect)frameForStatusBarInContainingFrame:(struct CGRect)arg1;
- (void)willShowTabBar;
- (void)setLeftTabBarWidthFromPreferredWidth;
- (double)leftTabBarWidthForPreferredWidth:(double)arg1;
- (double)leftTabBarWidthForPreferredWidth:(double)arg1 contentWidth:(double)arg2;
- (double)minimumTabBarWidth;
- (void)layoutSubviews;
- (void)layoutWindowPaneDecorations;
- (void)layoutSubviewsWithVisibleLeftTabBarAndInlineToolbelt:(BOOL)arg1 forWindow:(id)arg2;
- (void)setTabBarControlAutoresizingMask:(unsigned long long)arg1;
- (struct CGRect)tabViewFrameByShrinkingForFullScreenTabBar:(struct CGRect)arg1 window:(id)arg2;
- (void)layoutSubviewsWithVisibleBottomTabBarForWindow:(id)arg1;
- (void)setTabBarFrame:(struct CGRect)arg1;
- (void)layoutSubviewsTopTabBarVisible:(BOOL)arg1 forWindow:(id)arg2;
- (void)layoutSubviewsWithHiddenTabBarForWindow:(id)arg1;
- (BOOL)shouldLeaveEmptyAreaAtTop;
- (void)layoutSubviewsWithVisibleTabBarForWindow:(id)arg1 inlineToolbelt:(BOOL)arg2;
- (void)updateWindowNumberFont;
- (void)removeLeftTabBarDragHandle;
@property(readonly, nonatomic) double tabviewWidth;
- (BOOL)tabBarShouldBeVisibleWithAdditionalTabs:(int)arg1;
- (BOOL)tabBarShouldBeVisibleEvenWhenOnLoan;
@property(readonly, nonatomic) BOOL tabBarShouldBeVisible;
@property(readonly, nonatomic) BOOL scrollbarShouldBeVisible;
- (void)shutdown;
- (void)updateToolbeltFrameForWindow:(id)arg1;
- (struct CGRect)toolbeltFrameInWindow:(id)arg1;
- (double)maximumToolbeltWidthForViewWidth:(double)arg1;
- (void)constrainToolbeltWidth;
- (void)updateToolbeltForWindow:(id)arg1;
- (void)updateDivisionViewAndWindowNumberLabel;
- (void)windowDidResize;
- (void)setShowsWindowSize:(BOOL)arg1;
- (void)updateToolbeltProportionsIfNeeded;
- (void)setToolbeltProportions:(id)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)windowNumberDidChangeTo:(id)arg1;
- (void)returnTabBarControlView:(id)arg1;
- (id)borrowTabBarControl;
- (void)setWindowTitleIcon:(id)arg1;
- (void)setWindowTitleLabelToString:(id)arg1 icon:(id)arg2;
- (void)windowTitleDidChangeTo:(id)arg1;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateTitleAndBorderViews;
- (struct CGRect)frameForBottomBorderView;
- (struct CGRect)frameForTopBorderView;
- (struct CGRect)frameForRightBorderView;
- (struct CGRect)frameForLeftBorderView;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)frameForTitleBackgroundView;
- (void)flagsChanged:(id)arg1;
- (void)didChangeCompactness;
- (void)viewDidMoveToWindow;
- (long long)numberOfWindowButtons;
- (unsigned long long *)windowButtonTypes;
- (struct CGRect)frameForWindowTitleLabel:(id)arg1 getLeftAligned:(char *)arg2;
- (struct CGRect)frameForWindowTitleLabel;
- (struct CGRect)frameForWindowNumberLabel;
- (struct CGRect)frameForStandardWindowButtons;
- (struct NSEdgeInsets)insetsForStoplightHotbox;
- (double)strideForWindowButtons;
- (double)leftInsetForWindowButtons;
- (BOOL)mouseDownCanMoveWindow;
- (id)menuForEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)invalidateAutomaticTabBarBackingHiding;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 tabBarDelegate:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

