//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import "NSSecureCoding.h"

@class NSArray, NSDate;

@interface REMEventKitBridgingDataViewInvocation_fetchIncompleteRemindersWithDueDate : REMStoreInvocation <NSSecureCoding>
{
    NSArray *_listIDs;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSArray *listIDs; // @synthesize listIDs=_listIDs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithListIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end

