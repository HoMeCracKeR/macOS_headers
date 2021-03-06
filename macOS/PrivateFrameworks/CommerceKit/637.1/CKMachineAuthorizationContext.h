//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/CKStoreRequestDelegate-Protocol.h>

@class CKDialogContext, CKStoreClient, NSString;

@interface CKMachineAuthorizationContext : NSObject <CKStoreRequestDelegate>
{
    CKStoreClient *_storeClient;
    CKDialogContext *_dialogContext;
}

+ (id)machineAuthorizationContextWithStoreClient:(id)arg1;
@property(retain) CKDialogContext *dialogContext; // @synthesize dialogContext=_dialogContext;
@property(readonly) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (void)storeRequest:(id)arg1 didAuthenticateAccount:(id)arg2;
- (id)_requestBodyForAccount:(id)arg1 bagURLKey:(id)arg2;
- (void)_runRequestWithAccount:(id)arg1 bagURLKey:(id)arg2 authenticationContext:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_authenticationContextWithAppleID:(id)arg1;
- (void)deauthorizeMachineWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)authorizeMachineWithAppleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithStoreClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

