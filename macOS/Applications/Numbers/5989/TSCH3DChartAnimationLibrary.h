//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TSCH3DChartAnimationLibrary : NSObject
{
    NSDictionary *mAnimationTypeToClass;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (id)animationInfoForType:(int)arg1 buildType:(int)arg2;
- (double)animationFPSFromType:(int)arg1;
- (id)filterStringFromType:(int)arg1;
- (id)filterStringFromClass:(Class)arg1;
- (Class)animationClassFromType:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

