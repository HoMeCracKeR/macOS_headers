//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IPXAdjustmentTouchBarController, IPXTouchBarAdjustmentSlider, NSButton, NSLayoutConstraint, NSNumber, NSString, NSView, PFCoalescer;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface IPXAdjustmentTouchBarSliderController : NSViewController
{
    BOOL _externallyUpdatingValue;
    BOOL _knobWasHidden;
    BOOL _interactive;
    BOOL _resettingToOriginalState;
    NSView *_adjustmentActiveButtonContainer;
    NSView *_adjustmentSliderContainer;
    IPXTouchBarAdjustmentSlider *_adjustmentSlider;
    NSString *_adjustmentIdentifier;
    NSString *_inputKey;
    IPXAdjustmentTouchBarController *_parentController;
    id <NSObject><NSCopying> _currentTouchIdentity;
    long long _lastActiveState;
    NSLayoutConstraint *_sliderCheckmarkWidthConstraint;
    NSButton *_sliderOnOffCheckbox;
    NSButton *_sliderIconButton;
    NSView *_sliderIconButtonContainer;
    NSView *_sliderUserTapWhenCollapsedView;
    NSLayoutConstraint *_sliderButtonWidthConstraint;
    NSString *_adjustmentTitle;
    PFCoalescer *_sliderInteractiveCoalescer;
    NSNumber *_coalescedSliderValue;
    double _newSliderWidth;
    double _newCheckmarkWidth;
}

- (void).cxx_destruct;
@property double newCheckmarkWidth; // @synthesize newCheckmarkWidth=_newCheckmarkWidth;
@property double newSliderWidth; // @synthesize newSliderWidth=_newSliderWidth;
@property(retain) NSNumber *coalescedSliderValue; // @synthesize coalescedSliderValue=_coalescedSliderValue;
@property(retain) PFCoalescer *sliderInteractiveCoalescer; // @synthesize sliderInteractiveCoalescer=_sliderInteractiveCoalescer;
@property BOOL resettingToOriginalState; // @synthesize resettingToOriginalState=_resettingToOriginalState;
@property(retain) NSString *adjustmentTitle; // @synthesize adjustmentTitle=_adjustmentTitle;
@property(retain) NSLayoutConstraint *sliderButtonWidthConstraint; // @synthesize sliderButtonWidthConstraint=_sliderButtonWidthConstraint;
@property(retain) NSView *sliderUserTapWhenCollapsedView; // @synthesize sliderUserTapWhenCollapsedView=_sliderUserTapWhenCollapsedView;
@property(retain) NSView *sliderIconButtonContainer; // @synthesize sliderIconButtonContainer=_sliderIconButtonContainer;
@property(retain) NSButton *sliderIconButton; // @synthesize sliderIconButton=_sliderIconButton;
@property(retain) NSButton *sliderOnOffCheckbox; // @synthesize sliderOnOffCheckbox=_sliderOnOffCheckbox;
@property(retain) NSLayoutConstraint *sliderCheckmarkWidthConstraint; // @synthesize sliderCheckmarkWidthConstraint=_sliderCheckmarkWidthConstraint;
@property(nonatomic) long long lastActiveState; // @synthesize lastActiveState=_lastActiveState;
@property(retain) id <NSObject><NSCopying> currentTouchIdentity; // @synthesize currentTouchIdentity=_currentTouchIdentity;
@property BOOL interactive; // @synthesize interactive=_interactive;
@property __weak IPXAdjustmentTouchBarController *parentController; // @synthesize parentController=_parentController;
@property(retain) NSString *inputKey; // @synthesize inputKey=_inputKey;
@property(retain) NSString *adjustmentIdentifier; // @synthesize adjustmentIdentifier=_adjustmentIdentifier;
@property(retain) IPXTouchBarAdjustmentSlider *adjustmentSlider; // @synthesize adjustmentSlider=_adjustmentSlider;
@property(retain) NSView *adjustmentSliderContainer; // @synthesize adjustmentSliderContainer=_adjustmentSliderContainer;
@property __weak NSView *adjustmentActiveButtonContainer; // @synthesize adjustmentActiveButtonContainer=_adjustmentActiveButtonContainer;
- (void)restoreKnobVisibility;
- (void)hideKnobTemporarily;
- (void)setEnabled:(BOOL)arg1;
- (void)a_expandSlider:(id)arg1;
- (void)a_toggleAdjusted:(id)arg1;
- (void)updateWithImages:(id)arg1;
- (void)updateWithPlaceholderImages:(id)arg1;
- (void)didChangeValue:(id)arg1;
- (void)_setInputValue:(id)arg1;
- (id)brickController;
- (void)updateControlWithNoOperation;
- (void)updateControlWithOperation:(id)arg1;
- (long long)activeState;
- (void)updateForActiveState;
- (void)viewWillAppear;
- (void)setAdjustmentSliderState:(long long)arg1;
- (void)finishWidthAnimation;
- (void)prepareWidthAnimation;
- (void)updateSliderStateApplyingImmediately:(BOOL)arg1;
- (void)willDeselectItemController:(id)arg1;
- (void)didSelectItemController:(id)arg1;
- (void)_handleClick:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAdjustmentIdentifier:(id)arg1 parentController:(id)arg2;

@end

