//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GGraph.h"

@class NSBezierPath;

@interface GImplicitCurve2D : GGraph
{
    NSBezierPath *mPath;
    NSBezierPath *mHandles;
    unsigned long long mTempCount;
}

+ (id)defaultAttributes;
+ (id)implicitGraphWithView:(id)arg1 definition:(id)arg2 operation:(id)arg3 paramValues:(id)arg4 attributes:(id)arg5;
- (BOOL)magnetizePoint:(double *)arg1;
- (void)frameLowerLimitCoord:(double *)arg1 kind:(int *)arg2 upperLimitCoord:(double *)arg3 kind:(int *)arg4;
- (void)encodeStateWithCoder:(id)arg1;
- (void)decodeStateWithCoder:(id)arg1;
- (BOOL)touchedByRect:(struct CGRect)arg1;
- (void)updateSelf;
- (void)updateCurveWithAction:(id)arg1;
- (void)findCurveInQuadLeft:(struct _GImplicitSegment2D *)arg1 right:(struct _GImplicitSegment2D *)arg2 bottom:(struct _GImplicitSegment2D *)arg3 top:(struct _GImplicitSegment2D *)arg4;
- (void)findCurveInTri:(struct _GImplicitSegment2D *)arg1:(struct _GImplicitSegment2D *)arg2:(struct _GImplicitSegment2D *)arg3;
- (void)curveToPoint:(struct _GPoint2D)arg1;
- (void)findZeroOnSegment:(struct _GImplicitSegment2D *)arg1;
- (double)valueAtCoord:(double *)arg1;
- (double)valueAtPoint:(struct _GPoint2D)arg1;
- (void)drawSelection;
- (void)drawUnselected;
- (void)drawContent;
- (void)updateContentFrame;
- (void)dealloc;
- (void)awake;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

