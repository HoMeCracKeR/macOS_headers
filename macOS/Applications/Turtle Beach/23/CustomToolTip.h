//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSColor, NSView;

@interface CustomToolTip : NSWindow
{
    NSColor *borderColor;
    float borderWidth;
    float viewMargin;
    float arrowBaseWidth;
    float arrowHeight;
    BOOL hasArrow;
    float cornerRadius;
    BOOL drawsRoundCornerBesideArrow;
    NSColor *_MABackgroundColor;
    NSView *_view;
    NSWindow *_window;
    struct CGPoint _point;
    int _side;
    float _distance;
    struct CGRect _viewFrame;
    BOOL _resizing;
}

- (void).cxx_destruct;
- (void)setBackgroundImage:(id)arg1;
- (void)setDrawsRoundCornerBesideArrow:(float)arg1;
- (float)drawsRoundCornerBesideArrow;
- (void)setCornerRadius:(float)arg1;
- (float)cornerRadius;
- (void)setHasArrow:(float)arg1;
- (float)hasArrow;
- (void)setArrowHeight:(float)arg1;
- (float)arrowHeight;
- (void)setArrowBaseWidth:(float)arg1;
- (float)arrowBaseWidth;
- (void)setViewMargin:(float)arg1;
- (float)viewMargin;
- (void)setBorderWidth:(float)arg1;
- (float)borderWidth;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
- (void)setBackgroundColor:(id)arg1;
- (id)windowBackgroundColor;
- (void)setPoint:(struct CGPoint)arg1 side:(int)arg2;
- (void)windowDidResize:(id)arg1;
- (void)performClose:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)isExcludedFromWindowsMenu;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)_redisplay;
- (void)_appendArrowToPath:(id)arg1;
- (id)_backgroundPath;
- (id)_backgroundColorPatternImage;
- (void)_updateBackground;
- (float)_arrowInset;
- (int)_bestSideForAutomaticPosition;
- (void)_updateGeometry;
- (struct CGPoint)convertPointToScreen:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2 onSide:(int)arg3;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2 inWindow:(id)arg3;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2 atDistance:(float)arg3;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2 onSide:(int)arg3 atDistance:(float)arg4;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2 inWindow:(id)arg3 atDistance:(float)arg4;
- (id)initWithView:(id)arg1 attachedToPoint:(struct CGPoint)arg2 inWindow:(id)arg3 onSide:(int)arg4 atDistance:(float)arg5;

@end

