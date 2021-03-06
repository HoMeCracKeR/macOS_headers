//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPTextBaseCommand.h"

@class NSString, TSWPSelection, TSWPStorage;

@interface TSWPApplyPlaceholderTextCommand : TSWPTextBaseCommand
{
    struct TSWPStorageTransaction *_undoRedoTransaction;
    BOOL _removePlaceholders;
    TSWPStorage *_storage;
    TSWPSelection *_selection;
    NSString *_scriptTag;
}

@property(retain, nonatomic) NSString *scriptTag; // @synthesize scriptTag=_scriptTag;
@property(nonatomic) BOOL removePlaceholders; // @synthesize removePlaceholders=_removePlaceholders;
@property(retain, nonatomic) TSWPSelection *selection; // @synthesize selection=_selection;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)p_invalidateSelection:(id)arg1;
- (void)redo;
- (void)undo;
- (void)undoRedo:(BOOL)arg1;
- (void)commit;
- (BOOL)process;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ApplyPlaceholderTextCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ApplyPlaceholderTextCommandArchive *)arg1 archiver:(id)arg2;
- (id)actionString;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 remove:(BOOL)arg3 scriptTag:(id)arg4;

@end

