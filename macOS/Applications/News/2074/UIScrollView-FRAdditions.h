//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@interface UIScrollView (FRAdditions)
- (id)fr_snapshotContentViewAfterScreenUpdates:(BOOL)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)fr_convertPointFromInsettedContentView:(struct CGPoint)arg1;
- (struct CGPoint)fr_convertPointFromContentView:(struct CGPoint)arg1;
- (struct CGSize)fr_trueContentSize;
- (struct UIEdgeInsets)fr_bounceInset;
- (void)fr_scrollToTopAnimated:(BOOL)arg1;
@property(readonly, nonatomic) BOOL reachedMoreThanMidPoint;
@property(readonly, nonatomic) BOOL reachedBottom;
@end

