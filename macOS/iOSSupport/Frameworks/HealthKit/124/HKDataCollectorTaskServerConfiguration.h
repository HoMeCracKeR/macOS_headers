//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration
{
    HKQuantityType *_quantityType;
    NSString *_bundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2;

@end

