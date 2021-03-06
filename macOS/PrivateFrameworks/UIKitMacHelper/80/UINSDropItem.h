//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UINSDropItem.h"

@class NSArray, NSItemProvider, NSPasteboardItem;

__attribute__((visibility("hidden")))
@interface UINSDropItem : NSObject <UINSDropItem>
{
    NSPasteboardItem *_pasteboardItem;
    NSItemProvider *_itemProvider;
}

@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, nonatomic) NSPasteboardItem *pasteboardItem; // @synthesize pasteboardItem=_pasteboardItem;
- (void).cxx_destruct;
- (void)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *typeIdentifiers;
- (id)initWithPasteboardItem:(id)arg1 itemProvider:(id)arg2;
- (id)initWithPasteboardItem:(id)arg1;

@end

