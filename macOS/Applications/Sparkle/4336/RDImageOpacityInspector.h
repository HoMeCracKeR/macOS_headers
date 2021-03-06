//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDInspectorSectionViewController.h"

@class NSSlider, NSSliderTouchBarItem, NSStepper, NSString, NSTextField;

@interface RDImageOpacityInspector : RDInspectorSectionViewController
{
    NSTextField *_alphaTextField;
    NSSlider *_alphaSlider;
    NSStepper *_alphaStepper;
    NSString *_RDTouchBarStatusImageOpacity;
    NSSliderTouchBarItem *_tbImageAlphaSlider;
}

@property(retain, nonatomic) NSSliderTouchBarItem *tbImageAlphaSlider; // @synthesize tbImageAlphaSlider=_tbImageAlphaSlider;
@property(retain, nonatomic) NSString *RDTouchBarStatusImageOpacity; // @synthesize RDTouchBarStatusImageOpacity=_RDTouchBarStatusImageOpacity;
@property(nonatomic) __weak NSStepper *alphaStepper; // @synthesize alphaStepper=_alphaStepper;
@property(nonatomic) __weak NSSlider *alphaSlider; // @synthesize alphaSlider=_alphaSlider;
@property(nonatomic) __weak NSTextField *alphaTextField; // @synthesize alphaTextField=_alphaTextField;
- (void).cxx_destruct;
- (void)sectionSetupWithSettings:(id)arg1;
- (void)sectionSetupLayoutWithSettings:(id)arg1;
- (void)willBeDismissed;

@end

