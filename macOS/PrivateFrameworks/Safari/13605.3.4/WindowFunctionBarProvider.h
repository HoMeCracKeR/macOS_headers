//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/FavoritesPickerFunctionBarProviderDelegate-Protocol.h>
#import <Safari/MediaPlaybackControlsHostViewControllerDelegate-Protocol.h>
#import <Safari/NSTouchBarDelegate-Protocol.h>
#import <Safari/NSTouchBarProvider-Protocol.h>
#import <Safari/PopoverTouchBarItemPlusDelegate-Protocol.h>
#import <Safari/UnifiedFieldButtonHostViewControllerDelegate-Protocol.h>
#import <Safari/VisualScrubberViewControllerDataSource-Protocol.h>
#import <Safari/VisualScrubberViewControllerDelegate-Protocol.h>

@class AVTouchBarScrubber, AccordionHostViewController, ButtonFunctionBarItem, FavoritesPickerFunctionBarProvider, MediaPlaybackControlsHostViewController, NSButton, NSCustomTouchBarItem, NSGroupTouchBarItem, NSMutableArray, NSString, NSTouchBar, NSWindow, PopoverTouchBarItemPlus, UnifiedFieldButtonHostViewController, VisualScrubberViewController;
@protocol WindowFunctionBarProviderDataSource, WindowFunctionBarProviderDelegate;

__attribute__((visibility("hidden")))
@interface WindowFunctionBarProvider : NSObject <FavoritesPickerFunctionBarProviderDelegate, MediaPlaybackControlsHostViewControllerDelegate, PopoverTouchBarItemPlusDelegate, UnifiedFieldButtonHostViewControllerDelegate, VisualScrubberViewControllerDataSource, VisualScrubberViewControllerDelegate, NSTouchBarDelegate, NSTouchBarProvider>
{
    VisualScrubberViewController *_visualTabScrubbingViewController;
    NSButton *_focusUnifiedFieldPopoverButton;
    NSButton *_openNewTabButton;
    AccordionHostViewController *_combinedAccordionHostViewController;
    MediaPlaybackControlsHostViewController *_mediaPlaybackControlsViewController;
    UnifiedFieldButtonHostViewController *_unifiedFieldButtonHostViewController;
    AccordionHostViewController *_accordionHostViewControllerForCustomization;
    PopoverTouchBarItemPlus *_combinedTabScrubberItem;
    NSGroupTouchBarItem *_mirroredGroupBarItem;
    NSCustomTouchBarItem *_backForwardButtonBarItem;
    ButtonFunctionBarItem *_readerButtonBarItem;
    ButtonFunctionBarItem *_newTabButtonBarItem;
    ButtonFunctionBarItem *_addBookmarkButtonBarItem;
    ButtonFunctionBarItem *_shareMenuButtonBarItem;
    ButtonFunctionBarItem *_visualTabPickerButtonBarItem;
    ButtonFunctionBarItem *_homeButtonBarItem;
    ButtonFunctionBarItem *_toggleHistoryButtonBarItem;
    ButtonFunctionBarItem *_sidebarButtonBarItem;
    ButtonFunctionBarItem *_favoritesBarButtonBarItem;
    ButtonFunctionBarItem *_autoFillButtonBarItem;
    ButtonFunctionBarItem *_webInspectorButtonBarItem;
    FavoritesPickerFunctionBarProvider *_favoritesPickerFunctionBarProvider;
    BOOL _favoritesPickerAvailable;
    BOOL _ignoreNextFunctionBarDidHideNotificationForFavoritesPicker;
    BOOL _isInteractingWithTabScrubber;
    BOOL _ignoreMediaControlsExpandedOrCollapsed;
    BOOL _isInsertingMediaPlaybackControls;
    BOOL _deferAccordionUpdatesUntilTabUpdatesFinish;
    NSMutableArray *_deferredAccordionUpdates;
    BOOL _isCustomizingFunctionBar;
    unsigned long long _tabScrubberCountBeforeBatchTabInsertion;
    BOOL _readerActive;
    NSTouchBar *_functionBar;
    NSWindow *_window;
    id <WindowFunctionBarProviderDataSource> _dataSource;
    id <WindowFunctionBarProviderDelegate> _delegate;
    unsigned long long _selectedTabIndex;
}

