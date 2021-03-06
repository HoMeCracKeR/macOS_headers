//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSBezierPath, NSImage;

@interface DfMagicMentorSPLSlider : NSView
{
    id _target;
    SEL _action;
    struct CGShading *_shadingRef;
    struct CGRect _lastBounds;
    NSImage *_highlightCacheImage;
    NSImage *_darkCacheImage;
    NSBezierPath *_roundedClipPath;
    long long _leftClock;
    long long _rightClock;
    float _totalClockLength;
    long long _displaySPL;
    long long _clickedSPL;
    float _factor;
    BOOL _mouseDown;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)_createCacheImages;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (long long)_clockFromMouse:(id)arg1;
- (long long)clickedSPL;
- (void)setDisplaySPL:(long long)arg1;
- (void)setClockRangeLeft:(long long)arg1 right:(long long)arg2;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

