//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SORemoteExtensionServiceProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_serviceXpcEndpoint;
}

- (void).cxx_destruct;
@property(retain) NSXPCListenerEndpoint *serviceXpcEndpoint; // @synthesize serviceXpcEndpoint=_serviceXpcEndpoint;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_connectToService;
- (id)initWithListenerEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

