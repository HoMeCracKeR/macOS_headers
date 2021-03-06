//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BookCoverUtility/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol BCUOperation;

@protocol BCUSeriesCoverEffectsFilter <NSObject>
@property(readonly, nonatomic) NSString *identifier;
- (id <BCUOperation>)newOperationWithImages:(NSArray *)arg1 filters:(NSArray *)arg2 size:(struct CGSize)arg3 contentsScale:(double)arg4 completion:(void (^)(id <BCUOperation>, id <BCUPurgeableImage>, struct NSEdgeInsets, struct CGPath *))arg5;
@end

