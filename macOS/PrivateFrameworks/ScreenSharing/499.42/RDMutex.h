//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RDMutex : NSObject
{
    struct _opaque_pthread_mutex_t pthreadLock;
    NSString *whoHasTheLock;
    BOOL trackOwner;
}

@property(retain) NSString *whoHasTheLock; // @synthesize whoHasTheLock;
- (id)description;
- (int)unlock;
- (int)trylock;
- (int)lock;
- (void)dealloc;
- (id)initWithoutTracking;
- (id)init;

@end

