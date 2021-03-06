//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSControlTextEditingDelegate-Protocol.h"
#import "NSTokenFieldDelegate-Protocol.h"
#import "SBLSharedServicesManagerReceiver-Protocol.h"

@class IPXButton, IPXRecipientViewController, IPXSharedStreamContributorsView, IPXSharedStreamNotificationsView, IPXSharedStreamPublicWebsiteView, IPXSharedStreamSettingsController, IPXSharedStreamTokenFieldDelegate, IPXWorkspaceController, NSArray, NSLayoutConstraint, NSMutableDictionary, NSStackView, NSString, NSTextField, NSTokenField, NSView, NSWindow, SBLSharedPhotoStreamSettings;

@interface IPXSharedStreamSettingsViewController : NSViewController <SBLSharedServicesManagerReceiver, NSTokenFieldDelegate, NSControlTextEditingDelegate>
{
    NSStackView *_stackView;
    BOOL _observing;
    NSMutableDictionary *_tokenEditStringMap;
    IPXSharedStreamTokenFieldDelegate *_tokenDelegate;
    IPXRecipientViewController *_recipientViewController;
    NSWindow *_observedWindow;
    IPXSharedStreamSettingsController *_popoverController;
    unsigned long long _popOverMode;
    IPXWorkspaceController *_workspaceController;
    NSArray *_recentSubscribers;
    SBLSharedPhotoStreamSettings *_settings;
    NSView *_streamNameView;
    NSView *_subscribersView;
    IPXSharedStreamContributorsView *_subscribersCanPostView;
    IPXSharedStreamPublicWebsiteView *_publicViewSiteView;
    IPXSharedStreamNotificationsView *_notificationsView;
    NSView *_footerView;
    NSView *_streamNameContainer;
    NSTextField *_streamNameTextField;
    NSTextField *_subscribersTitle;
    NSView *_subscribersTokenContainer;
    NSTokenField *_subscribersTokenField;
    NSLayoutConstraint *_subscribersTokenContainerTopConstraint;
    NSView *_streamBatchCommentView;
    NSView *_streamBatchCommentTextContainer;
    NSTextField *_streamBatchCommentTextField;
    IPXButton *_footerButton;
}

@property __weak IPXButton *footerButton; // @synthesize footerButton=_footerButton;
@property __weak NSTextField *streamBatchCommentTextField; // @synthesize streamBatchCommentTextField=_streamBatchCommentTextField;
@property __weak NSView *streamBatchCommentTextContainer; // @synthesize streamBatchCommentTextContainer=_streamBatchCommentTextContainer;
@property __weak NSView *streamBatchCommentView; // @synthesize streamBatchCommentView=_streamBatchCommentView;
@property __weak NSLayoutConstraint *subscribersTokenContainerTopConstraint; // @synthesize subscribersTokenContainerTopConstraint=_subscribersTokenContainerTopConstraint;
@property __weak NSTokenField *subscribersTokenField; // @synthesize subscribersTokenField=_subscribersTokenField;
@property __weak NSView *subscribersTokenContainer; // @synthesize subscribersTokenContainer=_subscribersTokenContainer;
@property __weak NSTextField *subscribersTitle; // @synthesize subscribersTitle=_subscribersTitle;
@property __weak NSTextField *streamNameTextField; // @synthesize streamNameTextField=_streamNameTextField;
@property __weak NSView *streamNameContainer; // @synthesize streamNameContainer=_streamNameContainer;
@property __weak NSView *footerView; // @synthesize footerView=_footerView;
@property __weak IPXSharedStreamNotificationsView *notificationsView; // @synthesize notificationsView=_notificationsView;
@property __weak IPXSharedStreamPublicWebsiteView *publicViewSiteView; // @synthesize publicViewSiteView=_publicViewSiteView;
@property __weak IPXSharedStreamContributorsView *subscribersCanPostView; // @synthesize subscribersCanPostView=_subscribersCanPostView;
@property __weak NSView *subscribersView; // @synthesize subscribersView=_subscribersView;
@property __weak NSView *streamNameView; // @synthesize streamNameView=_streamNameView;
@property(copy, nonatomic) SBLSharedPhotoStreamSettings *settings; // @synthesize settings=_settings;
@property(copy) NSArray *recentSubscribers; // @synthesize recentSubscribers=_recentSubscribers;
@property(retain) IPXWorkspaceController *workspaceController; // @synthesize workspaceController=_workspaceController;
@property unsigned long long popOverMode; // @synthesize popOverMode=_popOverMode;
@property __weak IPXSharedStreamSettingsController *popoverController; // @synthesize popoverController=_popoverController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)responderTakesFocus:(id)arg1;
- (void)stopObservingResponderChanges;
- (void)startObservingResponderChanges;
- (void)setActionButtonLabel:(id)arg1 enabled:(BOOL)arg2;
- (void)commitTokens;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)_isStreamNameValid:(id)arg1;
- (BOOL)canManageSubscribers;
- (BOOL)isFamilyStreamAlbum;
- (id)availableDefaultNewAlbumTitle;
- (id)streamName;
- (void)actionButtonClicked:(id)arg1;
- (void)a_resendInvitation:(id)arg1;
- (void)a_removeSubscriberToken:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)sharedPhotoStreamsMetadataChangedForSharedStreamWithIdentifier:(id)arg1;
- (id)mergeSubscribers:(id)arg1;
- (id)personForObject:(id)arg1;
- (void)_settingsDidUpdate;
- (void)_reloadSettingValues;
@property(retain, nonatomic) SBLSharedPhotoStreamSettings *streamSettings;
- (void)_applyActionButtonStyle:(id)arg1;
- (void)_whiteBoxStyle:(id)arg1;
- (id)attributedButtonString:(id)arg1 withSize:(double)arg2 withTextAlignment:(unsigned long long)arg3;
- (id)attributedDescriptionString:(id)arg1 withSize:(double)arg2 withTextAlignment:(unsigned long long)arg3;
- (id)attributedTitleString:(id)arg1 withSize:(double)arg2 withTextAlignment:(unsigned long long)arg3;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)updateViewConstraints;
- (void)viewWillAppear;
- (void)configureView;
- (void)configureStacks;
- (id)viewsForMode;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)nibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

