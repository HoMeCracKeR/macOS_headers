//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface NSPersistentUIFlushScheduler : NSObject
{
    id <NSPersistentUIFlushHandler> _handler;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _hysteresisBlock;
    double _scheduledFlushDeadline;
    double _scheduledFlushDate;
    unsigned int _contiguousInactiveFlushCount;
    unsigned int _disableRestorableStateWritingCounter;
    id _applicationDidResignObserver;
}

- (void).cxx_destruct;
- (void)scheduleTimer;
- (void)_timerDidFire;
- (void)flushImmediately;
- (BOOL)_applicationIsActive;
- (void)_performFlush;
- (void)enableFlushing;
- (void)disableFlushing;
- (void)cancelTimer;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)initWithHandler:(id)arg1;

@end

