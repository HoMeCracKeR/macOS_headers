//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface Stopwatch : NSObject
{
}

+ (double)elapsedTime;
+ (void)stopWithMessage:(id)arg1 precision:(int)arg2 elapsedtimeBiggerThan:(double)arg3;
+ (void)stopWithMessage:(id)arg1 precision:(int)arg2;
+ (void)stop;
+ (void)start;

@end

