//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BGMAppWatcher : NSObject
{
    id <NSObject> didLaunchToken;
    id <NSObject> didTerminateToken;
}

+ (BOOL)shouldBeHandled:(id)arg1 isMatchingBundleID:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAppLaunched:(CDUnknownBlockType)arg1 appTerminated:(CDUnknownBlockType)arg2 isMatchingBundleID:(CDUnknownBlockType)arg3;
- (id)initWithBundleID:(id)arg1 appLaunched:(CDUnknownBlockType)arg2 appTerminated:(CDUnknownBlockType)arg3;

@end

