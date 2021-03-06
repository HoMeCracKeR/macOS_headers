//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSString, NSUUID;

@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    long long _type;
    long long _internalType;
    NSString *_interfaceName;
    NSDictionary *_info;
    NSDate *_timestamp;
    unsigned long long _acknowledgementTimeout;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long acknowledgementTimeout; // @synthesize acknowledgementTimeout=_acknowledgementTimeout;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(nonatomic) long long internalType; // @synthesize internalType=_internalType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToXPCEvent:(id)arg1;
- (id)description;
- (id)__descriptionForEventType;
- (id)init;

@end

