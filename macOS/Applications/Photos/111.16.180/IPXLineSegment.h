//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXShape.h"

__attribute__((visibility("hidden")))
@interface IPXLineSegment : IPXShape
{
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)lineSegmentWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (struct CGPath *)newCGPath;

@end

