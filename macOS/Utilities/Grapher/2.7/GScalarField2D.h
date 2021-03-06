//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GScalarField.h"

@class NSBezierPath, NSImage;

@interface GScalarField2D : GScalarField
{
    NSImage *mImage;
    NSBezierPath *mContourLines;
    BOOL mTempContourLines;
    double mTempContourLineFirstLevel;
    double mTempContourLineLastLevel;
    double mTempContourLineSpacing;
}

+ (id)defaultAttributes;
+ (BOOL)canDraw2DContourLines;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (id)scalarEnumerator;
- (BOOL)selectable;
- (void)drawContent;
- (void)updateContentFrame;
- (void)endScalarField;
- (void)contourLinesForValues:(double *)arg1 at:(double *)arg2;
- (void)contourLinesAtLevel:(double)arg1 values:(double *)arg2 frameRect:(struct CGRect)arg3;
- (BOOL)zero:(struct CGPoint *)arg1 between:(struct CGPoint)arg2 value:(double)arg3 and:(struct CGPoint)arg4 value:(double)arg5;
- (void)scalarMean:(double)arg1 weight:(double)arg2 at:(double *)arg3;
- (id)colorAtPosition:(double)arg1;
- (void)foundMin:(double)arg1 max:(double)arg2;
- (void)startScalarField;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

