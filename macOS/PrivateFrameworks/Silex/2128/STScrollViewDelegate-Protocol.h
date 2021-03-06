//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class STScrollView, UIEvent;

@protocol STScrollViewDelegate <NSObject>
- (BOOL)shouldPreventDraggingForScrollView:(STScrollView *)arg1;
- (void)didTouchScrollView:(STScrollView *)arg1 withEvent:(UIEvent *)arg2;

@optional
- (BOOL)accessibilityShouldScrollForScrollView:(STScrollView *)arg1;
- (BOOL)scrollView:(STScrollView *)arg1 shouldOccludeAccessibilityElement:(id)arg2;
@end

