//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FLUMediaViewController.h"

#import "FLUMediaCommentTableCellViewDelegate-Protocol.h"
#import "FLUMediaComposeViewDelegate-Protocol.h"
#import "FLUMediaLoadMoreCommentsTableCellViewDelegate-Protocol.h"
#import "FLUMediaProfileUserTableCellViewDelegate-Protocol.h"
#import "FLUTableViewDataSource-Protocol.h"
#import "FLUTableViewDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class FLUBlurView, FLUComment, FLUHoverButton, FLUMediaComposeView, FLUMediaTableCommentThreadHeaderView, FLUMediaTableSectionHeaderCellView, FLUTableView, FLUTextField, FLUView, NSArrayController, NSMutableDictionary, NSMutableSet, NSString;

@interface FLUMediaCommentThreadViewController : FLUMediaViewController <NSMenuDelegate, FLUTableViewDataSource, FLUTableViewDelegate, FLUMediaProfileUserTableCellViewDelegate, FLUMediaCommentTableCellViewDelegate, FLUMediaComposeViewDelegate, FLUMediaLoadMoreCommentsTableCellViewDelegate>
{
    BOOL _editViewMode;
    BOOL _ignoreModifiedObjectsNotification;
    BOOL _loadingMoreContent;
    BOOL _disableLoadMoreView;
    BOOL _fetchingFeed;
    BOOL _emptyFeed;
    BOOL _hideMenuOnNextScroll;
    BOOL _observingScrollViewDelegateCallbacks;
    BOOL _focusAddCommentTextFieldOnAppearance;
    BOOL _composeCommentViewVisible;
    FLUComment *_comment;
    FLUTableView *_tableView;
    FLUMediaTableCommentThreadHeaderView *_tableHeaderView;
    FLUMediaTableSectionHeaderCellView *_tableCommentsSectionHeaderView;
    FLUMediaComposeView *_composeCommentView;
    double _lastComposeCommentViewHeight;
    NSArrayController *_arrayController;
    NSMutableSet *_observedClasses;
    unsigned long long _lastRowIndex;
    unsigned long long _commentsPage;
    NSString *_nextMaxCommentsID;
    unsigned long long _addedCommentsCount;
    unsigned long long _keyboardScrollDirection;
    unsigned long long _mouseScrollDirection;
    double _lastScrollViewContentOffset;
    NSMutableDictionary *_cachedRowHeightsDict;
    NSMutableSet *_selectedObjects;
    FLUComment *_replyingToComment;
    FLUView *_replyingToCommentView;
    FLUView *_replyingToCommentBorderView;
    FLUBlurView *_replyingToCommentBlurView;
    FLUTextField *_replyingToCommentLabel;
    FLUHoverButton *_replyingToCommentCancelButton;
    unsigned long long _childCommentSectionsCount;
}

