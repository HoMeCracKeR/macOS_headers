//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class EditServerConfigurationFileWindowController, NSBox, NSButton, NSLayoutConstraint, NSPopUpButton, NSSecureTextField, NSStackView, NSString, NSTextField, NSView, RWBookmarkTestingWindowController, RWFTPBrowserWindowController, SFCertificateTrustPanel;

__attribute__((visibility("hidden")))
@interface RWPublishingDestinationSettingsViewController : NSViewController
{
    BOOL _deleteButtonEnabled;
    id <RWPublishingDestinationSettingsViewControllerDelegate> _publishingDestinationSettingsDelegate;
    NSString *_defaultWebsiteAddress;
    NSView *_destinationSettingsContainerView;
    NSLayoutConstraint *_destinationSettingsContainerViewBottomConstraint;
    NSView *_destinationSettingsView;
    NSStackView *_publishingStackView;
    NSView *_publishingHeader;
    NSView *_publishingHost;
    NSView *_publishingCredentials;
    NSView *_publishingAccessKey;
    NSView *_publishingLocalPath;
    NSView *_publishingRemotePath;
    NSView *_publishingPublicKeyAuth;
    NSView *_publishingFTPMode;
    NSView *_publishingSSLMode;
    NSView *_publishingBackupFrequency;
    NSView *_publishingFooter;
    NSView *_publishingWebsiteAddress;
    NSView *_publishingAutomaticConfiguration;
    NSView *_publishingServerConfigurationFile;
    NSBox *_secretContainerBox;
    NSBox *_passwordContainerBox;
    NSSecureTextField *_passwordSecureTextField;
    NSTextField *_passwordTextField;
    NSBox *_passphraseContainerBox;
    NSSecureTextField *_passphraseSecureTextField;
    NSTextField *_passphraseTextField;
    NSTextField *_websiteAddressTextField;
    NSButton *_manageManuallyButton;
    NSPopUpButton *_previousServerConfigurationFiles;
    EditServerConfigurationFileWindowController *_editServerConfigurationFileWindowController;
    RWBookmarkTestingWindowController *_bookmarkTestingWindowController;
    RWFTPBrowserWindowController *_ftpBrowser;
    struct __SecTrust *_trust;
    SFCertificateTrustPanel *_trustPanel;
}

