//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UISelectionInteractionAssistant-Protocol.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate-Protocol.h>

@class NSString, UIKeyboardTaskQueue, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITextInteraction, UIView, UIWebSelection, _UIKeyboardBasedNonEditableTextSelectionGestureController, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate, _UIKeyboardTextSelectionGestureControllerDelegate, UISelectionInteractionAssistant>
{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapAndAHalfRecognizer *_tapAndAHalfGestureRecognizer;
    UILongPressGestureRecognizer *_forcePressGestureRecognizer;
    UITextInteraction *_textInteractions;
    _UIKeyboardTextSelectionController *_textSelectionController;
    _UIKeyboardBasedNonEditableTextSelectionGestureController *_textSelectionGestureController;
    BOOL _enabled;
    UIWebSelection *_selection;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UILongPressGestureRecognizer *forcePressGestureRecognizer; // @synthesize forcePressGestureRecognizer=_forcePressGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) UIWebSelection *selection; // @synthesize selection=_selection;
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController; // @synthesize textSelectionController=_textSelectionController;
- (void)addGestureRecognizersToView:(id)arg1;
- (id)scrollView;
- (void)rangedMagnifierWithState:(long long)arg1 atPoint:(struct CGPoint)arg2;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property(readonly, nonatomic) struct CGRect selectionFrame;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isSelectionGestureRecognizer:(id)arg1;
- (void)setGestureRecognizers;
- (void)addNonEditableForceTextSelectionGestureRecognizersToView:(id)arg1;
- (void)_addOneFingerForceGestures:(id)arg1 toView:(id)arg2;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;

@end

