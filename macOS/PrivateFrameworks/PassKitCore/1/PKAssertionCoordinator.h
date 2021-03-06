//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSHashTable, NSString, PKXPCService;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate>
{
    NSHashTable *_acquiredAssertions;
    PKXPCService *_remoteService;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)_removeAssertionWithIdentifier:(id)arg1;
- (void)invalidateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)assertionExistsOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initSharedInstance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

