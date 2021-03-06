//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FIRTimestamp : NSObject <NSCopying>
{
    int _nanoseconds;
    long long _seconds;
}

+ (id)timestamp;
+ (id)timestampWithSeconds:(long long)arg1 nanoseconds:(int)arg2;
+ (id)timestampWithDate:(id)arg1;
@property(readonly, nonatomic) int nanoseconds; // @synthesize nanoseconds=_nanoseconds;
@property(readonly, nonatomic) long long seconds; // @synthesize seconds=_seconds;
- (BOOL)isEqualToTimestamp:(id)arg1;
- (long long)compare:(id)arg1;
- (id)dateValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSeconds:(long long)arg1 nanoseconds:(int)arg2;
- (id)ISO8601String;

@end

