//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface ArraySlicer : NSObject
{
    unsigned long long _sliceSize;
    unsigned long long _count;
    unsigned long long _offset;
    NSArray *_array;
}

- (void).cxx_destruct;
- (id)unconsumed;
- (id)consumed;
- (id)nextSlice;
@property(readonly, nonatomic) unsigned long long remaining;
- (id)initWithArray:(id)arg1 sliceSize:(unsigned long long)arg2;

@end

