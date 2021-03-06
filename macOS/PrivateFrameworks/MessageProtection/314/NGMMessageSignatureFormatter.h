//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SignatureFormatter.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface NGMMessageSignatureFormatter : NSObject <SignatureFormatter>
{
    NSData *_formattedSignedData;
}

@property(readonly, nonatomic) NSData *formattedSignedData; // @synthesize formattedSignedData=_formattedSignedData;
- (void).cxx_destruct;
- (id)signedData;
- (id)initWithDHOutput:(id)arg1 prekeyPub:(id)arg2 ephemeralPub:(id)arg3 recipientPub:(id)arg4 ciphertext:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

