//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTableViewController.h"

#import "NSMenuDelegate-Protocol.h"

@class NSMutableArray, NSString, TPrivsTableViewPropertyController;

@interface TPrivsTableViewController : TTableViewController <NSMenuDelegate>
{
    struct TNSWeakPtr<TPrivsTableViewPropertyController, void> _weakTableViewPropertyController;
    NSMutableArray *_iconEqualWidthConstraints;
}

+ (id)keyPathsForValuesAffectingTableViewPropertyController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateIconEqualWidthsConstraints;
- (void)menu:(id)arg1 prepareForLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)privsPopupPressed:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
@property(nonatomic) __weak TPrivsTableViewPropertyController *tableViewPropertyController; // @dynamic tableViewPropertyController;
- (void)configureView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

