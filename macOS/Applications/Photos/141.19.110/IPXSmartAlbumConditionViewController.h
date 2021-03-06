//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "IPXNextKeyViewParticipant-Protocol.h"

@class NSPopUpButton, NSString, PXSmartAlbumCondition;
@protocol IPXSmartAlbumConditionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface IPXSmartAlbumConditionViewController : NSViewController <IPXNextKeyViewParticipant>
{
    PXSmartAlbumCondition *_condition;
    id <IPXSmartAlbumConditionViewControllerDelegate> _delegate;
    NSPopUpButton *_comparatorPopUp;
}

+ (Class)conditionClass;
+ (id)viewControllerWithCondition:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak NSPopUpButton *comparatorPopUp; // @synthesize comparatorPopUp=_comparatorPopUp;
@property(nonatomic) __weak id <IPXSmartAlbumConditionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXSmartAlbumCondition *condition; // @synthesize condition=_condition;
- (id)nextKeyViewWithPreviousView:(id)arg1;
- (void)comparatorDidChange:(id)arg1;
- (void)populateViews;
- (void)viewDidLoad;
- (id)nibName;
- (id)_initWithCondition:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

