//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class MTOptionSetting;

@interface MTOptionsTableViewController : UITableViewController
{
    CDUnknownBlockType _optionSelectedBlock;
    MTOptionSetting *_option;
}

+ (id)footerFont;
+ (id)optionFont;
+ (double)rowHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MTOptionSetting *option; // @synthesize option=_option;
@property(copy, nonatomic) CDUnknownBlockType optionSelectedBlock; // @synthesize optionSelectedBlock=_optionSelectedBlock;
- (id)metricsName;
- (unsigned long long)selectedIndex;
- (id)headerText;
- (id)footerText;
- (id)newFooterView;
- (void)_updateTextColorForCell:(id)arg1 selected:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateRowHeight;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithOption:(id)arg1 largeTitleDisplayMode:(long long)arg2;
- (id)initWithOption:(id)arg1;

@end

