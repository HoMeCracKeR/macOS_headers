//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDLayoutProxy.h"

#import "TSKAnchorValueResolvable-Protocol.h"

@class NSDictionary, NSIndexSet, TSCHChartEditor, TSCHPieWedgeExplosionValues;

@interface TSCHChartDrawableLayoutProxy : TSDLayoutProxy <TSKAnchorValueResolvable>
{
    TSCHChartEditor *mChartEditor;
}

- (void)willSetValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)anchorValueForKeyPath:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property(readonly, nonatomic) TSCHPieWedgeExplosionValues *layoutPieWedgeExplosions;
@property(readonly, nonatomic) NSIndexSet *pieWedgeExplosionSeriesIndices;
- (void)p_chartDrawableLayoutPropertyValueDidChange:(id)arg1;
- (id)trackerUpdatableKeys;
- (id)legendGeometry;
- (void)dynamicChangeStandInDidEndDynamicChange:(id)arg1;
- (id)newDynamicChangeStandInForKeyPath:(id)arg1;
- (id)p_dynamicChangeKeyForKeyPath:(id)arg1;
- (BOOL)usesCompoundValuesWithDynamicChangesForKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 documentRoot:(id)arg2;
- (id)initWithTarget:(id)arg1 chartEditor:(id)arg2 documentRoot:(id)arg3;

@end

