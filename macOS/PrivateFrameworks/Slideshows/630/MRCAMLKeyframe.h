//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying>
{
    MRCAMLBezierData *spline;
    double value0;
    double value1;
    double time;
}

@property(retain, nonatomic) MRCAMLBezierData *spline; // @synthesize spline;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

