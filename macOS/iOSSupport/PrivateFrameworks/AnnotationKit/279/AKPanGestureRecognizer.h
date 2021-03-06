//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

#import <AnnotationKit/AKPenDetectionGestureRecognizerProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface AKPanGestureRecognizer : UIPanGestureRecognizer <AKPenDetectionGestureRecognizerProtocol>
{
    BOOL _penGestureDetected;
    double _currentWeight;
    double _currentMaxWeight;
    NSMutableArray *_currentAccumulatedTouches;
    struct CGPoint _locationOfFirstTouch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *currentAccumulatedTouches; // @synthesize currentAccumulatedTouches=_currentAccumulatedTouches;
@property(nonatomic) BOOL penGestureDetected; // @synthesize penGestureDetected=_penGestureDetected;
@property(nonatomic) struct CGPoint locationOfFirstTouch; // @synthesize locationOfFirstTouch=_locationOfFirstTouch;
@property(nonatomic) double currentMaxWeight; // @synthesize currentMaxWeight=_currentMaxWeight;
@property(nonatomic) double currentWeight; // @synthesize currentWeight=_currentWeight;
- (struct CGPoint)locationOfFirstTouchInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetAccumulatedTouches;
- (id)accumulatedTouches;
- (void)_checkTouchForStylus:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

