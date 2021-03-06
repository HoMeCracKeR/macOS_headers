//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACMToken.h>

#import <ACDEClient/ACFInitialTokenProtocol-Protocol.h>

@class ACFPrincipal, NSData, NSDate, NSMutableDictionary, NSNumber, NSString;
@protocol ACFTicketRequestProtocol;

@interface ACMInitialToken : ACMToken <ACFInitialTokenProtocol>
{
    NSNumber *_appID;
    NSString *_appIDKey;
    NSString *_dsKeyVersion;
    NSString *_sessionToken;
    NSString *_encryptionHash;
    id <ACFTicketRequestProtocol> _request;
    NSString *_clientSecretTokenHmac;
    NSNumber *_clientSecretCreateDate;
    NSString *_oldUserKey;
    NSString *_currentUserKey;
    NSString *_tokenVersion;
    NSData *_randomKey;
    NSData *_initializationVector;
    NSString *_twoStepVerificationCode;
    NSString *_selectedDeviceId;
    NSString *_selectedDeviceType;
}

+ (id)initialTokenWithRequest:(id)arg1 token:(id)arg2;
+ (id)initialTokenWithRequest:(id)arg1 principal:(id)arg2;
+ (id)initialTokenWithRequest:(id)arg1;
@property(retain, nonatomic) NSString *selectedDeviceType; // @synthesize selectedDeviceType=_selectedDeviceType;
@property(retain, nonatomic) NSString *selectedDeviceId; // @synthesize selectedDeviceId=_selectedDeviceId;
@property(retain, nonatomic) NSString *twoStepVerificationCode; // @synthesize twoStepVerificationCode=_twoStepVerificationCode;
@property(retain, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
@property(retain, nonatomic) NSData *randomKey; // @synthesize randomKey=_randomKey;
@property(retain) NSString *tokenVersion; // @synthesize tokenVersion=_tokenVersion;
@property(retain) NSString *currentUserKey; // @synthesize currentUserKey=_currentUserKey;
@property(retain) NSString *oldUserKey; // @synthesize oldUserKey=_oldUserKey;
@property(retain, nonatomic) NSNumber *clientSecretCreateDate; // @synthesize clientSecretCreateDate=_clientSecretCreateDate;
@property(retain, nonatomic) NSString *clientSecretTokenHmac; // @synthesize clientSecretTokenHmac=_clientSecretTokenHmac;
@property(retain) id <ACFTicketRequestProtocol> request; // @synthesize request=_request;
@property(retain) NSString *encryptionHash; // @synthesize encryptionHash=_encryptionHash;
@property(retain) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain) NSString *dsKeyVersion; // @synthesize dsKeyVersion=_dsKeyVersion;
@property(retain) NSString *appIDKey; // @synthesize appIDKey=_appIDKey;
@property(retain) NSNumber *appID; // @synthesize appID=_appID;
- (id)strippedPropertyListString:(id)arg1;
- (id)stringWithReplacedXMLSpecialCharactersFromString:(id)arg1;
- (BOOL)isAuthenticationSucceed:(id *)arg1;
- (BOOL)shouldProceedWithAuthentication;
- (BOOL)canRecoverFailureWithError:(id)arg1;
@property(readonly, nonatomic) NSString *tokenSourceString;
@property(readonly, nonatomic) NSString *xmlTokenSourceString;
@property(readonly, nonatomic) NSMutableDictionary *parametersDictionary;
@property(readonly, nonatomic) BOOL isDevicePwnd;
- (void)dealloc;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithRequest:(id)arg1 principal:(id)arg2;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) NSString *nonce;
@property(retain, nonatomic) NSNumber *personID;
@property(retain) ACFPrincipal *principal;
@property(retain, nonatomic) NSString *recoveryKey;
@property(retain, nonatomic) NSString *serviceName;
@property(readonly) Class superclass;

@end

