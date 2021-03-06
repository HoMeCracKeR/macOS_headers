//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface USSServicesClient : NSObject
{
    BOOL _isDaemon;
    unsigned int _servicePort;
    int _parentProcessIdentifier;
    NSString *_daemonName;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_notificationConnection;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_disconnectionQueue;
    CDUnknownBlockType _disconnectionHandler;
    NSURL *_parentBundleURL;
    struct CGSize _initialSceneSize;
}

+ (BOOL)internalDiagnosticsAvailable;
@property(nonatomic) struct CGSize initialSceneSize; // @synthesize initialSceneSize=_initialSceneSize;
@property(retain, nonatomic) NSURL *parentBundleURL; // @synthesize parentBundleURL=_parentBundleURL;
@property(nonatomic) int parentProcessIdentifier; // @synthesize parentProcessIdentifier=_parentProcessIdentifier;
@property(copy, nonatomic) CDUnknownBlockType disconnectionHandler; // @synthesize disconnectionHandler=_disconnectionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *disconnectionQueue; // @synthesize disconnectionQueue=_disconnectionQueue;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) NSObject<OS_xpc_object> *notificationConnection; // @synthesize notificationConnection=_notificationConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int servicePort; // @synthesize servicePort=_servicePort;
@property(nonatomic) BOOL isDaemon; // @synthesize isDaemon=_isDaemon;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSString *daemonName; // @synthesize daemonName=_daemonName;
- (void).cxx_destruct;
- (void)unregisterNotificationHandler:(unsigned long long)arg1;
- (unsigned long long)registerForNotification:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)submitRemoteNotificationRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitUserNotificationResponseRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitActivityContinuationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitOpenURLRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitApplicationGracefulTerminationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)submitSceneActiveRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)submitSceneResizeRequest:(id)arg1 error:(id *)arg2;
- (id)submitRequestSync:(id)arg1 replyType:(Class)arg2 error:(id *)arg3;
- (void)submitRequestAsync:(id)arg1 replyType:(Class)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)submitRequestAsync:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL isConnected;
- (void)_onQueue_disconnect;
- (void)_onQueue_connectWithConnection:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onQueue_connectWithMachPort:(unsigned int)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)connectWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)connect;
- (void)setDisconnectionQueue:(id)arg1 disconnectionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initCommon;
- (id)initForUnitTestWithConnection:(id)arg1;
- (id)initDaemonClientForCurrentUserWithName:(id)arg1;
- (id)initWithParentProcessIdentifier:(int)arg1 parentBundleURL:(id)arg2 initialSceneSize:(struct CGSize)arg3;

@end

