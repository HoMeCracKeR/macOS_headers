//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexSet, NSSet;

@protocol _UIIdentifierDiffer <NSObject>
@property(readonly, nonatomic) BOOL hasChanges;
@property(readonly, nonatomic) NSSet *movePairs;
@property(readonly, nonatomic) NSIndexSet *deletedIndexes;
@property(readonly, nonatomic) NSIndexSet *insertedIndexes;
@end

