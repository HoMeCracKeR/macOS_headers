//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSDraggingSource.h"
#import "NSPasteboardItemDataProvider.h"

@class NSString, ScpbContentView, ScpbEntryTile;

@interface ScpbEntryView : NSView <NSDraggingSource, NSPasteboardItemDataProvider>
{
    int m_pbGroupID;
    ScpbEntryTile *m_entryTile;
    long long m_selectedElemIndex;
    ScpbContentView *m_contentView;
}

+ (struct ScpbEntryElem *)iterateContentForGroupID:(int)arg1 drawRect:(struct CGRect)arg2 call:(CDUnknownFunctionPointerType)arg3 optionalPoint:(struct CGPoint *)arg4 optionalMaxY:(double *)arg5 thisSelf:(id)arg6;
+ (double)heightForGroupID:(int)arg1 minX:(double)arg2 maxX:(double)arg3;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct ScpbEntryElem *)mouseDownForGroupID:(int)arg1 drawRect:(struct CGRect)arg2 localPoint:(struct CGPoint)arg3;
- (void)setAsSelected;
- (int)pbGroupID;
- (BOOL)entryTileIsSelected;
- (void)setSelectedElemIndex:(long long)arg1;
- (long long)selectedElemIndex;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setTile:(id)arg1 viewState:(struct ScViewState *)arg2;
- (id)scpbDelegate2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)dealloc;
- (id)initWithWidth:(double)arg1 pbGroupID:(int)arg2 contentView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

