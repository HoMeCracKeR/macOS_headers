//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXAssetTransitioning-Protocol.h"
#import "IPXBrowserControllerBarsHelperDataSource-Protocol.h"
#import "IPXContentFilterMenuStatus-Protocol.h"
#import "IPXLibraryTestElement-Protocol.h"
#import "IPXPhotosGridSliderController-Protocol.h"
#import "IPXSelectionContainerProvider-Protocol.h"
#import "IPXShareServicesAnimationSource-Protocol.h"
#import "IPXWorkspaceMenuItemEnableProtocol-Protocol.h"
#import "NSDraggingDestination-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSMenuItemValidation-Protocol.h"
#import "NSTouchBarProvider-Protocol.h"
#import "PXChangeObserver-Protocol.h"
#import "PXContentFilterControllerDelegate-Protocol.h"
#import "PXCuratedLibraryActionPerformerDelegate-Protocol.h"
#import "PXCuratedLibraryFooterControllerDelegate-Protocol.h"
#import "PXGAXResponder-Protocol.h"
#import "PXGViewAccessibilityDelegate-Protocol.h"
#import "PXGViewMouseSessionDelegate-Protocol.h"
#import "PXGViewSource-Protocol.h"
#import "PXScrollViewControllerObserver-Protocol.h"

@class IPXBrowserControllerBarsHelper, IPXContentFilterController, IPXFilePromiseHelper, IPXPhotosGridSliderController, IPXSelectionContainer, IPXWorkspaceController, IPXZoomButtonItem, NSArray, NSDictionary, NSScrollView, NSString, NSTouchBar, NSTrackingArea, NSView, PXCPLUIStatusProvider, PXCuratedLibraryViewProvider, PXGViewMouseSession, UXBarButtonItem, UXNavigationController;
@protocol PXBrowserSelectionSnapshot, PXGAXResponder;

__attribute__((visibility("hidden")))
@interface IPXCuratedLibraryViewController : IPXViewController <IPXLibraryTestElement, IPXSelectionContainerProvider, IPXAssetTransitioning, IPXBrowserControllerBarsHelperDataSource, IPXPhotosGridSliderController, IPXWorkspaceMenuItemEnableProtocol, PXCuratedLibraryActionPerformerDelegate, PXContentFilterControllerDelegate, IPXContentFilterMenuStatus, PXCuratedLibraryFooterControllerDelegate, PXGViewMouseSessionDelegate, PXGViewSource, PXScrollViewControllerObserver, PXChangeObserver, PXGViewAccessibilityDelegate, PXGAXResponder, NSMenuDelegate, NSTouchBarProvider, NSDraggingDestination, NSMenuItemValidation, IPXShareServicesAnimationSource>
{
    NSTrackingArea *_trackingArea;
    id _photoLibraryPauseToken;
    IPXPhotosGridSliderController *_sliderController;
    IPXZoomButtonItem *_zoomButtonItem;
    UXBarButtonItem *_toggleButtonItem;
    UXBarButtonItem *_progressButtonItem;
    NSView *_contextualAnchorView;
    CDUnknownBlockType _testElement_zoomLevelTransitionCompletion;
    NSView *_rolloverDecorationView;
    BOOL _isContentVisible;
    BOOL _shouldScrollToInitialPositionOnViewWillAppearInitially;
    BOOL _shouldNavigateToRevealSelectionOnViewWillAppearInitially;
    BOOL _viewAppearedInitially;
    NSTouchBar *_touchBar;
    id <PXGAXResponder> _axNextResponder;
    PXCuratedLibraryViewProvider *_viewProvider;
    IPXBrowserControllerBarsHelper *_barsHelper;
    IPXFilePromiseHelper *_filePromiseHelper;
    IPXContentFilterController *_contentFilterController;
    PXGViewMouseSession *_mouseSession;
    PXCPLUIStatusProvider *_cplUIStatusProvider;
}

