//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath;

@interface TMACollectionViewItem : NSObject
{
    NSIndexPath *_indexPath;
    NSArray *_children;
}

@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) Class childrenLayoutClass;
- (void)dealloc;
- (id)initWithIndexPath:(id)arg1 children:(id)arg2;
- (id)initWithIndexPath:(id)arg1;

@end

