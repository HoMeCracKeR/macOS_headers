//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDMediaBrowser, NSArray;

@protocol HMDMediaBrowserDelegate <NSObject>
- (void)browser:(HMDMediaBrowser *)arg1 didUpdateEndpoints:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveSessions:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didRemoveAdvertisements:(NSArray *)arg2;
- (void)browser:(HMDMediaBrowser *)arg1 didAddAdvertisements:(NSArray *)arg2;
@end

