//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSWindow.h>

@class NSTimer;

@interface ActionIndicatorWindow : NSWindow
{
    NSTimer *mTimer;
    double mFadeIncrement;
    double mFade;
    BOOL mPoof;
    double mAnimationDelay;
}

- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)_hideUsingTimer:(id)arg1;
- (void)scheduleHide:(double)arg1;
- (void)setPoof:(BOOL)arg1;
- (id)initWithImage:(id)arg1;
- (void)dealloc;

@end

