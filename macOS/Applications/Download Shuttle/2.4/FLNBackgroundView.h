//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTrackingArea;

@interface FLNBackgroundView : NSView
{
    BOOL _didDrag;
    BOOL _isHovered;
    NSTrackingArea *_trackingArea;
    struct CGPoint _startPoint;
    struct CGPoint _currentPoint;
    struct CGRect _originalFrame;
}

@property(nonatomic) BOOL isHovered; // @synthesize isHovered=_isHovered;
@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)makeTrackingArea;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (id)init;

@end

