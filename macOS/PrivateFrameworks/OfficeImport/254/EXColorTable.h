//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXColorTable : NSObject
{
}

+ (void)readFrom:(struct _xmlNode *)arg1 state:(id)arg2;
+ (void)readOADThemeFrom:(id)arg1 toEDThemeColors:(id)arg2;
+ (void)readColorsFrom:(struct _xmlNode *)arg1 toEDColors:(id)arg2 state:(id)arg3;

@end

