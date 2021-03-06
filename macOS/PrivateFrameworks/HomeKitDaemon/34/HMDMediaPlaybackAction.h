//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAction.h>

#import "HMDBackingStoreObjectProtocol.h"
#import "NSSecureCoding.h"

@class HMDHome, MPPlaybackArchive, NSArray, NSMutableSet, NSNumber, NSSet, NSString;

@interface HMDMediaPlaybackAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    BOOL _encodePlaybackArchiveForExecution;
    NSSet *_mediaProfiles;
    NSNumber *_volume;
    MPPlaybackArchive *_playbackArchive;
    long long _state;
    HMDHome *_home;
    NSMutableSet *_profileUUIDs;
}

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPlaybackActionValidWithProfiles:(id)arg1 state:(long long)arg2 volume:(id)arg3;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *profileUUIDs; // @synthesize profileUUIDs=_profileUUIDs;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) BOOL encodePlaybackArchiveForExecution; // @synthesize encodePlaybackArchiveForExecution=_encodePlaybackArchiveForExecution;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property(retain, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(copy, nonatomic) NSSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
- (id)modelObjectWithUpdatedMediaProfiles:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (Class)modelClass;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_processPlaybackActionModelUpdated:(id)arg1 message:(id)arg2;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *characteristicWriteRequests;
- (id)validate;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)dictionaryRepresentation;
- (id)stateDump;
- (unsigned long long)type;
- (BOOL)configureWithHome:(id)arg1;
- (id)initWithUUID:(id)arg1 mediaProfiles:(id)arg2 playbackState:(long long)arg3 volume:(id)arg4 playbackArchive:(id)arg5 actionSet:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

