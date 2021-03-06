//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface BSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> *_message;
    CDUnknownBlockType _replyHandler;
    NSObject<OS_dispatch_queue> *_replyQueue;
    int _invalidated;
    int _replied;
}

+ (id)messageWithPacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 replyQueue:(id)arg3;
+ (id)message:(long long)arg1 withPacker:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 replyQueue:(id)arg4;
+ (id)message:(long long)arg1 withPacker:(CDUnknownBlockType)arg2;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(CDUnknownBlockType)arg3 replyHandler:(CDUnknownBlockType)arg4 replyQueue:(id)arg5;
+ (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 toConnection:(id)arg2 replyHandler:(CDUnknownBlockType)arg3 replyQueue:(id)arg4;
+ (void)sendMessageWithPacker:(CDUnknownBlockType)arg1 toConnection:(id)arg2;
+ (void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(CDUnknownBlockType)arg3;
+ (const char *)messageTypeKey;
+ (id)messageWithPayload:(id)arg1;
+ (id)messageWithPacker:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *payload; // @synthesize payload=_message;
- (void)forcefullyInvokeReplyHandler:(id)arg1;
- (id)_errorForXPCMessageReply:(id)arg1;
- (id)sendSynchronouslyToConnection:(id)arg1 error:(id *)arg2;
- (BOOL)sendToConnection:(id)arg1 replyQueue:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (BOOL)sendToConnection:(id)arg1;
- (id)description;
- (id)initWithMessage:(long long)arg1 packer:(CDUnknownBlockType)arg2 replyHandler:(CDUnknownBlockType)arg3 replyQueue:(id)arg4;
- (id)initWithMessagePacker:(CDUnknownBlockType)arg1 replyHandler:(CDUnknownBlockType)arg2 replyQueue:(id)arg3;
- (id)initWithMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 replyQueue:(id)arg3;

@end

