//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CSProfTag.h"

@class NSButton, NSMatrix, NSPopUpButton, NSStepper, NSTabView, NSTextField, PlotView, ProfView3D;

@interface MbaTag : CSProfTag
{
    NSPopUpButton *_inputPop;
    NSPopUpButton *_matrixPop;
    NSPopUpButton *_colorPop;
    NSPopUpButton *_outputPop;
    NSButton *_color1Radio;
    NSButton *_color2Radio;
    NSButton *_color3Radio;
    NSButton *_color4Radio;
    NSButton *_color5Radio;
    NSButton *_color6Radio;
    NSButton *_color7Radio;
    NSButton *_color8Radio;
    NSButton *_colorRadios[8];
    NSTextField *_color1Field;
    NSTextField *_color2Field;
    NSTextField *_color3Field;
    NSTextField *_color4Field;
    NSTextField *_color5Field;
    NSTextField *_color6Field;
    NSTextField *_color7Field;
    NSTextField *_color8Field;
    NSTextField *_colorFields[8];
    NSStepper *_color1Steper;
    NSStepper *_color2Steper;
    NSStepper *_color3Steper;
    NSStepper *_color4Steper;
    NSStepper *_color5Steper;
    NSStepper *_color6Steper;
    NSStepper *_color7Steper;
    NSStepper *_color8Steper;
    NSStepper *_colorSteppers[8];
    NSMatrix *_infoMatrix;
    PlotView *mInputCurveView;
    PlotView *mMatrixCurveView;
    PlotView *mOutputCurveView;
    PlotView *mColorCurveView;
    ProfView3D *_plot3D;
    NSTabView *_tabView;
    int _colorAxis;
    void *_data;
    unsigned int _iChans;
    unsigned int _mChans;
    unsigned int _oChans;
    unsigned int _iSpace;
    unsigned int _mSpace;
    unsigned int _oSpace;
    char *_iTableStart;
    char *_mTableStart;
    char *_oTableStart;
    struct ColorSyncMCLUT *_clutStart;
}

- (void)colorStepHit:(id)arg1;
- (void)colorRadioHit:(id)arg1;
- (void)colorPopHit:(id)arg1;
- (void)outputPopHit:(id)arg1;
- (void)matrixPopHit:(id)arg1;
- (void)inputPopHit:(id)arg1;
- (void)UpdateColorCurveView;
- (void)UpdateCurveView:(int)arg1 startPtr:(char *)arg2 space:(unsigned int)arg3 plotView:(id)arg4;
- (void)SetupUI;
- (void)makeItemsForPopup:(id)arg1 withSpace:(unsigned int)arg2 chanCount:(int)arg3;
- (id)stringForSpace:(unsigned int)arg1 channel:(int)arg2;
- (void)setProfile:(struct ColorSyncProfile *)arg1 tagType:(unsigned int)arg2 dataType:(unsigned int)arg3;
- (id)describeTagType:(unsigned int)arg1 dataType:(unsigned int)arg2 dataSize:(unsigned int)arg3;
- (BOOL)canDisplayTagType:(unsigned int)arg1 dataType:(unsigned int)arg2 dataSize:(unsigned int)arg3;
- (void)dealloc;

@end

