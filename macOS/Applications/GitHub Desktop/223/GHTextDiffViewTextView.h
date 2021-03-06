//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class GHTextDiffViewModel, NSMutableDictionary;

@interface GHTextDiffViewTextView : NSTextView
{
    GHTextDiffViewModel *_diff;
    NSMutableDictionary *_markerWidthCache;
}

@property(readonly, copy, nonatomic) NSMutableDictionary *markerWidthCache; // @synthesize markerWidthCache=_markerWidthCache;
@property(retain, nonatomic) GHTextDiffViewModel *diff; // @synthesize diff=_diff;
- (void).cxx_destruct;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (struct CGPoint)textContainerOrigin;
- (double)leftMargin;
- (struct CGRect)leftMarginBounds;
- (void)updateTrackingAreas;
- (void)cursorUpdate:(id)arg1;
- (double)widthForMarker:(id)arg1 attributes:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawViewBackgroundInRect:(struct CGRect)arg1;
- (void)mouseDown:(id)arg1;

@end

