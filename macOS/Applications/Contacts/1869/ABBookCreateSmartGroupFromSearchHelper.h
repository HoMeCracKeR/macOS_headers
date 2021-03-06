//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABGroupActionHelper-Protocol.h"

@class ABAddressBook, ABGroupEntriesList, ABGroupListController, ABSearchElement, NSString;
@protocol ABCommandExecutor;

@interface ABBookCreateSmartGroupFromSearchHelper : NSObject <ABGroupActionHelper>
{
    NSString *_name;
    ABSearchElement *_searchElement;
    ABGroupEntriesList *_groupEntriesList;
    ABGroupListController *_groupListController;
    ABAddressBook *_addressBook;
    id <ABCommandExecutor> _commandExecutor;
}

- (void)performAction;
- (void)dealloc;
- (id)initWithName:(id)arg1 searchElement:(id)arg2 addressBook:(id)arg3 groupEntriesList:(id)arg4 groupListController:(id)arg5 commandExecutor:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

