//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SSRankingFeedbackHandler : NSObject
{
    NSMutableDictionary *_mapProtectionClassToBundleIdToItem;
    NSMutableArray *_sectionCSItems;
    NSObject<OS_dispatch_queue> *_countQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *countQueue; // @synthesize countQueue=_countQueue;
@property(retain) NSMutableArray *sectionCSItems; // @synthesize sectionCSItems=_sectionCSItems;
@property(retain) NSMutableDictionary *mapProtectionClassToBundleIdToItem; // @synthesize mapProtectionClassToBundleIdToItem=_mapProtectionClassToBundleIdToItem;
- (id)init;

@end

