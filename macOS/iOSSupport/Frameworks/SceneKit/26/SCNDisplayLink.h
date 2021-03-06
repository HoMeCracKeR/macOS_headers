//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, SCNRecursiveLock;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    CADisplayLink *_caDisplayLink;
    BOOL _supportTargetTimestamp;
    CDUnknownBlockType _block;
    CDUnknownBlockType _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    SCNRecursiveLock *_runningLock;
    // Error parsing type: Ai, name: _queuedFrameCount
}

- (BOOL)_isInvalidated;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)_cleanup;
- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property(nonatomic) float preferredFrameRate;
@property(copy, nonatomic) CDUnknownBlockType adaptativeFrameRate;
- (BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
@property(nonatomic, getter=isPaused) BOOL paused;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