+ (id)keyPathsForValuesAffectingCanDownloadBackup;
+ (id)keyPathsForValuesAffectingLastBackupDescription;
+ (id)keyPathsForValuesAffectingPrivateKeyPath;
@property(retain, nonatomic) SFCertificateTrustPanel *trustPanel; // @synthesize trustPanel=_trustPanel;
@property(nonatomic) struct __SecTrust *trust; // @synthesize trust=_trust;
@property(retain, nonatomic) RWFTPBrowserWindowController *ftpBrowser; // @synthesize ftpBrowser=_ftpBrowser;
@property(retain) RWBookmarkTestingWindowController *bookmarkTestingWindowController; // @synthesize bookmarkTestingWindowController=_bookmarkTestingWindowController;
@property(retain, nonatomic) EditServerConfigurationFileWindowController *editServerConfigurationFileWindowController; // @synthesize editServerConfigurationFileWindowController=_editServerConfigurationFileWindowController;
@property __weak NSPopUpButton *previousServerConfigurationFiles; // @synthesize previousServerConfigurationFiles=_previousServerConfigurationFiles;
@property __weak NSButton *manageManuallyButton; // @synthesize manageManuallyButton=_manageManuallyButton;
@property __weak NSTextField *websiteAddressTextField; // @synthesize websiteAddressTextField=_websiteAddressTextField;
@property __weak NSTextField *passphraseTextField; // @synthesize passphraseTextField=_passphraseTextField;
@property __weak NSSecureTextField *passphraseSecureTextField; // @synthesize passphraseSecureTextField=_passphraseSecureTextField;
@property __weak NSBox *passphraseContainerBox; // @synthesize passphraseContainerBox=_passphraseContainerBox;
@property __weak NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property __weak NSSecureTextField *passwordSecureTextField; // @synthesize passwordSecureTextField=_passwordSecureTextField;
@property __weak NSBox *passwordContainerBox; // @synthesize passwordContainerBox=_passwordContainerBox;
@property __weak NSBox *secretContainerBox; // @synthesize secretContainerBox=_secretContainerBox;
@property(retain) NSView *publishingServerConfigurationFile; // @synthesize publishingServerConfigurationFile=_publishingServerConfigurationFile;
@property __weak NSView *publishingAutomaticConfiguration; // @synthesize publishingAutomaticConfiguration=_publishingAutomaticConfiguration;
@property __weak NSView *publishingWebsiteAddress; // @synthesize publishingWebsiteAddress=_publishingWebsiteAddress;
@property __weak NSView *publishingFooter; // @synthesize publishingFooter=_publishingFooter;
@property __weak NSView *publishingBackupFrequency; // @synthesize publishingBackupFrequency=_publishingBackupFrequency;
@property __weak NSView *publishingSSLMode; // @synthesize publishingSSLMode=_publishingSSLMode;
@property __weak NSView *publishingFTPMode; // @synthesize publishingFTPMode=_publishingFTPMode;
@property __weak NSView *publishingPublicKeyAuth; // @synthesize publishingPublicKeyAuth=_publishingPublicKeyAuth;
@property __weak NSView *publishingRemotePath; // @synthesize publishingRemotePath=_publishingRemotePath;
@property __weak NSView *publishingLocalPath; // @synthesize publishingLocalPath=_publishingLocalPath;
@property __weak NSView *publishingAccessKey; // @synthesize publishingAccessKey=_publishingAccessKey;
@property __weak NSView *publishingCredentials; // @synthesize publishingCredentials=_publishingCredentials;
@property __weak NSView *publishingHost; // @synthesize publishingHost=_publishingHost;
@property __weak NSView *publishingHeader; // @synthesize publishingHeader=_publishingHeader;
@property __weak NSStackView *publishingStackView; // @synthesize publishingStackView=_publishingStackView;
@property __weak NSView *destinationSettingsView; // @synthesize destinationSettingsView=_destinationSettingsView;
@property(retain) NSLayoutConstraint *destinationSettingsContainerViewBottomConstraint; // @synthesize destinationSettingsContainerViewBottomConstraint=_destinationSettingsContainerViewBottomConstraint;
@property __weak NSView *destinationSettingsContainerView; // @synthesize destinationSettingsContainerView=_destinationSettingsContainerView;
@property(retain, nonatomic) NSString *defaultWebsiteAddress; // @synthesize defaultWebsiteAddress=_defaultWebsiteAddress;
@property(nonatomic) BOOL deleteButtonEnabled; // @synthesize deleteButtonEnabled=_deleteButtonEnabled;
@property(nonatomic) __weak id <RWPublishingDestinationSettingsViewControllerDelegate> publishingDestinationSettingsDelegate; // @synthesize publishingDestinationSettingsDelegate=_publishingDestinationSettingsDelegate;
- (void).cxx_destruct;
- (void)_updatePublishingSettings;
- (void)_chooseKeyPathForKeyType:(id)arg1;
- (void)restoreServerConfigurationFile:(id)arg1;
- (void)editServerConfigurationFile:(id)arg1;
- (void)manageBookmarkManually:(id)arg1;
- (void)addToBookmarks:(id)arg1;
- (void)certificateTrustSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)chooseRemotePath:(id)arg1;
- (void)testConnection:(id)arg1;
- (void)choosePrivateKeyPath:(id)arg1;
- (void)chooseLocalFolderPath:(id)arg1;
- (void)revealLocalFolderPath:(id)arg1;
- (void)publishingMethodChanged:(id)arg1;
- (void)toggleDestinationSettings:(id)arg1;
- (void)removePublishDestination:(id)arg1;
- (void)showPassphraseChanged:(id)arg1;
- (void)showPasswordChanged:(id)arg1;
- (void)inputFieldChanged:(id)arg1;
@property(readonly) __weak NSString *lastBackupDescription;
@property(readonly) BOOL canDownloadBackup;
@property(readonly) __weak NSString *privateKeyPath;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end

