//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewImplicitlyAnimating-Protocol.h"

@class NSString;
@protocol UIViewImplicitlyAnimating;

@interface FRViewMorphingAnimator : NSObject <UIViewImplicitlyAnimating>
{
    id <UIViewImplicitlyAnimating> _internalAnimator;
}

@property(readonly, nonatomic) id <UIViewImplicitlyAnimating> internalAnimator; // @synthesize internalAnimator=_internalAnimator;
- (void).cxx_destruct;
- (struct CGAffineTransform)_transformToAlignViewWithFrame:(struct CGRect)arg1 withViewWithFrame:(struct CGRect)arg2 alignmentParameters:(CDStruct_d1136a2a)arg3;
- (id)_newInternalAnimatorWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 alignmentParameters:(CDStruct_d1136a2a)arg4 fadeOutBlendingParameters:(CDStruct_c3b9c2ee)arg5 fadeInBlendingParameters:(CDStruct_c3b9c2ee)arg6 duration:(double)arg7 timingParameters:(id)arg8;
- (void)finishAnimationAtPosition:(long long)arg1;
- (void)stopAnimation:(BOOL)arg1;
- (void)pauseAnimation;
- (void)startAnimationAfterDelay:(double)arg1;
- (void)startAnimation;
@property(nonatomic) double fractionComplete;
@property(nonatomic, getter=isReversed) BOOL reversed;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic) long long state;
- (void)continueAnimationWithTimingParameters:(id)arg1 durationFactor:(double)arg2;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addAnimations:(CDUnknownBlockType)arg1 delayFactor:(double)arg2;
- (id)initWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3 alignmentParameters:(CDStruct_d1136a2a)arg4 fadeOutBlendingParameters:(CDStruct_c3b9c2ee)arg5 fadeInBlendingParameters:(CDStruct_c3b9c2ee)arg6 duration:(double)arg7 timingParameters:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

