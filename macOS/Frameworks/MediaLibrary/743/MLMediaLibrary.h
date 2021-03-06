//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLMediaLibraryImpl, NSDictionary;

@interface MLMediaLibrary : NSObject
{
    MLMediaLibraryImpl *_impl;
}

+ (void)unboxURLWithKey1:(id)arg1 key2:(id)arg2 inDictionary:(id)arg3;
+ (void)initialize;
- (void)setMediaSources:(id)arg1;
@property(readonly, copy) NSDictionary *mediaSources;
- (void)xpcConnectionWasInterrupted;
- (BOOL)outboundRequestInFlight;
- (void)setOutboundRequestInFlight:(BOOL)arg1;
- (id)outboundRequestCondition;
- (id)outboundRequestQueue;
- (id)service;
- (void)dealloc;
- (id)init;
- (id)initWithOptions:(id)arg1;

@end

