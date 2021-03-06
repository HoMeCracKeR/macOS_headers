//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FCSubscriptionObserving-Protocol.h"

@class NSString;
@protocol FRFeedSubscriptionManagerDataSource, FRFeedSubscriptionManagerDelegate;

@interface FRFeedSubscriptionManager : NSObject <FCSubscriptionObserving>
{
    id <FRFeedSubscriptionManagerDelegate> _delegate;
    id <FRFeedSubscriptionManagerDataSource> _dataSource;
}

@property(nonatomic) __weak id <FRFeedSubscriptionManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <FRFeedSubscriptionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)subscriptionController:(id)arg1 didAddAutoFavoritedTags:(id)arg2 changeAutoFavoritedTags:(id)arg3 removeAutoFavoritedTags:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)subscriptionController:(id)arg1 didAddMutedTags:(id)arg2 changeMutedTags:(id)arg3 removeMutedTags:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 removeTags:(id)arg4 eventInitiationLevel:(long long)arg5;
- (void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7;
- (id)showHudPromiseForTag:(id)arg1 style:(long long)arg2;
- (id)showNotificationPromptPromiseForTag:(id)arg1;
- (id)configureUpdateButtonPromiseForSectionsForTags:(id)arg1 isMuteButton:(BOOL)arg2 state:(BOOL)arg3 eventInitiationLevel:(long long)arg4;
- (id)initWithFeedDataSource:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

