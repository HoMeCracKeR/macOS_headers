//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAFileCleanupOperation.h"

@class NSSet;

@interface FBAResponseIDFileCleanupOperation : FBAFileCleanupOperation
{
    BOOL _mode;
    NSSet *_responseIDs;
}

- (void).cxx_destruct;
@property BOOL mode; // @synthesize mode=_mode;
@property(copy) NSSet *responseIDs; // @synthesize responseIDs=_responseIDs;
- (id)responseIDForDirectoryName:(id)arg1;
- (void)main;
- (id)initWithResponseIDs:(id)arg1 deleteMode:(BOOL)arg2;

@end

