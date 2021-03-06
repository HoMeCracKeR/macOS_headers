//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray;

@protocol ASDUpdatesServiceProtocol
- (void)updateAllWithOrder:(NSArray *)arg1 replyHandler:(void (^)(BOOL, NSArray *, NSError *))arg2;
- (void)setAutoUpdateEnabled:(BOOL)arg1 withReplyHandler:(void (^)(void))arg2;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshUpdateCountWithReplyHandler:(void (^)(long long, NSError *))arg1;
- (void)getUpdatesWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)confirmAgentRequestedUpdateAll:(void (^)(BOOL))arg1;
- (void)compatibilityUpdateForBundleIDs:(NSArray *)arg1 userInitiated:(BOOL)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)autoUpdateEnabled:(void (^)(BOOL))arg1;
@end

