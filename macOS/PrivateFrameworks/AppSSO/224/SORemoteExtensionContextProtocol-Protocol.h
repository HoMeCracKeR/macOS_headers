//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOExtensionContextProtocol.h"

@class NSXPCListenerEndpoint, SOAuthorizationRequestParameters;

@protocol SORemoteExtensionContextProtocol <SOExtensionContextProtocol>
- (void)cancelAuthorizationWithCompletion:(void (^)(SOAuthorizationCredential *, NSError *))arg1;
- (void)beginAuthorizationWithServiceXPCEndpoint:(NSXPCListenerEndpoint *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)beginAuthorizationWithRequestParameters:(SOAuthorizationRequestParameters *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

