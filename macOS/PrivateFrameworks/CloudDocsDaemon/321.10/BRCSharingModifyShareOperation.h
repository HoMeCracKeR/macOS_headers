//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCItemID, BRCServerZone, CKShare, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
}

- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)arg1;
- (void)main;
- (void)performAfterFetchingBaseTokenIfNecessary:(CDUnknownBlockType)arg1;
- (void)_updateDocumentWithShareID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_modifyShareAccessIfNecessaryGrantingAccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

