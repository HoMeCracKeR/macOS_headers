//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class EKReminder, NSButton, NSDictionary, RNCTextField;

@interface RNCTableCellView : NSTableCellView
{
    EKReminder *_reminder;
    NSButton *_checkBox;
    RNCTextField *_title;
    RNCTextField *_dueField;
    NSDictionary *_viewMetrics;
    id <RNCTableCellViewController> _controller;
}

+ (id)_checkboxTemplateChecked;
+ (id)_checkboxTemplateUnchecked;
+ (id)checkboxImageForColor:(id)arg1 checked:(BOOL)arg2;
+ (id)alarmTimeForReminder:(id)arg1;
+ (id)remindMeTimeForReminder:(id)arg1;
+ (id)dateStringForReminder:(id)arg1;
+ (id)sharedTodayDateFormatter;
+ (id)sharedDateFormatter;
- (void).cxx_destruct;
@property __weak id <RNCTableCellViewController> controller; // @synthesize controller=_controller;
@property(retain) NSDictionary *viewMetrics; // @synthesize viewMetrics=_viewMetrics;
@property(retain) RNCTextField *dueField; // @synthesize dueField=_dueField;
@property(retain) RNCTextField *title; // @synthesize title=_title;
@property(retain) NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain) EKReminder *reminder; // @synthesize reminder=_reminder;
- (void)checkBoxAction:(id)arg1;
- (void)layout;
- (void)addConstraints;
- (void)_updateCheckboxWithCalendarColor:(id)arg1;
- (void)updateWithController:(id)arg1;
- (void)updateWithReminder:(id)arg1;
- (BOOL)wantsLayer;
- (id)initWithReminder:(id)arg1 controller:(id)arg2 leftMargin:(double)arg3;

@end

