//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATOperation.h"

#import "CATTransportDelegate.h"

@class CATTransport, NSString;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate>
{
    CATTransport *_transport;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CATTransport *transport; // @synthesize transport=_transport;
- (void)transportDidInvalidate:(id)arg1;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

