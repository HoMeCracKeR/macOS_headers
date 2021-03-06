//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSDictionary;

@protocol TBFetchRequest <NSObject, NSCopying>
@property(readonly, nonatomic) BOOL cacheable;
@property(copy, nonatomic) CDUnknownBlockType preferLocalHandler;
@property(copy, nonatomic) CDUnknownBlockType resultsHandler;
@property(nonatomic) unsigned long long sourcePolicy;
@property(readonly, nonatomic) id <TBFetchRequestDescriptor> descriptor;
- (void)handleResponse:(id <TBFetchResponse>)arg1;

@optional
@property(retain, nonatomic) NSDictionary *userInfo;
- (void)handlePreferLocalResponse:(NSArray *)arg1;
@end

