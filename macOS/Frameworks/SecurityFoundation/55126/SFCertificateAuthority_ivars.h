//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAAdditionalCertInfo, CABasicConstraintsExtension, CACertInfo, CAExtendedKeyUsageExtension, CAIdentityName, CAKeyPairAttributes, CAKeyUsageExtension, CASubjectAltNameExtension, NSArray, NSData, NSDictionary, NSString, NSURL, SFCSR;

__attribute__((visibility("hidden")))
@interface SFCertificateAuthority_ivars : NSObject
{
    BOOL _creatingCA;
    CAIdentityName *_caIdentityName;
    CAKeyPairAttributes *_caKeyPairAttrs;
    CACertInfo *_caCertInfo;
    CAAdditionalCertInfo *_caAdditionalCertInfo;
    CAExtendedKeyUsageExtension *_caExtendedKUE;
    CAKeyUsageExtension *_caKeyUsageExtension;
    CASubjectAltNameExtension *_caSubjAltNameExtension;
    CABasicConstraintsExtension *_caBasicConstraintsExtension;
    struct OpaqueSecIdentityRef *_chosenIssuer;
    struct cssm_x509_name *_issuerX509Name;
    NSData *_issuerHashPublicKey;
    struct OpaqueSecCertificateRef *_caResultingCertificate;
    struct cssm_data _resultingCertData;
    struct cssm_data *_issuerX509NameField;
    NSString *_caName;
    NSDictionary *_invite;
    id _authenticator;
    long long _clHand;
    long long _tpHand;
    SFCSR *_csr;
    NSURL *_webURL;
    struct OpaqueSecKeychainRef *_destKeychain;
    struct OpaqueSecCertificateRef *_CACert;
    NSArray *_crlDistributionPoints;
    char *_crlDistribPointsArray;
    int _numCRLDistribPointNames;
    struct __CE_GeneralName *_crlDistNames;
    struct __CE_CRLDistributionPoint *_distPoint;
    struct __CE_DistributionPointName *_distPointName;
    struct __CE_GeneralNames *_genNames;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)_releaseCRLDistPointsArray;
- (void)_releaseGenNames;
- (void)_releaseCEDistribPointName;
- (void)_releaseCEDistribPoint;
- (void)_releaseCRLDistPointNames;
- (id)init;

@end

