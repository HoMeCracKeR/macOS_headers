//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebCore/WebCoreFrameScrollView-Protocol.h>

@class WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView>
{
    WAKView *_documentView;
    WAKClipView *_contentView;
    struct CGPoint _scrollOrigin;
    id delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)_adjustScrollers;
- (BOOL)inProgrammaticScroll;
- (id)description;
- (void)setActualScrollPosition:(struct CGPoint)arg1;
- (struct CGRect)exposedContentRect;
- (struct CGRect)unobscuredContentRect;
- (void)scrollWheel:(id)arg1;
- (void)scrollPoint:(struct CGPoint)arg1;
- (struct CGPoint)scrollOrigin;
- (void)setScrollOrigin:(struct CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)scrollingModes:(int *)arg1 vertical:(int *)arg2;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
- (int)verticalScrollingMode;
- (int)horizontalScrollingMode;
- (void)setScrollingMode:(int)arg1;
- (void)setVerticalScrollingMode:(int)arg1;
- (void)setHorizontalScrollingMode:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (float)horizontalLineScroll;
- (float)verticalLineScroll;
- (void)setLineScroll:(float)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)contentView;
- (id)documentView;
- (void)setDocumentView:(id)arg1;
- (struct CGRect)documentVisibleRect;
- (BOOL)hasHorizontalScroller;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)hasVerticalScroller;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)_selfHandleEvent:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

