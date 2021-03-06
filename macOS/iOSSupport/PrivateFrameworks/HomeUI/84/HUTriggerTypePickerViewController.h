//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

@class HFActionSetBuilder, HUTriggerTypePickerItemManager;
@protocol HUTriggerEditorDelegate;

@interface HUTriggerTypePickerViewController : HUItemTableViewController
{
    id <HUTriggerEditorDelegate> _delegate;
    HFActionSetBuilder *_actionSetBuilder;
}

@property(retain, nonatomic) HFActionSetBuilder *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(nonatomic) __weak id <HUTriggerEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_createTriggerBuilderOfClass:(Class)arg1;
- (id)_createTriggerEditorForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)shouldHideFooterBelowSection:(long long)arg1;
- (BOOL)shouldHideHeaderAboveSection:(long long)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)_cancel:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) HUTriggerTypePickerItemManager *itemManager; // @dynamic itemManager;

@end

