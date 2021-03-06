//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSNumber;

@interface CTSMSDataType : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _parseSMSC;
    BOOL _waitForAck;
    NSNumber *_transport;
    NSNumber *_ctFormat;
    NSData *_hexPdu;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *hexPdu; // @synthesize hexPdu=_hexPdu;
@property(nonatomic) BOOL waitForAck; // @synthesize waitForAck=_waitForAck;
@property(nonatomic) BOOL parseSMSC; // @synthesize parseSMSC=_parseSMSC;
@property(nonatomic) NSNumber *ctFormat; // @synthesize ctFormat=_ctFormat;
@property(nonatomic) NSNumber *transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCTSMSDataType:(id)arg1;
- (id)init;
- (id)description;

@end

