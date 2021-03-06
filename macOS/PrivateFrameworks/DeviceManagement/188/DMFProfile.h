//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSString;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isManaged;
    BOOL _isLocked;
    BOOL _hasRemovalPasscode;
    BOOL _isEncrypted;
    NSString *_UUID;
    unsigned long long _type;
    NSString *_identifier;
    long long _profileVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_profileDescription;
    NSArray *_signerCertificates;
    NSArray *_payloads;
    NSDictionary *_restrictions;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, copy, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, copy, nonatomic) NSArray *signerCertificates; // @synthesize signerCertificates=_signerCertificates;
@property(readonly, nonatomic) BOOL isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, nonatomic) BOOL hasRemovalPasscode; // @synthesize hasRemovalPasscode=_hasRemovalPasscode;
@property(readonly, nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, nonatomic) BOOL isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 profileVersion:(long long)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(BOOL)arg8 isLocked:(BOOL)arg9 hasRemovalPasscode:(BOOL)arg10 isEncrypted:(BOOL)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14;

@end

