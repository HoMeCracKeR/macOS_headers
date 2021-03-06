//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EFLocked, EFObservable, NSArray;
@protocol EFCancelable, EFConnectableObservable, EFObserver, EFScheduler, FavoritesManagerMailboxExistence, MFVIPSendersMailboxesProvider;

@interface FavoritesManager : NSObject
{
    BOOL _hasLaunchedWithSidebarFavorites;
    id <FavoritesManagerMailboxExistence> _mailboxExistenceProvider;
    id <MFVIPSendersMailboxesProvider> _VIPSendersProvider;
    id <EFCancelable> _userDefaultsObserver;
    EFLocked *_mailboxDataLocked;
    EFObservable<EFObserver> *_observable;
    EFObservable<EFConnectableObservable> *_replay;
    id <EFScheduler> _updateScheduler;
    FavoritesManager *_managerPersistingFavorites;
}

+ (void)_resetOnceToken;
+ (void)_setCurrentVersionToJazz;
+ (void)_resetVIPAutomaticallyAdded;
+ (void)_resetDefaults;
+ (BOOL)needsToCreateDefaultMailboxes;
- (void).cxx_destruct;
@property __weak FavoritesManager *managerPersistingFavorites; // @synthesize managerPersistingFavorites=_managerPersistingFavorites;
@property(retain, nonatomic) id <EFScheduler> updateScheduler; // @synthesize updateScheduler=_updateScheduler;
@property(retain, nonatomic) EFObservable<EFConnectableObservable> *replay; // @synthesize replay=_replay;
@property(retain, nonatomic) EFObservable<EFObserver> *observable; // @synthesize observable=_observable;
@property(retain, nonatomic) EFLocked *mailboxDataLocked; // @synthesize mailboxDataLocked=_mailboxDataLocked;
@property(retain, nonatomic) id <EFCancelable> userDefaultsObserver; // @synthesize userDefaultsObserver=_userDefaultsObserver;
@property(retain, nonatomic) id <MFVIPSendersMailboxesProvider> VIPSendersProvider; // @synthesize VIPSendersProvider=_VIPSendersProvider;
@property(retain, nonatomic) id <FavoritesManagerMailboxExistence> mailboxExistenceProvider; // @synthesize mailboxExistenceProvider=_mailboxExistenceProvider;
@property(nonatomic) BOOL hasLaunchedWithSidebarFavorites; // @synthesize hasLaunchedWithSidebarFavorites=_hasLaunchedWithSidebarFavorites;
- (void)_waitForInitialMailboxData;
- (void)_postMailboxWasRenamedNotification:(id)arg1 previousPersistentUIIdentifier:(id)arg2;
- (void)_postMailboxWillInvalidateNotification:(id)arg1;
- (void)_postMailboxSectionListingDidChangeNotification;
- (void)_postVIPChangeNotification;
- (void)_mailboxWasRenamed:(id)arg1;
- (void)_mailAccountWillBeDeleted:(id)arg1;
- (void)_mailboxWillBecomeInvalid:(id)arg1;
- (void)_mailboxListingDidChange:(id)arg1;
- (void)_VIPSendersChanged:(id)arg1;
- (void)_registerForNotifications;
- (BOOL)areAnyMailboxesFavorites:(id)arg1;
- (BOOL)moveDatum:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeDatum:(id)arg1;
- (void)removeDatumAtIndex:(unsigned long long)arg1;
- (void)removeMailboxes:(id)arg1;
- (void)insertMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addMailboxes:(id)arg1;
- (void)insertDatum:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)observeMailboxDataWithResultBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) EFObservable *mailboxDataObservable;
@property(readonly, copy) NSArray *mailboxData;
- (void)_doSetMailboxData:(id)arg1 writeToDefaults:(BOOL)arg2;
- (BOOL)_previouslyAddedDefaultForMailbox:(id)arg1;
- (void)_setAddedDefaultForMailbox:(id)arg1;
- (id)_defaultsKeyForMailbox:(id)arg1;
- (void)_upgradeFavoritesVersion;
- (long long)_currentFavoritesVersion;
- (void)_setCurrentFavoritesVersion;
- (void)_createDefaultSetOfFavoriteMailboxes;
- (BOOL)_addMailbox:(id)arg1 toData:(id)arg2 prepend:(BOOL)arg3;
- (BOOL)_addMailboxDatum:(id)arg1 toData:(id)arg2 prepend:(BOOL)arg3;
- (void)_writeFavoriteMailboxData:(id)arg1;
- (void)_persistFavorites:(id)arg1;
- (id)_favoriteMailboxDataFromPreferences;
- (void)_performUpdatesWhileLocked:(CDUnknownBlockType)arg1;
- (id)initWithMailboxExistenceProvider:(id)arg1 VIPSendersProvider:(id)arg2;

@end

