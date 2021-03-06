//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface AsyncURLConnection : NSObject
{
    NSMutableData *data_;
    CDUnknownBlockType completeBlock_;
    CDUnknownBlockType errorBlock_;
}

+ (id)request:(id)arg1 completeBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 completeBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;

@end

