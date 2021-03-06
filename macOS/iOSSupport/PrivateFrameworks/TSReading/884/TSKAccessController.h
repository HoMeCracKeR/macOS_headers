//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition, NSMutableArray, NSMutableDictionary, TSUWeakReference;

@interface TSKAccessController : NSObject
{
    struct _opaque_pthread_rwlock_t _rwLock;
    BOOL _secondaryThreadWriting;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    struct __CFRunLoopSource *_mainThreadPingSource;
    NSMutableArray *_pendingMainThreadInvocations;
    struct _TSKThreadInfo _readerInfo[64];
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    BOOL _writeHeld;
    BOOL _writeBlockedMainThread;
    TSUWeakReference *_delegate;
}

- (BOOL)currentThreadHasWriteLock;
- (void)p_signalThread:(id)arg1;
- (BOOL)p_waitWithCondition:(id)arg1 untilDate:(id)arg2;
- (void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(BOOL)arg1;
- (void)p_performReadOnMainThread:(id)arg1;
- (void)p_scheduleMainThreadRead:(id)arg1;
- (void)p_dequeueWrite;
- (void)p_enqueueWriteAndBlock;
- (id)p_threadIdentifier;
- (void)p_writeUnlockAndPerformWithMainThreadBlocked:(CDUnknownBlockType)arg1;
- (void)p_writeUnlock;
- (void)p_writeLockAndBlockMainThread:(BOOL)arg1;
- (void)p_asyncPerformSelectorOnMainThread:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3;
- (void)p_blockMainThreadForWrite;
- (void)p_readUnlock;
- (BOOL)hasWrite;
- (BOOL)hasRead;
- (BOOL)p_hasWrite;
- (BOOL)p_hasRead;
- (void)p_readLock;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void *)arg5 passReadResultToMainThreadRead:(BOOL)arg6;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void *)arg5;
- (void)performRead:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(id)arg3 argument:(void *)arg4;
- (void)performWrite:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3;
- (void)performWrite:(CDUnknownBlockType)arg1 blockMainThread:(BOOL)arg2;
- (void)performWrite:(CDUnknownBlockType)arg1;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3 argument2:(void *)arg4;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void *)arg3;
- (void)performRead:(CDUnknownBlockType)arg1;
- (void)spinMainThreadRunLoopUntil:(SEL)arg1 onTarget:(id)arg2;
- (void)signalIdentifier:(id)arg1;
- (BOOL)waitOnIdentifier:(id)arg1 untilDate:(id)arg2 releaseReadWhileWaiting:(BOOL)arg3;
- (void)waitOnIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

