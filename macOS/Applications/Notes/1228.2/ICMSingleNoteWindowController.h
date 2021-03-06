//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICMNoteEditorWindowController.h"

#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class ICMPasswordEntryViewController, ICMToolbarCenteringTextField, ICNote, NSButton, NSImage, NSMenu, NSMenuItem, NSString, NSToolbar, NSToolbarItem;

@interface ICMSingleNoteWindowController : ICMNoteEditorWindowController <NSToolbarDelegate, NSWindowDelegate>
{
    BOOL _titleToolbarBindingEnabled;
    BOOL _isKeyWindow;
    ICNote *_note;
    NSToolbar *_toolbar;
    ICMPasswordEntryViewController *_passwordViewController;
    NSMenu *_lockNotesToolbarTitleMenu;
    NSButton *_lockToolbarButton;
    NSMenuItem *_lockNotesToolbarImageMenuItem;
    NSButton *_checklistToolbarButton;
    NSButton *_styleToolbarButton;
    NSButton *_mediaToolbarButton;
    NSMenuItem *_mediaToolbarImageMenuItem;
    NSButton *_shareToolbarButton;
    NSButton *_tableToolbarButton;
    NSToolbarItem *_shareViaICloudToolbarButton;
    ICMToolbarCenteringTextField *_toolbarTitleTextField;
}

+ (id)keyPathsForValuesAffectingICloudSharingToolbarTooltip;
+ (id)keyPathsForValuesAffectingICloudSharingToolbarImage;
+ (id)keyPathsForValuesAffectingCanShareViaICloud;
+ (id)keyPathsForValuesAffectingCanStyleText;
+ (id)keyPathsForValuesAffectingAddPhotoButtonEnabled;
+ (id)keyPathsForValuesAffectingCanAddTable;
+ (id)keyPathsForValuesAffectingTableButtonEnabled;
+ (id)keyPathsForValuesAffectingCanToggleTodo;
+ (id)keyPathsForValuesAffectingCanShareNote;
+ (id)keyPathsForValuesAffectingIsNoteLocked;
+ (id)keyPathsForValuesAffectingCanDuplicateNotes;
- (void).cxx_destruct;
@property(nonatomic) BOOL isKeyWindow; // @synthesize isKeyWindow=_isKeyWindow;
@property(nonatomic) BOOL titleToolbarBindingEnabled; // @synthesize titleToolbarBindingEnabled=_titleToolbarBindingEnabled;
@property(nonatomic) __weak ICMToolbarCenteringTextField *toolbarTitleTextField; // @synthesize toolbarTitleTextField=_toolbarTitleTextField;
@property(nonatomic) __weak NSToolbarItem *shareViaICloudToolbarButton; // @synthesize shareViaICloudToolbarButton=_shareViaICloudToolbarButton;
@property(nonatomic) __weak NSButton *tableToolbarButton; // @synthesize tableToolbarButton=_tableToolbarButton;
@property(nonatomic) __weak NSButton *shareToolbarButton; // @synthesize shareToolbarButton=_shareToolbarButton;
@property(retain, nonatomic) NSMenuItem *mediaToolbarImageMenuItem; // @synthesize mediaToolbarImageMenuItem=_mediaToolbarImageMenuItem;
@property(nonatomic) __weak NSButton *mediaToolbarButton; // @synthesize mediaToolbarButton=_mediaToolbarButton;
@property(nonatomic) __weak NSButton *styleToolbarButton; // @synthesize styleToolbarButton=_styleToolbarButton;
@property(nonatomic) __weak NSButton *checklistToolbarButton; // @synthesize checklistToolbarButton=_checklistToolbarButton;
@property(nonatomic) __weak NSMenuItem *lockNotesToolbarImageMenuItem; // @synthesize lockNotesToolbarImageMenuItem=_lockNotesToolbarImageMenuItem;
@property(nonatomic) __weak NSButton *lockToolbarButton; // @synthesize lockToolbarButton=_lockToolbarButton;
@property(retain, nonatomic) NSMenu *lockNotesToolbarTitleMenu; // @synthesize lockNotesToolbarTitleMenu=_lockNotesToolbarTitleMenu;
@property(retain, nonatomic) ICMPasswordEntryViewController *passwordViewController; // @synthesize passwordViewController=_passwordViewController;
@property __weak NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)zoomReset:(id)arg1;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)setupAccessibility;
- (void)updateShareViaICloudToolbarButtonAccessibilityHelp;
- (void)updateChecklistToolbarButtonAccessibilityValue;
- (void)updateLockToolbarButtonAccessibilityValue;
- (id)toolbarItemViewerForButton:(id)arg1;
- (void)duplicateSelectedNotes:(id)arg1;
- (void)pinOrUnpinCurrentNote:(id)arg1;
- (void)updateWindowTitle;
- (void)noteDecryptedStatusDidChange:(id)arg1;
- (void)closePanelsForPasswordAuthenticationChange;
- (void)addOrRemovePasswordToCurrentNote:(id)arg1;
- (void)lockAllNotes:(id)arg1;
@property(readonly, nonatomic) NSString *iCloudSharingToolbarTooltip;
@property(readonly, nonatomic) NSImage *iCloudSharingToolbarImage;
- (void)shareViaICloud:(id)arg1;
@property(readonly, nonatomic) BOOL canShareViaICloud;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)setUpToolbar;
- (void)updateLockToolbarButtonImage;
- (void)setUpToolbarButtonImages;
@property(readonly, nonatomic) BOOL canStyleText;
- (BOOL)addPhotoButtonEnabled;
@property(readonly, nonatomic) BOOL canAddTable;
- (BOOL)tableButtonEnabled;
@property(readonly, nonatomic) BOOL canToggleTodo;
- (BOOL)canAddNewNote;
@property(readonly, nonatomic) BOOL canShareNote;
@property(readonly, nonatomic) BOOL isNoteLocked;
- (BOOL)canDuplicateNotes;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (void)toggleFloatOnTop:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)undoablyDeleteEmptyNoteWithUUID:(id)arg1;
- (void)undoablyAddEmptyNoteWithUUID:(id)arg1;
- (void)addNote:(id)arg1;
- (void)noteDidAddOrRemovePassword:(id)arg1;
- (void)noteWillAddOrRemovePassword:(id)arg1;
- (void)noteWillBeDeleted:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setMenuFormRepresentationForItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (void)convertToText:(id)arg1;
- (void)tableButtonPressed:(id)arg1;
- (void)toggleForceLightContentForCurrentNote:(id)arg1;
- (BOOL)canToggleForceLightContentForCurrentNote;
- (void)toggleTodoStyle:(id)arg1;
- (void)showSharingServicePicker:(id)arg1;
- (void)showStyleMenu:(id)arg1;
- (void)importFromDevice:(id)arg1;
- (void)insertPhotoFrom:(id)arg1;
- (id)touchBar;
- (void)dealloc;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (id)windowWillReturnUndoManager:(id)arg1;
- (void)awakeFromNib;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

