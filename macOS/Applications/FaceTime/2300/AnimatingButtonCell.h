//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CommonButtonCell.h"

@class NSTimer;

@interface AnimatingButtonCell : CommonButtonCell
{
    double _progress;
    double _targetProgress;
    NSTimer *_animationTimer;
}

- (void).cxx_destruct;
- (void)animationTick:(id)arg1;
- (void)animateToProgress:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)dealloc;

@end