+ (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1 library:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider; // @synthesize cplUIStatusProvider=_cplUIStatusProvider;
@property(retain, nonatomic) PXGViewMouseSession *mouseSession; // @synthesize mouseSession=_mouseSession;
@property(nonatomic) BOOL viewAppearedInitially; // @synthesize viewAppearedInitially=_viewAppearedInitially;
@property(readonly, nonatomic) IPXContentFilterController *contentFilterController; // @synthesize contentFilterController=_contentFilterController;
@property(readonly, nonatomic) IPXFilePromiseHelper *filePromiseHelper; // @synthesize filePromiseHelper=_filePromiseHelper;
@property(readonly, nonatomic) IPXBrowserControllerBarsHelper *barsHelper; // @synthesize barsHelper=_barsHelper;
@property(readonly, nonatomic) PXCuratedLibraryViewProvider *viewProvider; // @synthesize viewProvider=_viewProvider;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
@property(readonly) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
- (void)_testElement_notifyZoomLevelTransitionCompleted;
- (id)_decorationViewForAssetAtIndexPath:(struct PXSimpleIndexPath)arg1 dataSource:(id)arg2;
- (void)_handleZoomLevelTransitionPhaseChanged;
- (unsigned long long)_targetDirectionForMove:(SEL)arg1;
- (void)_setSelectedIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)_selectionIndexPathForHitTestResult:(id)arg1;
- (id)_hitTestResultAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct NSEdgeInsets)_anchorPaddingForCurrentZoomLevel;
- (void)_scrollToIndexPath:(struct PXSimpleIndexPath)arg1;
- (void)_scrollLibraryViewToInitialPositionAnimated:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)_tabBarItemIndexForZoomLevel:(long long)arg1;
- (void)_setZoomLevel:(long long)arg1;
- (long long)_zoomLevelForTabBarItemIndex:(unsigned long long)arg1;
- (void)_updateContentFilterState;
- (void)_updateCellStyle;
- (void)_updateViewContent;
- (void)_conditionallyUpdateEmptyPlaceholder;
- (void)_updateZoomSlider;
- (void)_updateTrailingBarButtonItems;
- (void)_updateLeadingBarButtonItems;
- (BOOL)metadataMenuItemsEnabled;
- (void)photosGridSliderController:(id)arg1 didChangeContinuousValue:(double)arg2 finished:(BOOL)arg3;
- (void)photosGridSliderController:(id)arg1 didChangeValue:(unsigned long long)arg2;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_forceAllPhotosAccurateForTopScrollIfNeeded;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (id)presentingViewControllerForFooterController:(id)arg1;
- (void)footerControllerRevealFooter:(id)arg1;
- (BOOL)_scrollToAXGroup:(id)arg1 userInfo:(id)arg2;
- (BOOL)_scrollToAXInfo:(id)arg1;
- (BOOL)_scrollToAXElement:(id)arg1 userInfo:(id)arg2;
- (struct CGPoint)_locationForAXElement:(id)arg1 inView:(id)arg2;
- (BOOL)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (void)_handleLayoutChange:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)axContainingViewForAXGroup:(id)arg1;
- (void)_selectionDidChange;
- (void)notifySelectedCellsChanged;
- (void)axScrollToAsset:(id)arg1;
- (id)assetClosestToAsset:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)selectAsset:(id)arg1;
- (struct PXSimpleIndexPath)_indexPathForAsset:(id)arg1;
- (id)hitTestResultAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (BOOL)itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemWasRightClickedWithHitTestResult:(id)arg1 location:(struct CGPoint)arg2;
- (BOOL)itemWasDoubleClickedWithHitTestResult:(id)arg1;
- (id)selectedIndexPaths;
@property(readonly, nonatomic) id <PXBrowserSelectionSnapshot> selectionSnapshot;
- (struct CGRect)shareServicesScreenBoundsForAsset:(id)arg1 representativeImage:(struct CGImage **)arg2;
- (id)animatedTransitionItemsForProposedItems:(id)arg1 operation:(long long)arg2;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1 imageRect:(struct CGRect *)arg2 cornerRadius:(double *)arg3;
- (id)itemsForAnimatedTransitionWithOperation:(long long)arg1;
- (id)makeTouchBar;
- (void)menuDidClose:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseSession:(id)arg1 createdDraggingSession:(id)arg2 forSelectionSnapshot:(id)arg3;
- (id)mouseSession:(id)arg1 draggingItemsForSelectionSnapshot:(id)arg2;
- (void)mouseSession:(id)arg1 backgroundWasRightClickedWithEvent:(id)arg2;
- (void)_itemWasRightClickedWithHitTestResult:(id)arg1 event:(id)arg2;
- (void)mouseSession:(id)arg1 itemForHitTestResult:(id)arg2 wasRightClickedWithEvent:(id)arg3;
- (void)_itemWasDoubleClickedWithHitTestResult:(id)arg1;
- (void)mouseSession:(id)arg1 itemForHitTestResult:(id)arg2 wasDoubleClickedWithEvent:(id)arg3;
- (void)mouseSession:(id)arg1 itemForHitTestResult:(id)arg2 wasClickedWithEvent:(id)arg3;
- (BOOL)_attemptZoomInWithAssetReference:(id)arg1;
- (void)_selectAssetReference:(id)arg1;
- (void)_selectAssetWhenAvailable:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_enterOneUpWithConfiguration:(id)arg1 focusedOnAssetReference:(id)arg2;
- (BOOL)mouseSession:(id)arg1 itemIsControlForHitTestResult:(id)arg2;
- (id)mouseSession:(id)arg1 indexPathsFromIndexPath:(struct PXSimpleIndexPath)arg2 toIndexPath:(struct PXSimpleIndexPath)arg3 inDataSource:(id)arg4;
- (id)mouseSession:(id)arg1 indexPathsInRect:(struct CGRect)arg2;
- (struct PXSimpleIndexPath)mouseSession:(id)arg1 indexPathAtPoint:(struct CGPoint)arg2;
- (id)mouseSession:(id)arg1 hitTestResultAtPoint:(struct CGPoint)arg2;
- (void)mouseSessionDidFinishInteractiveSelection:(id)arg1;
- (void)mouseSessionWillStartInteractiveSelection:(id)arg1;
@property(readonly, nonatomic) IPXSelectionContainer *selectionContainer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)currentContentFilteringMenuItems;
- (void)contentFilterController:(id)arg1 filterStateChanged:(id)arg2;
- (void)assetCollectionActionPerformer:(id)arg1 showMapWithAssetsFetchResult:(id)arg2;
- (void)assetCollectionActionPerformer:(id)arg1 playMovieForAssetCollection:(id)arg2;
- (void)curatedLibraryActionPerformer:(id)arg1 showFilterPopoverWithInsets:(struct NSEdgeInsets)arg2;
- (void)a_showLocationInfo:(id)arg1;
- (void)a_showContentFilterOptions:(id)arg1;
- (void)a_selectItemsInSection:(id)arg1;
- (void)a_zoomOut:(id)arg1;
- (void)a_zoomIn:(id)arg1;
- (void)a_toggleAspectRatio:(id)arg1;
- (void)a_toggleCaptionEdit:(id)arg1;
- (void)a_toggleEdit:(id)arg1;
- (void)a_toggleViewer:(id)arg1;
- (void)a_goToContainer:(id)arg1;
- (void)a_openSelectedItems:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)_moveAndModifySelection:(id)arg1 inDirection:(unsigned long long)arg2;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)_moveInDirection:(unsigned long long)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_updateRolloverDecorationViewWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_createMouseSession;
- (id)topmostAssetCollection;
- (id)visibleContentSnapshot;
- (void)updateForEqualNavigationDestination:(id)arg1;
- (id)preferredTabBarItemSegmentForNavigationDestination:(id)arg1;
- (void)performActionForSelectingCurrentTabBarItemSegment;
- (void)prepareForTransitionToSelectedTabBarItemSegmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleEnabledSegmentsChange;
- (void)_navigateToRevealSelectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_navigateToRevealObjectReference:(id)arg1 select:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)navigationDestination;
- (void)prepareForTransitionWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)px_referenceSize;
- (id)preferredFirstResponder;
- (void)didUpdateLayoutGuides;
- (struct NSEdgeInsets)px_layoutMargins;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewWillAppearInitially;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)testElement_shareSelectedItemsToServiceNamed:(id)arg1;
- (id)_testElement_currentTopMostOneUpTestElement;
- (void)testElement_exitOneUp;
- (id)testElement_enterOneUpFromSelectedItem;
@property(readonly, nonatomic) UXNavigationController *testElement_navigationController;
- (long long)testElement_numberOfItemsInSection:(long long)arg1;
@property(readonly, nonatomic) long long testElement_numberOfSections;
- (BOOL)testElement_selectNextItem;
- (BOOL)testElement_selectPreviousItem;
- (BOOL)testElement_selectLastItem;
@property(readonly, nonatomic) NSArray *testElement_indexPathsForSelectedItems;
- (BOOL)testElement_selectItemsAtIndexPaths:(id)arg1;
- (BOOL)testElement_selectItemAtIndexPath:(id)arg1;
- (BOOL)testElement_selectFirstItem;
- (BOOL)testElement_scrollToItemAtIndexPath:(id)arg1;
- (void)testElement_invalidateSelection;
@property(readonly, nonatomic) NSScrollView *testElement_scrollView;
- (void)testElement_forceAccurateAllSections;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BOOL testElement_isEmpty;
@property(readonly, nonatomic) BOOL testElement_isReady;
@property(readonly, nonatomic) NSDictionary *testElement_scrollingExtraInformation;
@property(readonly, nonatomic) IPXWorkspaceController *workspaceController;

@end

