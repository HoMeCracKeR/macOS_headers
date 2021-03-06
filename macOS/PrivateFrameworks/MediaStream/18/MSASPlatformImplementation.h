//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSASPlatform.h"

@class ACAccountStore, NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>
{
    ACAccountStore *_accountStore;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (BOOL)shouldEnableNewFeatures;
- (int)MMCSConcurrentConnectionsCount;
- (id)personIDsEnabledForAlbumSharing;
- (BOOL)personIDEnabledForAlbumSharing:(id)arg1;
- (id)pushTokenForPersonID:(id)arg1;
- (BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (BOOL)MSASIsAllowedToUploadAssets;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (id)baseSharingURLForPersonID:(id)arg1;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;
- (Class)pluginClass;
- (id)pathAlbumSharingDir;
- (id)albumSharingDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

