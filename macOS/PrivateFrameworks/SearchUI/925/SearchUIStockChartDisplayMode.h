//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSColor, NSString;

@interface SearchUIStockChartDisplayMode : NSObject <NSCopying>
{
    NSString *_hash;
    BOOL _showsVolume;
    BOOL _HUDEnabled;
    BOOL _showsPriceLabelForPreviousClose;
    BOOL _usesDetailedAxisLabels;
    BOOL _graphOverlapsYAxisLabels;
    long long _maxInterval;
    double _showsTitle;
    unsigned long long _yAxisLabelCount;
    unsigned long long _horizontalGridlineCount;
    double _volumeHeight;
    double _intervalRowHeight;
    double _lineWidth;
    NSColor *_lineColor;
    NSColor *_backgroundLinesColor;
    NSColor *_xAxisKeylineColor;
    NSColor *_axisLabelsColor;
    struct CGSize _chartSize;
    struct NSEdgeInsets _lineGraphInsets;
}

+ (id)defaultDisplayMode;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *axisLabelsColor; // @synthesize axisLabelsColor=_axisLabelsColor;
@property(retain, nonatomic) NSColor *xAxisKeylineColor; // @synthesize xAxisKeylineColor=_xAxisKeylineColor;
@property(retain, nonatomic) NSColor *backgroundLinesColor; // @synthesize backgroundLinesColor=_backgroundLinesColor;
@property(retain, nonatomic) NSColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(nonatomic) double intervalRowHeight; // @synthesize intervalRowHeight=_intervalRowHeight;
@property(nonatomic) double volumeHeight; // @synthesize volumeHeight=_volumeHeight;
@property(nonatomic) BOOL graphOverlapsYAxisLabels; // @synthesize graphOverlapsYAxisLabels=_graphOverlapsYAxisLabels;
@property(nonatomic) struct NSEdgeInsets lineGraphInsets; // @synthesize lineGraphInsets=_lineGraphInsets;
@property(nonatomic) BOOL usesDetailedAxisLabels; // @synthesize usesDetailedAxisLabels=_usesDetailedAxisLabels;
@property(nonatomic) BOOL showsPriceLabelForPreviousClose; // @synthesize showsPriceLabelForPreviousClose=_showsPriceLabelForPreviousClose;
@property(nonatomic) unsigned long long horizontalGridlineCount; // @synthesize horizontalGridlineCount=_horizontalGridlineCount;
@property(nonatomic) unsigned long long yAxisLabelCount; // @synthesize yAxisLabelCount=_yAxisLabelCount;
@property(nonatomic) double showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) BOOL HUDEnabled; // @synthesize HUDEnabled=_HUDEnabled;
@property(nonatomic) long long maxInterval; // @synthesize maxInterval=_maxInterval;
@property(nonatomic) BOOL showsVolume; // @synthesize showsVolume=_showsVolume;
@property(nonatomic) struct CGSize chartSize; // @synthesize chartSize=_chartSize;
@property(readonly, nonatomic) double lineGraphBottomPadding;
@property(readonly, nonatomic) double gutterHeight;
@property(readonly, nonatomic) struct CGGradient *backgroundGradient;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

