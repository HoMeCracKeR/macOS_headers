//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSCFRunLoopSemaphore : NSObject
{
    unsigned int _waiting:1;
    unsigned int _waited:1;
    unsigned int _signaled:1;
    void *_mode;
    NSString *_legend;
    NSString *_loggingDomain;
}

+ (struct __CFString *)mode;
@property(readonly) NSString *mode; // @synthesize mode=_mode;
@property(copy) NSString *loggingDomain; // @synthesize loggingDomain=_loggingDomain;
@property(copy) NSString *legend; // @synthesize legend=_legend;
- (void)wait;
- (void)signalOnAppKitThread;
- (void)signal;
- (void)_log:(id)arg1;
- (void)deallocOnAppKitThread;
- (void)dealloc;
- (id)initWithModes:(struct __CFArray *)arg1;
- (id)initWithMode:(struct __CFString *)arg1;
- (id)init;

@end

