//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WFDailyRoutineShortcutSetupLocation, WFDailyRoutineShortcutSetupTriggerBuilder;

@interface WFDailyRoutineShortcutSetupFlow : NSObject
{
    NSString *_routineName;
    NSArray *_questions;
    WFDailyRoutineShortcutSetupTriggerBuilder *_trigger;
    WFDailyRoutineShortcutSetupLocation *_location;
}

@property(readonly, nonatomic) WFDailyRoutineShortcutSetupLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger; // @synthesize trigger=_trigger;
@property(readonly, copy, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(readonly, copy, nonatomic) NSString *routineName; // @synthesize routineName=_routineName;
- (void).cxx_destruct;
- (id)initWithRoutineName:(id)arg1 questions:(id)arg2 trigger:(id)arg3 location:(id)arg4;

@end

