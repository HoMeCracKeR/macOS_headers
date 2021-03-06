//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPUtils : NSObject
{
}

+ (struct tm)localizedTimeStructForDate:(id)arg1;
+ (BOOL)isFirstPartyApp:(id)arg1;
+ (id)sqliteGlobEscape:(id)arg1;
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;
+ (id)currentLocaleLanguageCode;
+ (BOOL)yesWithProbability:(double)arg1;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2;
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)hexUUID;
+ (id)hexOfBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (BOOL)isInternalDevice;
+ (BOOL)isConstrainedDevice;
+ (void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;

@end

