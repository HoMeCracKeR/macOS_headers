//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMACanvasViewController.h"

@class NSMutableArray;

@interface KNMacCanvasViewController : TMACanvasViewController
{
    NSMutableArray *_mouseEventMonitors;
}

- (void).cxx_destruct;
- (BOOL)canPageScroll;
- (BOOL)canInsertDrawablesFromDragOperationForDragInfo:(id)arg1;
- (id)newMouseEventHandlerAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) id <TSDInfo> p_selectedInfo;
- (void)changeFont:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)handleDoubleTapAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)canEditRepWithDragOperation:(id)arg1;
- (BOOL)shouldAllowDragOperationForDragInfo:(id)arg1;
- (BOOL)p_didTapMasterRepAtUnscaledPoint:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (void)removeMouseEventMonitor:(id)arg1;
- (void)addMouseEventMonitor:(id)arg1;

@end

