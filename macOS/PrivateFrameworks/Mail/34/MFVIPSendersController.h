//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAEmailAddressSet, NSArray, NSMutableDictionary, NSOperationQueue;

@interface MFVIPSendersController : NSObject
{
    NSMutableDictionary *_VIPSendersMailboxesByIdentifier;
    id <EMVIPManager> _vipManager;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
- (void)_addressBookDidChange:(id)arg1;
- (void)_vipsDidChange:(id)arg1;
@property(readonly, copy) EAEmailAddressSet *addressesForVIPSenders;
- (BOOL)isVIPForPerson:(id)arg1 orAddress:(id)arg2;
- (void)removeVIPSenderWithAddress:(id)arg1;
- (void)removeVIPSenderWithMailboxes:(id)arg1;
- (void)addNewVIPSenderWithAddress:(id)arg1 name:(id)arg2;
@property(readonly, copy) NSArray *VIPSendersMailboxes;
- (id)_vipMailboxesPlistPath;
- (void)_updateMailboxesAndPostNotificationsIsFirstLoad:(BOOL)arg1;
- (void)_readVIPSenders;
- (void)_saveMailboxInfo;
- (void)save;
- (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2 withAddressBook:(id)arg3;
- (id)_ABPersonForName:(id)arg1 withAddressBook:(id)arg2;
- (id)_ABPersonForName:(id)arg1 emailAddresses:(id)arg2 withAddressBook:(id)arg3;
- (id)_combineAddresses:(id)arg1 withAddresses:(id)arg2;
- (id)_mailboxWithVIP:(id)arg1 additionalEmailAddresses:(id)arg2;
- (id)_addressesForMailboxCriteria:(id)arg1;
- (id)_mailboxCriteriaForAddresses:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL filterByInboxOnly;
- (id)init;

@end

