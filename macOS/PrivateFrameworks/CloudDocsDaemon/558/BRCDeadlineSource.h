//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCDeadlineScheduler, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDeadlineSource : NSObject
{
    long long _deadline;
    BRCDeadlineScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSString *_name;
    CDUnknownBlockType _eventHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)runEventHandler;
- (BOOL)willRunEvenHandler;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id)description;
- (id)initWithScheduler:(id)arg1 name:(id)arg2;

@end

