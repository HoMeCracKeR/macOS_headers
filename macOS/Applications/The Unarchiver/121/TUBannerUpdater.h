//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TUBannerManager;

@interface TUBannerUpdater : NSObject
{
    BOOL _bannerInformationResolved;
    TUBannerManager *_bannerManager;
    NSMutableArray *_delayedActions;
    struct dispatch_queue_s *_workingQueue;
}

@property(nonatomic) struct dispatch_queue_s *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(retain, nonatomic) NSMutableArray *delayedActions; // @synthesize delayedActions=_delayedActions;
@property(nonatomic) BOOL bannerInformationResolved; // @synthesize bannerInformationResolved=_bannerInformationResolved;
@property(retain, nonatomic) TUBannerManager *bannerManager; // @synthesize bannerManager=_bannerManager;
- (void)dealloc;
- (void)finalizeBannerInformation;
- (void)runOnUpdate:(CDUnknownBlockType)arg1;
- (void)bannerUpdateFailed:(unsigned long long)arg1 underlyingError:(id)arg2;
- (void)parseBannerConfiguration:(id)arg1;
- (void)updateBannerConfiguration;
- (id)initWithBannerManager:(id)arg1;

@end

