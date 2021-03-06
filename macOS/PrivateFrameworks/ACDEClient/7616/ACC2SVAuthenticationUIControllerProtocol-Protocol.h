//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACC2SVTrustedDeviceObject, NSArray, NSError;

@protocol ACC2SVAuthenticationUIControllerProtocol <NSObject>
@property(nonatomic) id <ACC2SVAuthenticationUIControllerDelegate> delegate;
- (void)resetTrustedDevicesViewControllerWithDeviceList:(NSArray *)arg1;
- (void)resetCodeVerificationViewController;
- (void)showAlertWithError:(NSError *)arg1 completion:(void (^)(BOOL))arg2;
- (void)hideUIAnimated:(BOOL)arg1 withCompletion:(void (^)(void))arg2;
- (void)enterVerificationCodeWithLength:(unsigned long long)arg1 forDevice:(ACC2SVTrustedDeviceObject *)arg2 completion:(void (^)(NSString *))arg3;
- (void)chooseTrustedDeviceWithDeviceList:(NSArray *)arg1 completion:(void (^)(ACC2SVTrustedDeviceObject *))arg2;

@optional
- (void)serverCommunicationDidEnd;
- (void)serverCommunicationWillStart;
- (void)enterRecoveryKeyWithCompletion:(void (^)(NSString *))arg1;
- (void)handleFailoverWithCompletion:(void (^)(void))arg1;
- (void)showSetupPromptWithCompletion:(void (^)(int))arg1;
- (void)resetRecoveryCodeViewController;
@end

