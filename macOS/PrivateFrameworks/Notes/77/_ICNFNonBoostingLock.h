//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

@interface _ICNFNonBoostingLock : NSObject <NSLocking>
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _lock;
}

- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

