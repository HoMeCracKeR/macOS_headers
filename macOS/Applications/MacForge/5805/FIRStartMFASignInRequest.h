//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FIRIdentityToolkitRequest.h"

#import "FIRAuthRPCRequest.h"

@class FIRAuthProtoStartMFAPhoneRequestInfo, NSString;

@interface FIRStartMFASignInRequest : FIRIdentityToolkitRequest <FIRAuthRPCRequest>
{
    NSString *_MFAPendingCredential;
    NSString *_MFAEnrollmentID;
    FIRAuthProtoStartMFAPhoneRequestInfo *_signInInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) FIRAuthProtoStartMFAPhoneRequestInfo *signInInfo; // @synthesize signInInfo=_signInInfo;
@property(readonly, copy, nonatomic) NSString *MFAEnrollmentID; // @synthesize MFAEnrollmentID=_MFAEnrollmentID;
@property(readonly, copy, nonatomic) NSString *MFAPendingCredential; // @synthesize MFAPendingCredential=_MFAPendingCredential;
- (id)unencodedHTTPRequestBodyWithError:(id *)arg1;
- (id)initWithMFAPendingCredential:(id)arg1 MFAEnrollmentID:(id)arg2 signInInfo:(id)arg3 requestConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

