//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SFCertAssistantCAWebComposer : NSObject
{
    double _progress;
    long long _result;
    NSString *_siteDir;
    NSString *_webURL;
    NSString *_caName;
    NSString *_caLocalRootCertPemPath;
    NSString *_caLocalCertAuthorityConfigFilePath;
    NSString *_pathToWebFiles;
    NSString *_webSiteFilesPath;
    NSString *_sha1FingerPrint;
    NSString *_siteFolderPath;
    NSString *_caWebFilesFolderPath;
    NSString *_altURL;
    SEL _nextTimerToFire;
    SEL _clientSelector;
    id _clientDelegate;
    void *_clientContext;
}

+ (BOOL)_visitCAWebSite;
+ (BOOL)_visitCAWebSite:(id)arg1;
+ (id)_uniqueDirNameForDirName:(id)arg1;
+ (id)_htmlTemplateToCAhtmlWithCAName:(id)arg1 caAdminName:(id)arg2 htmlContents:(id)arg3 sha1FingerPrint:(id)arg4;
+ (void *)_currDotMacAccount:(id)arg1 password:(id)arg2;
+ (void *)_getSessionHandle:(void *)arg1;
- (void)_constructCAWebSiteForCA:(id)arg1 webURL:(id *)arg2 altURL:(id)arg3 renameExisting:(BOOL)arg4 caLocalRootCertPemPath:(id)arg5 caLocalCertAuthorityConfigFilePath:(id)arg6 sha1FingerPrint:(id)arg7;
- (id)_altURL;
- (void)_setAltURL:(id)arg1;
- (BOOL)_result;
- (void)_stop;
- (void)_timer16:(id)arg1;
- (void)_timer15:(id)arg1;
- (void)_timer14:(id)arg1;
- (void)_timer13:(id)arg1;
- (void)_timer12:(id)arg1;
- (void)_timer8:(id)arg1;
- (void)_timer7:(id)arg1;
- (void)_timer6:(id)arg1;
- (void)_timer5:(id)arg1;
- (void)_timer4:(id)arg1;
- (void)_timer3:(id)arg1;
- (void)_timer2:(id)arg1;
- (void)_timer1:(id)arg1;
- (void)_statusCheckTimer:(id)arg1;
- (void)_cleanUp;
- (void)_cleanUpTimer:(id)arg1;
- (void)_advanceProgress;
- (double)_progress;
- (double)_maxProgress;
- (void)dealloc;
- (id)initWithCAName:(id)arg1;

@end