@property(nonatomic) unsigned long long childCommentSectionsCount; // @synthesize childCommentSectionsCount=_childCommentSectionsCount;
@property(retain, nonatomic) FLUHoverButton *replyingToCommentCancelButton; // @synthesize replyingToCommentCancelButton=_replyingToCommentCancelButton;
@property(retain, nonatomic) FLUTextField *replyingToCommentLabel; // @synthesize replyingToCommentLabel=_replyingToCommentLabel;
@property(retain, nonatomic) FLUBlurView *replyingToCommentBlurView; // @synthesize replyingToCommentBlurView=_replyingToCommentBlurView;
@property(retain, nonatomic) FLUView *replyingToCommentBorderView; // @synthesize replyingToCommentBorderView=_replyingToCommentBorderView;
@property(retain, nonatomic) FLUView *replyingToCommentView; // @synthesize replyingToCommentView=_replyingToCommentView;
@property(retain, nonatomic) FLUComment *replyingToComment; // @synthesize replyingToComment=_replyingToComment;
@property(retain, nonatomic) NSMutableSet *selectedObjects; // @synthesize selectedObjects=_selectedObjects;
@property(retain, nonatomic) NSMutableDictionary *cachedRowHeightsDict; // @synthesize cachedRowHeightsDict=_cachedRowHeightsDict;
@property(nonatomic) BOOL composeCommentViewVisible; // @synthesize composeCommentViewVisible=_composeCommentViewVisible;
@property(nonatomic) BOOL focusAddCommentTextFieldOnAppearance; // @synthesize focusAddCommentTextFieldOnAppearance=_focusAddCommentTextFieldOnAppearance;
@property(nonatomic) BOOL observingScrollViewDelegateCallbacks; // @synthesize observingScrollViewDelegateCallbacks=_observingScrollViewDelegateCallbacks;
@property(nonatomic) BOOL hideMenuOnNextScroll; // @synthesize hideMenuOnNextScroll=_hideMenuOnNextScroll;
@property(nonatomic) double lastScrollViewContentOffset; // @synthesize lastScrollViewContentOffset=_lastScrollViewContentOffset;
@property(nonatomic) unsigned long long mouseScrollDirection; // @synthesize mouseScrollDirection=_mouseScrollDirection;
@property(nonatomic) unsigned long long keyboardScrollDirection; // @synthesize keyboardScrollDirection=_keyboardScrollDirection;
@property(nonatomic) unsigned long long addedCommentsCount; // @synthesize addedCommentsCount=_addedCommentsCount;
@property(retain, nonatomic) NSString *nextMaxCommentsID; // @synthesize nextMaxCommentsID=_nextMaxCommentsID;
@property(nonatomic, getter=isEmptyFeed) BOOL emptyFeed; // @synthesize emptyFeed=_emptyFeed;
@property(nonatomic, getter=isFetchingFeed) BOOL fetchingFeed; // @synthesize fetchingFeed=_fetchingFeed;
@property(nonatomic) BOOL disableLoadMoreView; // @synthesize disableLoadMoreView=_disableLoadMoreView;
@property(nonatomic) BOOL loadingMoreContent; // @synthesize loadingMoreContent=_loadingMoreContent;
@property(nonatomic) unsigned long long commentsPage; // @synthesize commentsPage=_commentsPage;
@property(nonatomic) unsigned long long lastRowIndex; // @synthesize lastRowIndex=_lastRowIndex;
@property(nonatomic) BOOL ignoreModifiedObjectsNotification; // @synthesize ignoreModifiedObjectsNotification=_ignoreModifiedObjectsNotification;
@property(retain, nonatomic) NSMutableSet *observedClasses; // @synthesize observedClasses=_observedClasses;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
@property(nonatomic) double lastComposeCommentViewHeight; // @synthesize lastComposeCommentViewHeight=_lastComposeCommentViewHeight;
@property(retain, nonatomic) FLUMediaComposeView *composeCommentView; // @synthesize composeCommentView=_composeCommentView;
@property(retain, nonatomic) FLUMediaTableSectionHeaderCellView *tableCommentsSectionHeaderView; // @synthesize tableCommentsSectionHeaderView=_tableCommentsSectionHeaderView;
@property(retain, nonatomic) FLUMediaTableCommentThreadHeaderView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) __weak FLUTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL editViewMode; // @synthesize editViewMode=_editViewMode;
@property(retain, nonatomic) FLUComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)focusCommentTextFieldWithReplyToComment:(id)arg1;
- (void)didPressTitleBarConfirmButton:(id)arg1;
- (void)didPressTitleBarCancelButton:(id)arg1;
- (void)updateSectionHeaderView;
- (void)translateSelectedComment;
- (void)toggleCommentViewVisibility;
- (void)focusCommentTextFieldWithText:(id)arg1;
- (void)toggleLikeForSelectedComment;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (id)replyingToCommentLabelAttributes;
- (void)findAndHighlightComment:(id)arg1;
- (void)hideReplyingToCommentView;
- (void)showReplyingToCommentView;
- (id)indexPathForComment:(id)arg1;
- (id)commentAtIndexPath:(id)arg1;
- (void)loadMoreComments;
- (void)fetchMoreFeedWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)fetchFeedAndScrollToTop:(BOOL)arg1 scrollToBottom:(BOOL)arg2 animated:(BOOL)arg3;
- (void)fetchFeedAndScrollToTop:(BOOL)arg1 animated:(BOOL)arg2;
- (void)fetchFeedWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)fetchBatchSize;
- (void)updateFrames;
- (void)resetMenu;
- (void)setDefaultTableViewContentInset:(BOOL)arg1 menuVisible:(BOOL)arg2;
- (void)setMenuVisibleTableViewContentInset:(BOOL)arg1;
- (void)setDefaultTableViewContentInset:(BOOL)arg1;
- (void)refreshView;
- (void)flu_didPressMediaLoadMoreCommentsCellViewButton:(id)arg1;
- (void)flu_mediaTableComposeView:(id)arg1 didResignFirstResponder:(id)arg2;
- (void)flu_mediaTableComposeView:(id)arg1 didPressSendButton:(id)arg2;
- (void)flu_mediaTableComposeView:(id)arg1 textDidResizeToHeight:(double)arg2;
- (void)checkForMoreContentWithRequest:(id)arg1;
- (void)scrollViewDidEndLiveScroll:(id)arg1;
- (void)scrollViewWillStartLiveScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)flu_didPressMediaCommentCellViewCommentUsername:(id)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaCommentCellViewCommentURL:(id)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaCommentCellViewCommentHashtag:(id)arg1 longPress:(BOOL)arg2;
- (void)flu_didPressMediaCommentCellViewComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewTranslateForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewSelectionButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewReplyButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewAllRepliesButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewLikeButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewLikesButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewReportCommentButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewResendCommentButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewDeleteCommentButtonForComment:(id)arg1;
- (void)flu_didPressMediaCommentCellViewAvatarButtonForComment:(id)arg1 longPress:(BOOL)arg2;
- (void)didClickRowAtIndexPath:(id)arg1 scrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)didClickRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didClickRowAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)cachedRowHeightForIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)updateRowHeightsCache;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2 forEvent:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 headerViewForSection:(long long)arg2;
- (void)reloadCoreDataObjectsAndReloadTableView:(BOOL)arg1;
- (void)reloadCoreDataObjects;
- (void)didPressReplyToCommentCancelButton:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)scrollToNextItem;
- (void)scrollToFirstItem;
- (void)scrollToPreviousItem;
- (void)scrollToLastItem;
- (void)scrollToNextPage;
- (void)scrollToPreviousPage;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)windowDidChangeFullScreenStatus:(id)arg1;
- (void)didChangeAlwaysShowMenuOption:(id)arg1;
- (void)menuWillHide:(id)arg1;
- (void)menuDidShow:(id)arg1;
- (void)windowShouldScrollToTop:(id)arg1;
- (void)applicationDidModifyObjects:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupAccessibility;
- (void)viewDidLoad;
- (void)dealloc;
- (void)localizeUserInterface;
- (id)initWithComment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

