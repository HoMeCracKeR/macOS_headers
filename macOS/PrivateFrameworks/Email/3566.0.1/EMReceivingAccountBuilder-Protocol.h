//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Email/EMAccountBuilder-Protocol.h>

@class EMDeliveryAccount, NSArray;

@protocol EMReceivingAccountBuilder <EMAccountBuilder>
@property BOOL shouldArchiveByDefault;
@property BOOL sourceIsManaged;
@property(retain) NSArray *emailAddresses;
@property(retain) EMDeliveryAccount *deliveryAccount;
@end

