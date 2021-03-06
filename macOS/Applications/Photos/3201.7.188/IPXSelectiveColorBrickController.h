//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXAdjustmentBrickTitledController.h"

#import "IPXSamplerOverlayDelegate-Protocol.h"

@class IPXSamplerOverlayController, NSArray, NSButton, NSMutableDictionary, NSSegmentedControl, NSString;

@interface IPXSelectiveColorBrickController : IPXAdjustmentBrickTitledController <IPXSamplerOverlayDelegate>
{
    NSMutableDictionary *_sliderMap;
    NSArray *_heightConstraints;
    NSString *_currentKey;
    long long _selectedHue;
    NSSegmentedControl *_segmentedControl;
    NSButton *_eyeDropperButton;
    IPXSamplerOverlayController *_overlayController;
}

- (void).cxx_destruct;
- (void)overlay:(id)arg1 pickedColor:(id)arg2;
- (id)overlayBeginColorPick:(id)arg1;
- (void)overlayShouldDismiss:(id)arg1;
- (void)_updateSliderDisplay;
- (void)_addSlidersForHue:(long long)arg1 operation:(id)arg2;
- (void)_setSliderHue:(double)arg1 forSegment:(long long)arg2;
- (void)_setHue:(double)arg1 forSegment:(long long)arg2;
- (void)_setColor:(id)arg1 forSegment:(long long)arg2;
- (id)_swatchForColor:(id)arg1;
- (void)a_modeChanged:(id)arg1;
- (void)_showOverlay:(BOOL)arg1;
- (void)a_toggleEyedropper:(id)arg1;
- (void)updateControlsWithOperation:(id)arg1;
- (void)loadControlsForOperation:(id)arg1;
- (void)loadView;
- (void)prepareForReuse;
- (BOOL)showsAutoButton;
- (BOOL)isExpandable;
- (BOOL)hasAuto;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

