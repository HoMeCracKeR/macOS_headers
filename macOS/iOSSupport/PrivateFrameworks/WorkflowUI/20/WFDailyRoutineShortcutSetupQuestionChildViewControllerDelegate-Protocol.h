//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class CLLocation, NSArray, UIViewController;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewController;

@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate <NSObject>
- (void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(UIViewController<WFDailyRoutineShortcutSetupQuestionChildViewController> *)arg1;
- (void)dailyRoutineShortcutSetupQuestionChildViewController:(UIViewController<WFDailyRoutineShortcutSetupQuestionChildViewController> *)arg1 didSelectActions:(NSArray *)arg2;
- (CLLocation *)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(UIViewController<WFDailyRoutineShortcutSetupQuestionChildViewController> *)arg1;
@end

