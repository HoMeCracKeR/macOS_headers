//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLRasterizationRateSampleArray.h>

@interface MTLRasterizationRateSampleArrayInternal : MTLRasterizationRateSampleArray
{
    float *_data;
    unsigned long long _count;
}

- (float *)__getRawArray:(unsigned long long *)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithData:(float *)arg1 numElements:(unsigned long long)arg2;

@end

