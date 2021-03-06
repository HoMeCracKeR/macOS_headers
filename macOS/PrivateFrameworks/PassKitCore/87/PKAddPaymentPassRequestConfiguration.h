//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSSet, NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <NSSecureCoding>
{
    BOOL _requiresFelicaSecureElement;
    NSString *_encryptionScheme;
    long long _style;
    NSString *_cardholderName;
    NSString *_primaryAccountSuffix;
    NSArray *_cardDetails;
    NSString *_localizedDescription;
    NSString *_primaryAccountIdentifier;
    NSString *_paymentNetwork;
    NSSet *_productIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL requiresFelicaSecureElement; // @synthesize requiresFelicaSecureElement=_requiresFelicaSecureElement;
@property(copy, nonatomic) NSSet *productIdentifiers; // @synthesize productIdentifiers=_productIdentifiers;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSArray *cardDetails; // @synthesize cardDetails=_cardDetails;
@property(copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSString *encryptionScheme; // @synthesize encryptionScheme=_encryptionScheme;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithEncryptionScheme:(id)arg1;
- (id)init;

@end

