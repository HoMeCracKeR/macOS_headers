//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsFeed/NSObject-Protocol.h>

@protocol SWPresentationManager <NSObject>
- (void)refresh;
- (void)onPresentable:(void (^)(double))arg1;
@property(nonatomic, copy) CDUnknownBlockType presentableBlock;
- (void)onLoad:(void (^)(void))arg1;
@property(nonatomic, copy) CDUnknownBlockType loadBlock;
@property(nonatomic, readonly) double height;
@property(nonatomic) unsigned long long presentationState;
@end

