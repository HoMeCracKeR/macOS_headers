//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

#import "NSDraggingDestination-Protocol.h"
#import "NSDraggingSource-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSString;
@protocol DragDropImageViewDelegate;

__attribute__((visibility("hidden")))
@interface DragDropImageView : NSImageView <NSDraggingSource, NSDraggingDestination, NSPasteboardItemDataProvider>
{
    BOOL highlight;
    BOOL allowDrag;
    BOOL allowDrop;
    id <DragDropImageViewDelegate> delegate;
    NSString *_path;
}

- (void).cxx_destruct;
@property(retain) NSString *path; // @synthesize path=_path;
@property id <DragDropImageViewDelegate> delegate; // @synthesize delegate;
@property BOOL allowDrop; // @synthesize allowDrop;
@property BOOL allowDrag; // @synthesize allowDrag;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)mouseDown:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

