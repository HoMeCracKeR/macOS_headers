//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface LPWebSocketServer : NSObject
{
    BOOL _isRunning;
    NSString *_tlsKeyPath;
    NSString *_tlsCertificatePath;
    BOOL _stopServer;
    struct lws_context *_context;
    unsigned long long _messagesCount;
    NSMutableDictionary *_messageQueues;
    unsigned long long _nextAvailableSessionID;
    id <LPWebSocketServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateDispatchQueue;
    CDUnknownBlockType _serverStoppedCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType serverStoppedCompletionBlock; // @synthesize serverStoppedCompletionBlock=_serverStoppedCompletionBlock;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *delegateDispatchQueue; // @synthesize delegateDispatchQueue=_delegateDispatchQueue;
@property(nonatomic) __weak id <LPWebSocketServerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long nextAvailableSessionID; // @synthesize nextAvailableSessionID=_nextAvailableSessionID;
@property(retain, nonatomic) NSMutableDictionary *messageQueues; // @synthesize messageQueues=_messageQueues;
@property unsigned long long messagesCount; // @synthesize messagesCount=_messagesCount;
@property(nonatomic) struct lws_context *context; // @synthesize context=_context;
@property BOOL stopServer; // @synthesize stopServer=_stopServer;
@property BOOL isRunning; // @synthesize isRunning=_isRunning;
- (void).cxx_destruct;
- (void)pushData:(id)arg1 toAllSocketsExceptThoseWithID:(id)arg2;
- (void)pushDataToAllSockets:(id)arg1;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startListeningOnPort:(int)arg1 withProtocolName:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 tlsPrivateKeyPath:(id)arg3 tlsCertificatePath:(id)arg4;

@end

