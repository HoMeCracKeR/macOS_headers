//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessMutator.h"

@class CNContact, CNUIMeContactMonitor, NSString, PRPersonaStore;

@interface CNContactLikenessPersonaStoreOriginalLikenessMutator : NSObject <CNContactLikenessMutator>
{
    PRPersonaStore *_personaStore;
    CNContact *_contact;
    CNUIMeContactMonitor *_meMonitor;
}

@property(retain, nonatomic) CNUIMeContactMonitor *meMonitor; // @synthesize meMonitor=_meMonitor;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
- (void).cxx_destruct;
- (BOOL)shouldSaveOriginalLikenessOfLikeness:(id)arg1;
- (id)setLikenessAsCurrent:(id)arg1;
- (id)deleteLikeness:(id)arg1;
- (id)updateLikeness:(id)arg1;
- (id)addNewLikeness:(id)arg1;
- (id)initWithPersonaStore:(id)arg1 contact:(id)arg2 meMonitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

