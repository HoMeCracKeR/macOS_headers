//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSTextField.h>

@interface EtchedText : NSTextField
{
    double _shadow;
    BOOL _shouldSmooth;
    BOOL _etched;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setShadow:(double)arg1;
- (void)setDrawsBackground:(BOOL)arg1;
- (void)setBordered:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setSmoothFonts:(BOOL)arg1;
- (void)setEtched:(BOOL)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

