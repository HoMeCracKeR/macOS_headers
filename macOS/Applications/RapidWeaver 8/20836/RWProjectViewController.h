//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSOutlineViewDataSource.h"
#import "NSOutlineViewDelegate.h"

@class MyDocument, NSArray, NSMenuItem, NSMutableArray, NSString, RWProjectGroup, RWProjectOutlineView;

__attribute__((visibility("hidden")))
@interface RWProjectViewController : NSViewController <NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    MyDocument *_document;
    id _selectedItem;
    NSArray *_selectedPages;
    NSMutableArray *_groups;
    RWProjectGroup *_pagesGroup;
    RWProjectGroup *_settingsGroup;
    RWProjectOutlineView *_outlineView;
    NSMenuItem *_previewMenuItem;
}

@property(nonatomic) __weak NSMenuItem *previewMenuItem; // @synthesize previewMenuItem=_previewMenuItem;
@property(nonatomic) __weak RWProjectOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) RWProjectGroup *settingsGroup; // @synthesize settingsGroup=_settingsGroup;
@property(retain, nonatomic) RWProjectGroup *pagesGroup; // @synthesize pagesGroup=_pagesGroup;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSArray *selectedPages; // @synthesize selectedPages=_selectedPages;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
@property(nonatomic) __weak MyDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)validateInternalDrop:(id)arg1 parent:(id)arg2 proposedChildIndex:(long long)arg3;
- (unsigned long long)validatePageDrop:(id)arg1 proposedItem:(id)arg2 proposedChildIndex:(long long)arg3;
- (BOOL)acceptInternalDrop:(id)arg1 parent:(id)arg2 childIndex:(long long)arg3;
- (BOOL)acceptGroupDrop:(id)arg1 parent:(id)arg2 childIndex:(long long)arg3;
- (BOOL)acceptPageDrop:(id)arg1 parent:(id)arg2 childIndex:(long long)arg3;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)actionToggleChangedStatusMultiple:(id)arg1;
- (void)actionToggleChangedStatus:(id)arg1;
- (void)actionShowInspector:(id)arg1;
- (void)actionPublishMultiple:(id)arg1;
- (void)actionPublish:(id)arg1;
- (void)actionPreviewOther:(id)arg1;
- (void)actionPreview:(id)arg1;
- (void)actionRenameItem:(id)arg1;
- (void)actionRemovePages:(id)arg1;
- (void)actionRemovePage:(id)arg1;
- (void)actionMakeHomePage:(id)arg1;
- (void)actionDuplicatePages:(id)arg1;
- (void)actionDuplicatePage:(id)arg1;
- (id)localizedGroupNameSettings;
- (id)localizedGroupNameResources;
- (id)localizedGroupNameWebpages;
- (void)expandItemsWithIdentifiers:(id)arg1;
- (void)selectItemsWithIdentifiers:(id)arg1;
- (void)selectItemWithIdentifier:(id)arg1;
- (void)expandSettingsGroup;
- (void)expandPagesGroup;
- (id)expandedItemIdentifiers;
- (id)selectedItemIdentifiers;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)currentlySelectedItem;
- (void)selectionDidChange;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)reloadPage:(id)arg1;
- (void)reloadData;
- (void)selectPages:(id)arg1;
- (void)selectPage:(id)arg1;
- (BOOL)revealPage:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initializeGroups;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

