//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingTransitionState : NSObject
{
    UIView *_inputView;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    struct CGPoint _scale;
    struct CGRect _inputViewFrame;
    struct CGRect _platterViewFrame;
    struct UIEdgeInsets _platterInsets;
    struct CGAffineTransform _initialInputViewTransform;
    struct CGAffineTransform _finalInputViewTransform;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) struct CGAffineTransform finalInputViewTransform; // @synthesize finalInputViewTransform=_finalInputViewTransform;
@property(nonatomic) struct CGAffineTransform initialInputViewTransform; // @synthesize initialInputViewTransform=_initialInputViewTransform;
@property(nonatomic) struct CGPoint scale; // @synthesize scale=_scale;
@property(nonatomic) struct UIEdgeInsets platterInsets; // @synthesize platterInsets=_platterInsets;
@property(nonatomic) struct CGRect platterViewFrame; // @synthesize platterViewFrame=_platterViewFrame;
@property(nonatomic) struct CGRect inputViewFrame; // @synthesize inputViewFrame=_inputViewFrame;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;

@end

