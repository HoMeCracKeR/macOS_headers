//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXKeywordDragProtocol-Protocol.h"
#import "PXSectionedDataSourceManagerObserver-Protocol.h"

@class IPXKeywordsDataSource, IPXKeywordsDataSourceManager, IPXKeywordsGroupView, IPXKeywordsWindow, NSButton, NSMutableSet, NSSegmentedControl, NSString, NSTableView, NSTextField, NSUndoManager, NSView, PFCoalescer, PHPhotoLibrary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IPXKeywordsManagerController : NSObject <IPXKeywordDragProtocol, PXSectionedDataSourceManagerObserver>
{
    IPXKeywordsWindow *mWindow;
    NSView *mKeywordEditingView;
    NSView *mKeywordUsingView;
    NSTextField *mKeywordShortcutHint;
    NSView *mKeywordsView;
    NSButton *mEditKeywordsButton;
    IPXKeywordsGroupView *mKeywordsWithShortcuts;
    IPXKeywordsGroupView *mKeywordsWithoutShortcuts;
    NSTableView *mKeywordTable;
    NSSegmentedControl *mAddRemoveSegmentedControl;
    NSButton *mRenameButton;
    NSButton *mShortcutButton;
    NSString *mOriginalWindowTitle;
    BOOL mUserIntendsToDelete;
    struct CGSize mOriginalWindowSize;
    BOOL mIgnoreWindowResize;
    BOOL mIgnoreSelectionChanged;
    BOOL mAbortDoneWithEditing;
    unsigned long long _currentUpdateID;
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    PFCoalescer *_updateCoalescer;
    BOOL _keywordsLoaded;
    NSMutableSet *_keywordsInAllPhotos;
    NSMutableSet *_keywordsInSomePhotos;
    unsigned long long _selectedPhotoCount;
    BOOL _selectionIsReadOnly;
    BOOL _ignoreDatabaseMessages;
    NSString *_justAddedKeywordTitle;
    NSString *_renamedKeywordTitle;
    BOOL _isReloadingDataForDataSourceChanged;
    NSUndoManager *_undoManager;
    PHPhotoLibrary *_photoLibrary;
    IPXKeywordsDataSourceManager *_dataSourceManager;
}

@property(nonatomic) BOOL isReloadingDataForDataSourceChanged; // @synthesize isReloadingDataForDataSourceChanged=_isReloadingDataForDataSourceChanged;
@property(retain, nonatomic) IPXKeywordsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void).cxx_destruct;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)changeShortcut:(id)arg1;
- (void)renameKeyword:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(int)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)addOrRemoveKeyword:(id)arg1;
- (void)deleteKeyword:(id)arg1;
- (void)addKeyword:(id)arg1;
- (void)selectKeywordInEditor:(id)arg1 forEditing:(BOOL)arg2;
- (void)_selectKeywordInEditorWithIndex:(long long)arg1 forEditing:(BOOL)arg2;
- (void)_syncKeywordButtonStates;
- (void)doneEditKeywords:(id)arg1;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)_setupKeywordEditor;
- (void)_reloadEditor;
- (id)_keywordButtons;
- (void)_layOutCategoriesWithAutosize:(BOOL)arg1;
- (void)_reloadKeywordGroupViewsWithAutoResize:(BOOL)arg1;
- (id)_keywordsWithShortcuts:(BOOL)arg1;
- (void)_setWindowSizeToOriginal:(BOOL)arg1;
- (BOOL)performDragOperation:(id)arg1 view:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1 view:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 view:(id)arg2;
- (id)keystroke:(id)arg1;
- (void)keywordPressed:(id)arg1;
- (void)_toggleKeyword:(id)arg1;
- (void)_invokeToggleAnimationForKeyword:(id)arg1 assets:(id)arg2 add:(BOOL)arg3;
- (void)_add:(BOOL)arg1 keyword:(id)arg2 assets:(id)arg3;
- (void)groupPressed:(id)arg1;
- (void)groupDisclosurePressed:(id)arg1;
- (void)_keywordChanged:(id)arg1;
- (void)_reloadUIAfterKeywordListChange;
- (void)selectionChanged:(id)arg1;
- (void)_updateForSelectionWhenPossible;
- (void)editKeywords:(id)arg1;
- (void)_updateForSelectionChange:(id)arg1 updateId:(unsigned long long)arg2;
- (void)_updateButtonStates;
- (void)_listenForNotifications:(BOOL)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (void)windowDidResize:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)_untitledKeywordString;
- (BOOL)_keywordIsDefined:(id)arg1;
- (id)_fetchSelection:(char *)arg1;
@property(readonly, nonatomic) IPXKeywordsDataSource *dataSource;
- (BOOL)editingKeywords;
- (BOOL)isVisible;
- (void)toggleVisible:(id)arg1;
- (void)hide;
- (void)show;
- (void)awakeFromNib;
- (id)hintTextField;
- (id)keywordShortcutHintText;
- (void)dealloc;
- (void)delayedNibInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

