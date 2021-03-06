//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class CKShareMetadata, NSString;

@interface CKInitiateParticipantVettingOperation : CKOperation
{
    CDUnknownBlockType _participantVettingInitiatedBlock;
    CDUnknownBlockType _participantVettingInitiationCompletionBlock;
    CKShareMetadata *_shareMetadata;
    NSString *_participantID;
    NSString *_address;
}

@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(CDUnknownBlockType)arg3 participantVettingInitiationCompletionBlock:(CDUnknownBlockType)arg4;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
@property(copy, nonatomic) CDUnknownBlockType participantVettingInitiationCompletionBlock; // @synthesize participantVettingInitiationCompletionBlock=_participantVettingInitiationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType participantVettingInitiatedBlock; // @synthesize participantVettingInitiatedBlock=_participantVettingInitiatedBlock;
- (id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3;

@end

