//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSCHUnretainedParent-Protocol.h"
#import "TSDDynamicChangeStandIn-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, TSCHChartSeriesPropertyVendor;

@interface TSCHChartSeriesPropertyVendorDynamicChangeStandIn : NSObject <TSDDynamicChangeStandIn, TSCHUnretainedParent>
{
    NSSet *mChangeKeys;
    NSMutableDictionary *mValueDict;
    TSCHChartSeriesPropertyVendor *mParent;
}

@property(readonly, nonatomic) __weak TSCHChartSeriesPropertyVendor *parent; // @synthesize parent=mParent;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)endDynamicChange;
- (void)beginDynamicChange;
@property(readonly, nonatomic) NSSet *dynamicChangeKeys;
- (id)valueDict;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1 changeKeys:(id)arg2 valueDict:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

