//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PersonalizationPortraitInternals/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPLocationClientProtocol <PPFeedbackAccepting>
- (void)locationRecordBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
- (void)locationBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
@end