@property(nonatomic, getter=isReaderActive) BOOL readerActive; // @synthesize readerActive=_readerActive;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
@property(nonatomic) __weak id <WindowFunctionBarProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <WindowFunctionBarProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak NSWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (id)popoverItemPlusCustomCustomizationView:(id)arg1;
- (id)popoverItemPlusCollapsedRepresentation:(id)arg1;
- (void)_toggleWebInspector:(id)arg1;
- (void)_performAutoFill:(id)arg1;
- (void)_toggleFavoritesBar:(id)arg1;
- (void)_toggleSidebar:(id)arg1;
- (void)_toggleHistory:(id)arg1;
- (void)_goHome:(id)arg1;
- (void)_toggleVisualTabPicker:(id)arg1;
- (void)_showShareMenu:(id)arg1;
- (void)_addBookmark:(id)arg1;
- (void)_openNewTab:(id)arg1;
- (void)_toggleReader:(id)arg1;
- (void)_goBackForward:(id)arg1;
- (void)_focusUnifiedField:(id)arg1;
- (id)_webInspectorButtonBarItem;
- (id)_autoFillButtonBarItem;
- (id)_favoritesBarButtonBarItem;
- (id)_sidebarButtonBarItem;
- (id)_toggleHistoryButtonBarItem;
- (id)_homeButtonBarItem;
- (id)_visualTabPickerButtonBarItem;
- (id)_shareMenuButtonBarItem;
- (id)_backForwardFunctionBarItemControl;
- (id)_addBookmarkButtonBarItem;
- (id)_mirroredGroupBarItem;
- (id)_openNewTabButton;
- (id)_standaloneOpenNewTabButtonBarItem;
- (id)_readerButtonBarItem;
- (id)_backForwardButtonBarItem;
- (id)_focusUnifiedFieldPopoverButton;
- (id)_combinedTabScrubberItem;
- (id)_createFocusUnifiedFieldButton;
- (id)_unifiedFieldButtonHostViewController;
- (BOOL)_combinedAccordionShouldShowOpenNewTabButton;
- (BOOL)_shouldShowVisualTabScrubber;
- (void)handleButtonActionForHost:(id)arg1;
- (void)_touchBarWillExitCustomization:(id)arg1;
- (void)_touchBarWillEnterCustomization:(id)arg1;
- (void)_favoritesPickerFunctionBarDidHide;
- (void)_favoritesPickerFunctionBarDidShow;
- (void)_updateBackForwardButtonEnabledStates;
- (void)_updateButtonEnabledStates;
- (void)_windowDidUpdate:(id)arg1;
- (id)_visualTabScrubbingViewController;
- (void)_performTabScrubberMutatingBlockAndUpdateFunctionBarIfNeeded:(CDUnknownBlockType)arg1;
- (id)_makeFunctionBarItemForIdentifier:(id)arg1;
- (id)_customizationAllowedIdentifiers;
- (id)_defaultFunctionBarIdentifierSet;
- (void)mediaPlaybackControlsHostWillCollapse:(id)arg1;
- (void)mediaPlaybackControlsHostWillExpand:(id)arg1;
- (void)favoritesPickerFunctionBarProviderDidChangeFunctionBar:(id)arg1;
- (void)favoritesPickerFunctionBarProvider:(id)arg1 didUpdateFunctionBarAvailability:(BOOL)arg2;
- (void)favoritesPickerFunctionBarProvider:(id)arg1 didSelectFavorite:(id)arg2;
- (void)visualScrubberViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)visualScrubberViewControllerDidEndInteractionWithScrubber:(id)arg1;
- (void)visualScrubberViewControllerDidBeginInteractionWithScrubber:(id)arg1;
- (id)visualScrubberViewController:(id)arg1 accessibilityDescriptionForItemAtIndex:(unsigned long long)arg2;
- (id)visualScrubberViewController:(id)arg1 contentViewProviderForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForVisualScrubberViewController:(id)arg1;
- (void)dismissFavoritesPicker;
- (void)showFavoritesPicker;
- (void)reloadTabAtIndex:(unsigned long long)arg1;
- (void)moveTabFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeTabAtIndex:(unsigned long long)arg1 selectingTabAtIndex:(unsigned long long)arg2;
- (void)_invokeAndClearDeferredAccordionUpdatesIfNecessary;
- (void)didTryToCloseTab;
- (void)willTryToCloseTab;
- (void)didOpenNewTab;
- (void)willOpenNewTab;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)insertTabAtIndex:(unsigned long long)arg1;
- (void)endBatchTabManipulation;
- (void)beginBatchTabManipulation;
- (void)refreshItems;
- (void)setSelectedTabIndex:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)_updateCombinedAccordionHostForOpenNewTabButtonWithAnimationMode:(long long)arg1;
- (void)_updateCombinedAccordionHostForMediaPlaybackControls;
- (void)_updateCombinedAccordionHostForTransitionFromTabCount:(unsigned long long)arg1 toTabCount:(unsigned long long)arg2;
@property(nonatomic) __weak AVTouchBarScrubber *mediaPlaybackControlsView;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_functionBar;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

