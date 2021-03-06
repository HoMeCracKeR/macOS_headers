//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSKEntity, CSKStreamSource, NSArray;

@protocol CSKStreamSourceDelegate <NSObject>
- (CSKEntity *)keyEntityToFetchBackwardEntities;
- (CSKEntity *)keyEntityToFetchForwardEntities;
- (void)streamSource:(CSKStreamSource *)arg1 didStreamBackwardEntities:(NSArray *)arg2;
- (void)streamSource:(CSKStreamSource *)arg1 didStreamForwardEntities:(NSArray *)arg2;
- (void)streamSourceDidFinish:(CSKStreamSource *)arg1 total:(unsigned long long)arg2 failures:(unsigned long long)arg3;
- (void)streamSourceDidFail:(CSKStreamSource *)arg1;
- (void)streamSourceDidStop:(CSKStreamSource *)arg1;
- (void)streamSourceDidResume:(CSKStreamSource *)arg1;

@optional
- (void)streamSourceDidFinishAnalyzing:(CSKStreamSource *)arg1;
- (void)streamSourceDidStartAnalyzing:(CSKStreamSource *)arg1;
@end

