//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SCKAsyncBlockOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)start;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

