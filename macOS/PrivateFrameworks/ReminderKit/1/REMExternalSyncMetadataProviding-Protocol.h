//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString;

@protocol REMExternalSyncMetadataProviding
@property(readonly, nonatomic) NSString *daPushKey;
@property(readonly, nonatomic) NSString *daSyncToken;
@property(readonly, nonatomic) NSString *externalModificationTag;
@property(readonly, nonatomic) NSString *externalIdentifier;
- (NSString *)externalIdentifierForMarkedForDeletionObject;
@end

