//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SPOwner/NSObject-Protocol.h>
#import <SPOwner/SPLocalPairingManagerXPCProtocol-Protocol.h>

@class NSUUID;

@protocol SPPairingManagerXPCProtocol <NSObject, SPLocalPairingManagerXPCProtocol>
- (oneway void)currentBeaconingKeyWithCompletion:(void (^)(SPBeaconingKey *))arg1;
- (oneway void)unpairUUID:(NSUUID *)arg1 completion:(void (^)(BOOL))arg2;
@end

