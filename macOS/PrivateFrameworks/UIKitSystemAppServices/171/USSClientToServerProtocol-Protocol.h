//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, USSApplicationGracefulTerminationRequest, USSBackgroundLaunchRequest, USSEnableApplicationAccessibilityRequest, USSOpenURLRequest, USSSceneActiveRequest, USSSceneResizeRequest, USSUserActivityContinuationRequest, USSUserNotificationResponseRequest;

@protocol USSClientToServerProtocol
- (void)submitBackgroundLaunchRequest:(USSBackgroundLaunchRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)hostingContextIDForSceneWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *, unsigned int))arg2;
- (void)submitUserNotificationResponseRequest:(USSUserNotificationResponseRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)submitActivityContinuationRequest:(USSUserActivityContinuationRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)submitOpenURLRequest:(USSOpenURLRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)submitApplicationGracefulTerminationRequest:(USSApplicationGracefulTerminationRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)submitEnableApplicationAccessibilityRequest:(USSEnableApplicationAccessibilityRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)submitSceneActiveRequest:(USSSceneActiveRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)submitSceneSizeRequest:(USSSceneResizeRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)beginSendingNotificationsCompletionHandler:(void (^)(void))arg1;
- (void)createNewSceneOfSize:(struct CGSize)arg1 persistenceIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *, NSString *))arg3;
- (void)connectCompletionHandler:(void (^)(void))arg1;
- (void)waitForServerToBeReadyCompletionHandler:(void (^)(void))arg1;
@end

