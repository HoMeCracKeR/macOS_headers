//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet;

@interface CRSIdentifiedServiceRegistry : NSObject
{
    NSMutableOrderedSet *_identifiedServices;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)identifiedServices;
- (void)registerIdentifiedService:(id)arg1;
- (id)init;

@end

