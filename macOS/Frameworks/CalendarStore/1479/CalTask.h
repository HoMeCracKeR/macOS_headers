//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarStore/CalCalendarItem.h>

@class NSDate;

@interface CalTask : CalCalendarItem
{
    NSDate *_dueDate;
    unsigned long long _priority;
    NSDate *_completedDate;
}

+ (id)task;
+ (id)exchangeConversionLocalizedPluralInfo;
+ (id)exchangeConversionLocalizedPluralMessage;
+ (id)exchangeConversionLocalizedInfo;
+ (id)exchangeConversionLocalizedMessage;
+ (id)taskFromRemoteManagedObject:(id)arg1;
@property(copy) NSDate *completedDate; // @synthesize completedDate=_completedDate;
@property unsigned long long priority; // @synthesize priority=_priority;
@property(copy) NSDate *dueDate; // @synthesize dueDate=_dueDate;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)nextAlarmDate;
@property BOOL isCompleted;
- (void)makeExchangeCompatible;
- (BOOL)isExchangeCompatible;
- (id)initWithTitle:(id)arg1 UID:(id)arg2;
- (id)remoteManagedTaskFromTask;

@end

