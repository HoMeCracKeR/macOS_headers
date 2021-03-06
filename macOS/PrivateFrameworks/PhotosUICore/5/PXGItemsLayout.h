//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXGLayout.h>

@interface PXGItemsLayout : PXGLayout
{
    BOOL _loadedItemsNeedUpdate;
    unsigned long long _delegateRespondsTo;
    long long _applyingItemChangesCount;
    BOOL _lazy;
    id <PXGItemsLayoutDelegate> _delegate;
    id <PXGItemsGeometry> _itemsGeometry;
    long long __numberOfItems;
    struct _NSRange _loadedItems;
}

@property(nonatomic, getter=isLazy) BOOL lazy; // @synthesize lazy=_lazy;
@property(nonatomic) long long _numberOfItems; // @synthesize _numberOfItems=__numberOfItems;
@property(readonly, nonatomic) id <PXGItemsGeometry> itemsGeometry; // @synthesize itemsGeometry=_itemsGeometry;
@property(nonatomic) struct _NSRange loadedItems; // @synthesize loadedItems=_loadedItems;
@property(nonatomic) __weak id <PXGItemsLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct _NSRange)itemsToLoad;
- (long long)itemForObjectReference:(id)arg1;
- (BOOL)delegateRespondsTo:(unsigned long long)arg1;
- (void)endApplyingItemChanges;
- (void)beginApplyingItemChanges;
@property(readonly, nonatomic) BOOL isApplyingItemChanges;
- (void)_updateLoadedItems;
- (void)updateLoadedItemsIfNeeded;
- (void)invalidateLoadedItems;
- (void)update;
- (BOOL)shouldInvalidateDecorationForModifiedSprites;
- (id)itemsLayout;
- (id)loadedItemsForItems:(id)arg1;
- (id)spriteIndexesForItems:(id)arg1;
- (id)itemsForSpriteIndexes:(id)arg1;
- (unsigned int)spriteIndexForItem:(long long)arg1;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2;
@property(nonatomic) long long numberOfItems;
- (void)loadedItemsDidChange;
- (id)layoutForItemChanges;
- (id)init;

@end

