//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKit/HMLocationEvent.h>

#import <Home/HFLocationBasedEvent-Protocol.h>

@class NSString;

@interface HMLocationEvent (HFAdditions) <HFLocationBasedEvent>
+ (BOOL)hf_isRegion:(id)arg1 atHome:(id)arg2;
+ (unsigned long long)hf_locationEventTypeForRegion:(id)arg1;
- (BOOL)hf_isRegionAtHome:(id)arg1;
@property(readonly, nonatomic) unsigned long long hf_eventType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

