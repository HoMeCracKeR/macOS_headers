//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPLocationSupport : NSObject
{
}

+ (id)locationFromThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 postalCode:(id)arg6 category:(unsigned short)arg7;
+ (BOOL)fuzzyMatchingLocations:(id)arg1 and:(id)arg2;
+ (id)mapTitleForLocation:(id)arg1;
+ (id)fullAddressOfLocation:(id)arg1;
+ (id)streetAddressOfLocation:(id)arg1;

@end

