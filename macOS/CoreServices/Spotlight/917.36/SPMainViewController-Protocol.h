//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSString, PRSResult, SPAppDelegate, SPKQuery, SPKResponse, SPResultViewController;
@protocol SPResultViewControllerDelegate;

@protocol SPMainViewController
- (void)appDidDeactivate;
- (void)appDidBecomeActive;
- (void)markAsAbandoned:(unsigned long long)arg1;
- (void)markAsUsed:(PRSResult *)arg1 query:(SPKQuery *)arg2 subItem:(BOOL)arg3;
- (void)selectTabAtIndex:(long long)arg1;
- (void)selectTabViewItem:(id)arg1;
- (void)selectPreviousTab:(id)arg1;
- (void)selectNextTab:(id)arg1;
- (unsigned long long)checkForMatchingAttributes:(PRSResult *)arg1 attribute:(NSString *)arg2;
- (SPResultViewController *)currentViewController;
- (void)setDelegate:(SPAppDelegate<SPResultViewControllerDelegate> *)arg1;
- (void)processQueryResponse:(SPKResponse *)arg1;
@end

