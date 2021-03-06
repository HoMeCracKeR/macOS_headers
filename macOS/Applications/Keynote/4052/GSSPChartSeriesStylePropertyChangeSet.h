//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GSSPStylePropertyChangeSet.h"

#import "GSSPAutoDecodable-Protocol.h"

@class TSDSpecFill, TSDSpecLineEnd, TSDSpecShadow, TSDSpecStroke, TSSSpecBool, TSSSpecDouble, TSSSpecInteger;

@interface GSSPChartSeriesStylePropertyChangeSet : GSSPStylePropertyChangeSet <GSSPAutoDecodable>
{
    TSDSpecLineEnd *mDefaultErrorBarLineEnd;
    TSDSpecLineEnd *mDefaultErrorBarLineEndScatterX;
    TSDSpecShadow *mDefaultErrorBarShadow;
    TSDSpecStroke *mDefaultErrorBarStroke;
    TSDSpecStroke *mDefaultErrorBarStrokeScatterX;
    TSDSpecFill *mArea3dFill;
    TSDSpecFill *mBar3dFill;
    TSDSpecFill *mColumn3dFill;
    TSDSpecFill *mLine3dFill;
    TSDSpecFill *mPie3dFill;
    TSDSpecFill *mAreaFill;
    TSDSpecFill *mBarFill;
    TSDSpecFill *mColumnFill;
    TSDSpecFill *mDefaultFill;
    TSDSpecFill *mMixedAreaFill;
    TSDSpecFill *mMixedColumnFill;
    TSDSpecFill *mPieFill;
    TSSSpecInteger *mAreaLabelParagraphStyleIndex;
    TSSSpecInteger *mBarLabelParagraphStyleIndex;
    TSSSpecInteger *mDefaultLabelParagraphStyleIndex;
    TSSSpecInteger *mLineLabelParagraphStyleIndex;
    TSSSpecInteger *mMixedLabelParagraphStyleIndex;
    TSSSpecInteger *mPieLabelParagraphStyleIndex;
    TSSSpecDouble *mDefaultOpacity;
    TSSSpecInteger *mAreaOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *mBarOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *mDefaultOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *mMixedOutsideLabelParagraphStyleIndex;
    TSSSpecInteger *mPieOutsideLabelParagraphStyleIndex;
    TSDSpecShadow *mArea3dShadow;
    TSDSpecShadow *mBar3dShadow;
    TSDSpecShadow *mColumn3dShadow;
    TSDSpecShadow *mLine3dShadow;
    TSDSpecShadow *mPie3dShadow;
    TSDSpecShadow *mAreaShadow;
    TSDSpecShadow *mBarShadow;
    TSDSpecShadow *mBubbleShadow;
    TSDSpecShadow *mDefaultShadow;
    TSDSpecShadow *mLineShadow;
    TSDSpecShadow *mMixedAreaShadow;
    TSDSpecShadow *mMixedColumnShadow;
    TSDSpecShadow *mMixedLineShadow;
    TSDSpecShadow *mPieShadow;
    TSDSpecShadow *mScatterShadow;
    TSDSpecStroke *mAreaStroke;
    TSDSpecStroke *mBarStroke;
    TSDSpecStroke *mBubbleStroke;
    TSDSpecStroke *mLineStroke;
    TSDSpecStroke *mMixedAreaStroke;
    TSDSpecStroke *mMixedColumnStroke;
    TSDSpecStroke *mMixedLineStroke;
    TSDSpecStroke *mPieStroke;
    TSDSpecStroke *mScatterStroke;
    TSDSpecFill *mAreaSymbolFill;
    TSDSpecFill *mBubbleSymbolFill;
    TSDSpecFill *mLineSymbolFill;
    TSDSpecFill *mMixedAreaSymbolFill;
    TSDSpecFill *mMixedLineSymbolFill;
    TSDSpecFill *mScatterSymbolFill;
    TSSSpecBool *mAreaSymbolFillUseSeriesFill;
    TSSSpecBool *mLineSymbolFillUseSeriesFill;
    TSSSpecBool *mMixedAreaSymbolFillUseSeriesFill;
    TSSSpecBool *mMixedLineSymbolFillUseSeriesFill;
    TSSSpecBool *mAreaSymbolFillUseSeriesStroke;
    TSSSpecBool *mBubbleSymbolFillUseSeriesStroke;
    TSSSpecBool *mLineSymbolFillUseSeriesStroke;
    TSSSpecBool *mMixedAreaSymbolFillUseSeriesStroke;
    TSSSpecBool *mMixedLineSymbolFillUseSeriesStroke;
    TSSSpecBool *mScatterSymbolFillUseSeriesStroke;
    TSSSpecDouble *mAreaSymbolSize;
    TSSSpecDouble *mLineSymbolSize;
    TSSSpecDouble *mMixedAreaSymbolSize;
    TSSSpecDouble *mMixedLineSymbolSize;
    TSSSpecDouble *mScatterSymbolSize;
    TSDSpecStroke *mAreaSymbolStroke;
    TSDSpecStroke *mBubbleSymbolStroke;
    TSDSpecStroke *mLineSymbolStroke;
    TSDSpecStroke *mMixedAreaSymbolStroke;
    TSDSpecStroke *mMixedLineSymbolStroke;
    TSDSpecStroke *mScatterSymbolStroke;
    TSDSpecShadow *mDefaultTrendLineShadow;
    TSDSpecStroke *mDefaultTrendLineStroke;
    TSSSpecDouble *mDefaultTrendlineEquationOpacity;
    TSSSpecInteger *mDefaultTrendlineEquationParagraphStyleIndex;
    TSSSpecDouble *mDefaultTrendlineRSquaredOpacity;
    TSSSpecInteger *mDefaultTrendlineRSquaredParagraphStyleIndex;
    TSSSpecInteger *mAreaValueLabelPosition;
    TSSSpecInteger *mBarValueLabelPosition;
    TSSSpecInteger *mBubbleValueLabelPosition;
    TSSSpecInteger *mDefaultValueLabelPosition;
    TSSSpecInteger *mLineValueLabelPosition;
    TSSSpecInteger *mMixedAreaValueLabelPosition;
    TSSSpecInteger *mMixedColumnValueLabelPosition;
    TSSSpecInteger *mMixedLineValueLabelPosition;
    TSSSpecInteger *mScatterValueLabelPosition;
    TSSSpecInteger *mStackedAreaValueLabelPosition;
    TSSSpecInteger *mStackedBarValueLabelPosition;
    BOOL mDefinedDefaultErrorBarLineEnd;
    BOOL mDefinedDefaultErrorBarLineEndScatterX;
    BOOL mDefinedDefaultErrorBarShadow;
    BOOL mDefinedDefaultErrorBarStroke;
    BOOL mDefinedDefaultErrorBarStrokeScatterX;
    BOOL mDefinedArea3dFill;
    BOOL mDefinedBar3dFill;
    BOOL mDefinedColumn3dFill;
    BOOL mDefinedLine3dFill;
    BOOL mDefinedPie3dFill;
    BOOL mDefinedAreaFill;
    BOOL mDefinedBarFill;
    BOOL mDefinedColumnFill;
    BOOL mDefinedDefaultFill;
    BOOL mDefinedMixedAreaFill;
    BOOL mDefinedMixedColumnFill;
    BOOL mDefinedPieFill;
    BOOL mDefinedAreaLabelParagraphStyleIndex;
    BOOL mDefinedBarLabelParagraphStyleIndex;
    BOOL mDefinedDefaultLabelParagraphStyleIndex;
    BOOL mDefinedLineLabelParagraphStyleIndex;
    BOOL mDefinedMixedLabelParagraphStyleIndex;
    BOOL mDefinedPieLabelParagraphStyleIndex;
    BOOL mDefinedDefaultOpacity;
    BOOL mDefinedAreaOutsideLabelParagraphStyleIndex;
    BOOL mDefinedBarOutsideLabelParagraphStyleIndex;
    BOOL mDefinedDefaultOutsideLabelParagraphStyleIndex;
    BOOL mDefinedMixedOutsideLabelParagraphStyleIndex;
    BOOL mDefinedPieOutsideLabelParagraphStyleIndex;
    BOOL mDefinedArea3dShadow;
    BOOL mDefinedBar3dShadow;
    BOOL mDefinedColumn3dShadow;
    BOOL mDefinedLine3dShadow;
    BOOL mDefinedPie3dShadow;
    BOOL mDefinedAreaShadow;
    BOOL mDefinedBarShadow;
    BOOL mDefinedBubbleShadow;
    BOOL mDefinedDefaultShadow;
    BOOL mDefinedLineShadow;
    BOOL mDefinedMixedAreaShadow;
    BOOL mDefinedMixedColumnShadow;
    BOOL mDefinedMixedLineShadow;
    BOOL mDefinedPieShadow;
    BOOL mDefinedScatterShadow;
    BOOL mDefinedAreaStroke;
    BOOL mDefinedBarStroke;
    BOOL mDefinedBubbleStroke;
    BOOL mDefinedLineStroke;
    BOOL mDefinedMixedAreaStroke;
    BOOL mDefinedMixedColumnStroke;
    BOOL mDefinedMixedLineStroke;
    BOOL mDefinedPieStroke;
    BOOL mDefinedScatterStroke;
    BOOL mDefinedAreaSymbolFill;
    BOOL mDefinedBubbleSymbolFill;
    BOOL mDefinedLineSymbolFill;
    BOOL mDefinedMixedAreaSymbolFill;
    BOOL mDefinedMixedLineSymbolFill;
    BOOL mDefinedScatterSymbolFill;
    BOOL mDefinedAreaSymbolFillUseSeriesFill;
    BOOL mDefinedLineSymbolFillUseSeriesFill;
    BOOL mDefinedMixedAreaSymbolFillUseSeriesFill;
    BOOL mDefinedMixedLineSymbolFillUseSeriesFill;
    BOOL mDefinedAreaSymbolFillUseSeriesStroke;
    BOOL mDefinedBubbleSymbolFillUseSeriesStroke;
    BOOL mDefinedLineSymbolFillUseSeriesStroke;
    BOOL mDefinedMixedAreaSymbolFillUseSeriesStroke;
    BOOL mDefinedMixedLineSymbolFillUseSeriesStroke;
    BOOL mDefinedScatterSymbolFillUseSeriesStroke;
    BOOL mDefinedAreaSymbolSize;
    BOOL mDefinedLineSymbolSize;
    BOOL mDefinedMixedAreaSymbolSize;
    BOOL mDefinedMixedLineSymbolSize;
    BOOL mDefinedScatterSymbolSize;
    BOOL mDefinedAreaSymbolStroke;
    BOOL mDefinedBubbleSymbolStroke;
    BOOL mDefinedLineSymbolStroke;
    BOOL mDefinedMixedAreaSymbolStroke;
    BOOL mDefinedMixedLineSymbolStroke;
    BOOL mDefinedScatterSymbolStroke;
    BOOL mDefinedDefaultTrendLineShadow;
    BOOL mDefinedDefaultTrendLineStroke;
    BOOL mDefinedDefaultTrendlineEquationOpacity;
    BOOL mDefinedDefaultTrendlineEquationParagraphStyleIndex;
    BOOL mDefinedDefaultTrendlineRSquaredOpacity;
    BOOL mDefinedDefaultTrendlineRSquaredParagraphStyleIndex;
    BOOL mDefinedAreaValueLabelPosition;
    BOOL mDefinedBarValueLabelPosition;
    BOOL mDefinedBubbleValueLabelPosition;
    BOOL mDefinedDefaultValueLabelPosition;
    BOOL mDefinedLineValueLabelPosition;
    BOOL mDefinedMixedAreaValueLabelPosition;
    BOOL mDefinedMixedColumnValueLabelPosition;
    BOOL mDefinedMixedLineValueLabelPosition;
    BOOL mDefinedScatterValueLabelPosition;
    BOOL mDefinedStackedAreaValueLabelPosition;
    BOOL mDefinedStackedBarValueLabelPosition;
}

+ (Class)realClass;
+ (void)registerRealGsspClass:(Class)arg1;
+ (CDUnknownFunctionPointerType)defaultDecodeConversionFunc;
+ (CDUnknownFunctionPointerType)autoDecodeConversionFunc;
+ (void)setAutoDecodeConversionFuncForDocServer:(CDUnknownFunctionPointerType)arg1;
+ (Class)autoDecodedClass;
@property(readonly, nonatomic) BOOL definedStackedBarValueLabelPosition; // @synthesize definedStackedBarValueLabelPosition=mDefinedStackedBarValueLabelPosition;
@property(readonly, nonatomic) BOOL definedStackedAreaValueLabelPosition; // @synthesize definedStackedAreaValueLabelPosition=mDefinedStackedAreaValueLabelPosition;
@property(readonly, nonatomic) BOOL definedScatterValueLabelPosition; // @synthesize definedScatterValueLabelPosition=mDefinedScatterValueLabelPosition;
@property(readonly, nonatomic) BOOL definedMixedLineValueLabelPosition; // @synthesize definedMixedLineValueLabelPosition=mDefinedMixedLineValueLabelPosition;
@property(readonly, nonatomic) BOOL definedMixedColumnValueLabelPosition; // @synthesize definedMixedColumnValueLabelPosition=mDefinedMixedColumnValueLabelPosition;
@property(readonly, nonatomic) BOOL definedMixedAreaValueLabelPosition; // @synthesize definedMixedAreaValueLabelPosition=mDefinedMixedAreaValueLabelPosition;
@property(readonly, nonatomic) BOOL definedLineValueLabelPosition; // @synthesize definedLineValueLabelPosition=mDefinedLineValueLabelPosition;
@property(readonly, nonatomic) BOOL definedDefaultValueLabelPosition; // @synthesize definedDefaultValueLabelPosition=mDefinedDefaultValueLabelPosition;
@property(readonly, nonatomic) BOOL definedBubbleValueLabelPosition; // @synthesize definedBubbleValueLabelPosition=mDefinedBubbleValueLabelPosition;
@property(readonly, nonatomic) BOOL definedBarValueLabelPosition; // @synthesize definedBarValueLabelPosition=mDefinedBarValueLabelPosition;
@property(readonly, nonatomic) BOOL definedAreaValueLabelPosition; // @synthesize definedAreaValueLabelPosition=mDefinedAreaValueLabelPosition;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineRSquaredParagraphStyleIndex; // @synthesize definedDefaultTrendlineRSquaredParagraphStyleIndex=mDefinedDefaultTrendlineRSquaredParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineRSquaredOpacity; // @synthesize definedDefaultTrendlineRSquaredOpacity=mDefinedDefaultTrendlineRSquaredOpacity;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineEquationParagraphStyleIndex; // @synthesize definedDefaultTrendlineEquationParagraphStyleIndex=mDefinedDefaultTrendlineEquationParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultTrendlineEquationOpacity; // @synthesize definedDefaultTrendlineEquationOpacity=mDefinedDefaultTrendlineEquationOpacity;
@property(readonly, nonatomic) BOOL definedDefaultTrendLineStroke; // @synthesize definedDefaultTrendLineStroke=mDefinedDefaultTrendLineStroke;
@property(readonly, nonatomic) BOOL definedDefaultTrendLineShadow; // @synthesize definedDefaultTrendLineShadow=mDefinedDefaultTrendLineShadow;
@property(readonly, nonatomic) BOOL definedScatterSymbolStroke; // @synthesize definedScatterSymbolStroke=mDefinedScatterSymbolStroke;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolStroke; // @synthesize definedMixedLineSymbolStroke=mDefinedMixedLineSymbolStroke;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolStroke; // @synthesize definedMixedAreaSymbolStroke=mDefinedMixedAreaSymbolStroke;
@property(readonly, nonatomic) BOOL definedLineSymbolStroke; // @synthesize definedLineSymbolStroke=mDefinedLineSymbolStroke;
@property(readonly, nonatomic) BOOL definedBubbleSymbolStroke; // @synthesize definedBubbleSymbolStroke=mDefinedBubbleSymbolStroke;
@property(readonly, nonatomic) BOOL definedAreaSymbolStroke; // @synthesize definedAreaSymbolStroke=mDefinedAreaSymbolStroke;
@property(readonly, nonatomic) BOOL definedScatterSymbolSize; // @synthesize definedScatterSymbolSize=mDefinedScatterSymbolSize;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolSize; // @synthesize definedMixedLineSymbolSize=mDefinedMixedLineSymbolSize;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolSize; // @synthesize definedMixedAreaSymbolSize=mDefinedMixedAreaSymbolSize;
@property(readonly, nonatomic) BOOL definedLineSymbolSize; // @synthesize definedLineSymbolSize=mDefinedLineSymbolSize;
@property(readonly, nonatomic) BOOL definedAreaSymbolSize; // @synthesize definedAreaSymbolSize=mDefinedAreaSymbolSize;
@property(readonly, nonatomic) BOOL definedScatterSymbolFillUseSeriesStroke; // @synthesize definedScatterSymbolFillUseSeriesStroke=mDefinedScatterSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolFillUseSeriesStroke; // @synthesize definedMixedLineSymbolFillUseSeriesStroke=mDefinedMixedLineSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolFillUseSeriesStroke; // @synthesize definedMixedAreaSymbolFillUseSeriesStroke=mDefinedMixedAreaSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedLineSymbolFillUseSeriesStroke; // @synthesize definedLineSymbolFillUseSeriesStroke=mDefinedLineSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedBubbleSymbolFillUseSeriesStroke; // @synthesize definedBubbleSymbolFillUseSeriesStroke=mDefinedBubbleSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedAreaSymbolFillUseSeriesStroke; // @synthesize definedAreaSymbolFillUseSeriesStroke=mDefinedAreaSymbolFillUseSeriesStroke;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolFillUseSeriesFill; // @synthesize definedMixedLineSymbolFillUseSeriesFill=mDefinedMixedLineSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolFillUseSeriesFill; // @synthesize definedMixedAreaSymbolFillUseSeriesFill=mDefinedMixedAreaSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedLineSymbolFillUseSeriesFill; // @synthesize definedLineSymbolFillUseSeriesFill=mDefinedLineSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedAreaSymbolFillUseSeriesFill; // @synthesize definedAreaSymbolFillUseSeriesFill=mDefinedAreaSymbolFillUseSeriesFill;
@property(readonly, nonatomic) BOOL definedScatterSymbolFill; // @synthesize definedScatterSymbolFill=mDefinedScatterSymbolFill;
@property(readonly, nonatomic) BOOL definedMixedLineSymbolFill; // @synthesize definedMixedLineSymbolFill=mDefinedMixedLineSymbolFill;
@property(readonly, nonatomic) BOOL definedMixedAreaSymbolFill; // @synthesize definedMixedAreaSymbolFill=mDefinedMixedAreaSymbolFill;
@property(readonly, nonatomic) BOOL definedLineSymbolFill; // @synthesize definedLineSymbolFill=mDefinedLineSymbolFill;
@property(readonly, nonatomic) BOOL definedBubbleSymbolFill; // @synthesize definedBubbleSymbolFill=mDefinedBubbleSymbolFill;
@property(readonly, nonatomic) BOOL definedAreaSymbolFill; // @synthesize definedAreaSymbolFill=mDefinedAreaSymbolFill;
@property(readonly, nonatomic) BOOL definedScatterStroke; // @synthesize definedScatterStroke=mDefinedScatterStroke;
@property(readonly, nonatomic) BOOL definedPieStroke; // @synthesize definedPieStroke=mDefinedPieStroke;
@property(readonly, nonatomic) BOOL definedMixedLineStroke; // @synthesize definedMixedLineStroke=mDefinedMixedLineStroke;
@property(readonly, nonatomic) BOOL definedMixedColumnStroke; // @synthesize definedMixedColumnStroke=mDefinedMixedColumnStroke;
@property(readonly, nonatomic) BOOL definedMixedAreaStroke; // @synthesize definedMixedAreaStroke=mDefinedMixedAreaStroke;
@property(readonly, nonatomic) BOOL definedLineStroke; // @synthesize definedLineStroke=mDefinedLineStroke;
@property(readonly, nonatomic) BOOL definedBubbleStroke; // @synthesize definedBubbleStroke=mDefinedBubbleStroke;
@property(readonly, nonatomic) BOOL definedBarStroke; // @synthesize definedBarStroke=mDefinedBarStroke;
@property(readonly, nonatomic) BOOL definedAreaStroke; // @synthesize definedAreaStroke=mDefinedAreaStroke;
@property(readonly, nonatomic) BOOL definedScatterShadow; // @synthesize definedScatterShadow=mDefinedScatterShadow;
@property(readonly, nonatomic) BOOL definedPieShadow; // @synthesize definedPieShadow=mDefinedPieShadow;
@property(readonly, nonatomic) BOOL definedMixedLineShadow; // @synthesize definedMixedLineShadow=mDefinedMixedLineShadow;
@property(readonly, nonatomic) BOOL definedMixedColumnShadow; // @synthesize definedMixedColumnShadow=mDefinedMixedColumnShadow;
@property(readonly, nonatomic) BOOL definedMixedAreaShadow; // @synthesize definedMixedAreaShadow=mDefinedMixedAreaShadow;
@property(readonly, nonatomic) BOOL definedLineShadow; // @synthesize definedLineShadow=mDefinedLineShadow;
@property(readonly, nonatomic) BOOL definedDefaultShadow; // @synthesize definedDefaultShadow=mDefinedDefaultShadow;
@property(readonly, nonatomic) BOOL definedBubbleShadow; // @synthesize definedBubbleShadow=mDefinedBubbleShadow;
@property(readonly, nonatomic) BOOL definedBarShadow; // @synthesize definedBarShadow=mDefinedBarShadow;
@property(readonly, nonatomic) BOOL definedAreaShadow; // @synthesize definedAreaShadow=mDefinedAreaShadow;
@property(readonly, nonatomic) BOOL definedPie3dShadow; // @synthesize definedPie3dShadow=mDefinedPie3dShadow;
@property(readonly, nonatomic) BOOL definedLine3dShadow; // @synthesize definedLine3dShadow=mDefinedLine3dShadow;
@property(readonly, nonatomic) BOOL definedColumn3dShadow; // @synthesize definedColumn3dShadow=mDefinedColumn3dShadow;
@property(readonly, nonatomic) BOOL definedBar3dShadow; // @synthesize definedBar3dShadow=mDefinedBar3dShadow;
@property(readonly, nonatomic) BOOL definedArea3dShadow; // @synthesize definedArea3dShadow=mDefinedArea3dShadow;
@property(readonly, nonatomic) BOOL definedPieOutsideLabelParagraphStyleIndex; // @synthesize definedPieOutsideLabelParagraphStyleIndex=mDefinedPieOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedMixedOutsideLabelParagraphStyleIndex; // @synthesize definedMixedOutsideLabelParagraphStyleIndex=mDefinedMixedOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultOutsideLabelParagraphStyleIndex; // @synthesize definedDefaultOutsideLabelParagraphStyleIndex=mDefinedDefaultOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedBarOutsideLabelParagraphStyleIndex; // @synthesize definedBarOutsideLabelParagraphStyleIndex=mDefinedBarOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedAreaOutsideLabelParagraphStyleIndex; // @synthesize definedAreaOutsideLabelParagraphStyleIndex=mDefinedAreaOutsideLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultOpacity; // @synthesize definedDefaultOpacity=mDefinedDefaultOpacity;
@property(readonly, nonatomic) BOOL definedPieLabelParagraphStyleIndex; // @synthesize definedPieLabelParagraphStyleIndex=mDefinedPieLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedMixedLabelParagraphStyleIndex; // @synthesize definedMixedLabelParagraphStyleIndex=mDefinedMixedLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedLineLabelParagraphStyleIndex; // @synthesize definedLineLabelParagraphStyleIndex=mDefinedLineLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedDefaultLabelParagraphStyleIndex; // @synthesize definedDefaultLabelParagraphStyleIndex=mDefinedDefaultLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedBarLabelParagraphStyleIndex; // @synthesize definedBarLabelParagraphStyleIndex=mDefinedBarLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedAreaLabelParagraphStyleIndex; // @synthesize definedAreaLabelParagraphStyleIndex=mDefinedAreaLabelParagraphStyleIndex;
@property(readonly, nonatomic) BOOL definedPieFill; // @synthesize definedPieFill=mDefinedPieFill;
@property(readonly, nonatomic) BOOL definedMixedColumnFill; // @synthesize definedMixedColumnFill=mDefinedMixedColumnFill;
@property(readonly, nonatomic) BOOL definedMixedAreaFill; // @synthesize definedMixedAreaFill=mDefinedMixedAreaFill;
@property(readonly, nonatomic) BOOL definedDefaultFill; // @synthesize definedDefaultFill=mDefinedDefaultFill;
@property(readonly, nonatomic) BOOL definedColumnFill; // @synthesize definedColumnFill=mDefinedColumnFill;
@property(readonly, nonatomic) BOOL definedBarFill; // @synthesize definedBarFill=mDefinedBarFill;
@property(readonly, nonatomic) BOOL definedAreaFill; // @synthesize definedAreaFill=mDefinedAreaFill;
@property(readonly, nonatomic) BOOL definedPie3dFill; // @synthesize definedPie3dFill=mDefinedPie3dFill;
@property(readonly, nonatomic) BOOL definedLine3dFill; // @synthesize definedLine3dFill=mDefinedLine3dFill;
@property(readonly, nonatomic) BOOL definedColumn3dFill; // @synthesize definedColumn3dFill=mDefinedColumn3dFill;
@property(readonly, nonatomic) BOOL definedBar3dFill; // @synthesize definedBar3dFill=mDefinedBar3dFill;
@property(readonly, nonatomic) BOOL definedArea3dFill; // @synthesize definedArea3dFill=mDefinedArea3dFill;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarStrokeScatterX; // @synthesize definedDefaultErrorBarStrokeScatterX=mDefinedDefaultErrorBarStrokeScatterX;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarStroke; // @synthesize definedDefaultErrorBarStroke=mDefinedDefaultErrorBarStroke;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarShadow; // @synthesize definedDefaultErrorBarShadow=mDefinedDefaultErrorBarShadow;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarLineEndScatterX; // @synthesize definedDefaultErrorBarLineEndScatterX=mDefinedDefaultErrorBarLineEndScatterX;
@property(readonly, nonatomic) BOOL definedDefaultErrorBarLineEnd; // @synthesize definedDefaultErrorBarLineEnd=mDefinedDefaultErrorBarLineEnd;
- (id)description;
- (id)dspClassName;
- (id)jsonNSDictionaryValue;
- (void)populateJsonNSDictionaryValueToDictionary:(id)arg1;
- (int)p_getDiffEncodingScoreWith:(id)arg1;
- (void)p_populateStructHashKey:(struct GSSPHashKeyBuilder *)arg1;
- (unsigned long long)p_getStructHashKeyLength;
- (int)getStructHashId;
- (void)serializeRequiredFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (void)serializeOptionalFieldsWithSerializationContext:(struct GSSPSerializationContext *)arg1 withNextFieldNeedSerialize:(BOOL)arg2 diffBy:(id)arg3;
- (id)dspTypeIdString;
- (void)populateRequiredField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)populateOptionalField:(int)arg1 fromContext:(struct GSSPDeserializationContext *)arg2;
- (void)shallowCopyAllFieldsFrom:(id)arg1;
- (void)dealloc;
- (BOOL)clearStackedBarValueLabelPosition;
- (BOOL)clearStackedAreaValueLabelPosition;
- (BOOL)clearScatterValueLabelPosition;
- (BOOL)clearMixedLineValueLabelPosition;
- (BOOL)clearMixedColumnValueLabelPosition;
- (BOOL)clearMixedAreaValueLabelPosition;
- (BOOL)clearLineValueLabelPosition;
- (BOOL)clearDefaultValueLabelPosition;
- (BOOL)clearBubbleValueLabelPosition;
- (BOOL)clearBarValueLabelPosition;
- (BOOL)clearAreaValueLabelPosition;
- (BOOL)clearDefaultTrendlineRSquaredParagraphStyleIndex;
- (BOOL)clearDefaultTrendlineRSquaredOpacity;
- (BOOL)clearDefaultTrendlineEquationParagraphStyleIndex;
- (BOOL)clearDefaultTrendlineEquationOpacity;
- (BOOL)clearDefaultTrendLineStroke;
- (BOOL)clearDefaultTrendLineShadow;
- (BOOL)clearScatterSymbolStroke;
- (BOOL)clearMixedLineSymbolStroke;
- (BOOL)clearMixedAreaSymbolStroke;
- (BOOL)clearLineSymbolStroke;
- (BOOL)clearBubbleSymbolStroke;
- (BOOL)clearAreaSymbolStroke;
- (BOOL)clearScatterSymbolSize;
- (BOOL)clearMixedLineSymbolSize;
- (BOOL)clearMixedAreaSymbolSize;
- (BOOL)clearLineSymbolSize;
- (BOOL)clearAreaSymbolSize;
- (BOOL)clearScatterSymbolFillUseSeriesStroke;
- (BOOL)clearMixedLineSymbolFillUseSeriesStroke;
- (BOOL)clearMixedAreaSymbolFillUseSeriesStroke;
- (BOOL)clearLineSymbolFillUseSeriesStroke;
- (BOOL)clearBubbleSymbolFillUseSeriesStroke;
- (BOOL)clearAreaSymbolFillUseSeriesStroke;
- (BOOL)clearMixedLineSymbolFillUseSeriesFill;
- (BOOL)clearMixedAreaSymbolFillUseSeriesFill;
- (BOOL)clearLineSymbolFillUseSeriesFill;
- (BOOL)clearAreaSymbolFillUseSeriesFill;
- (BOOL)clearScatterSymbolFill;
- (BOOL)clearMixedLineSymbolFill;
- (BOOL)clearMixedAreaSymbolFill;
- (BOOL)clearLineSymbolFill;
- (BOOL)clearBubbleSymbolFill;
- (BOOL)clearAreaSymbolFill;
- (BOOL)clearScatterStroke;
- (BOOL)clearPieStroke;
- (BOOL)clearMixedLineStroke;
- (BOOL)clearMixedColumnStroke;
- (BOOL)clearMixedAreaStroke;
- (BOOL)clearLineStroke;
- (BOOL)clearBubbleStroke;
- (BOOL)clearBarStroke;
- (BOOL)clearAreaStroke;
- (BOOL)clearScatterShadow;
- (BOOL)clearPieShadow;
- (BOOL)clearMixedLineShadow;
- (BOOL)clearMixedColumnShadow;
- (BOOL)clearMixedAreaShadow;
- (BOOL)clearLineShadow;
- (BOOL)clearDefaultShadow;
- (BOOL)clearBubbleShadow;
- (BOOL)clearBarShadow;
- (BOOL)clearAreaShadow;
- (BOOL)clearPie3dShadow;
- (BOOL)clearLine3dShadow;
- (BOOL)clearColumn3dShadow;
- (BOOL)clearBar3dShadow;
- (BOOL)clearArea3dShadow;
- (BOOL)clearPieOutsideLabelParagraphStyleIndex;
- (BOOL)clearMixedOutsideLabelParagraphStyleIndex;
- (BOOL)clearDefaultOutsideLabelParagraphStyleIndex;
- (BOOL)clearBarOutsideLabelParagraphStyleIndex;
- (BOOL)clearAreaOutsideLabelParagraphStyleIndex;
- (BOOL)clearDefaultOpacity;
- (BOOL)clearPieLabelParagraphStyleIndex;
- (BOOL)clearMixedLabelParagraphStyleIndex;
- (BOOL)clearLineLabelParagraphStyleIndex;
- (BOOL)clearDefaultLabelParagraphStyleIndex;
- (BOOL)clearBarLabelParagraphStyleIndex;
- (BOOL)clearAreaLabelParagraphStyleIndex;
- (BOOL)clearPieFill;
- (BOOL)clearMixedColumnFill;
- (BOOL)clearMixedAreaFill;
- (BOOL)clearDefaultFill;
- (BOOL)clearColumnFill;
- (BOOL)clearBarFill;
- (BOOL)clearAreaFill;
- (BOOL)clearPie3dFill;
- (BOOL)clearLine3dFill;
- (BOOL)clearColumn3dFill;
- (BOOL)clearBar3dFill;
- (BOOL)clearArea3dFill;
- (BOOL)clearDefaultErrorBarStrokeScatterX;
- (BOOL)clearDefaultErrorBarStroke;
- (BOOL)clearDefaultErrorBarShadow;
- (BOOL)clearDefaultErrorBarLineEndScatterX;
- (BOOL)clearDefaultErrorBarLineEnd;
- (void)setStackedBarValueLabelPosition:(id)arg1;
- (id)stackedBarValueLabelPosition;
- (void)setStackedAreaValueLabelPosition:(id)arg1;
- (id)stackedAreaValueLabelPosition;
- (void)setScatterValueLabelPosition:(id)arg1;
- (id)scatterValueLabelPosition;
- (void)setMixedLineValueLabelPosition:(id)arg1;
- (id)mixedLineValueLabelPosition;
- (void)setMixedColumnValueLabelPosition:(id)arg1;
- (id)mixedColumnValueLabelPosition;
- (void)setMixedAreaValueLabelPosition:(id)arg1;
- (id)mixedAreaValueLabelPosition;
- (void)setLineValueLabelPosition:(id)arg1;
- (id)lineValueLabelPosition;
- (void)setDefaultValueLabelPosition:(id)arg1;
- (id)defaultValueLabelPosition;
- (void)setBubbleValueLabelPosition:(id)arg1;
- (id)bubbleValueLabelPosition;
- (void)setBarValueLabelPosition:(id)arg1;
- (id)barValueLabelPosition;
- (void)setAreaValueLabelPosition:(id)arg1;
- (id)areaValueLabelPosition;
- (void)setDefaultTrendlineRSquaredParagraphStyleIndex:(id)arg1;
- (id)defaultTrendlineRSquaredParagraphStyleIndex;
- (void)setDefaultTrendlineRSquaredOpacity:(id)arg1;
- (id)defaultTrendlineRSquaredOpacity;
- (void)setDefaultTrendlineEquationParagraphStyleIndex:(id)arg1;
- (id)defaultTrendlineEquationParagraphStyleIndex;
- (void)setDefaultTrendlineEquationOpacity:(id)arg1;
- (id)defaultTrendlineEquationOpacity;
- (void)setDefaultTrendLineStroke:(id)arg1;
- (id)defaultTrendLineStroke;
- (void)setDefaultTrendLineShadow:(id)arg1;
- (id)defaultTrendLineShadow;
- (void)setScatterSymbolStroke:(id)arg1;
- (id)scatterSymbolStroke;
- (void)setMixedLineSymbolStroke:(id)arg1;
- (id)mixedLineSymbolStroke;
- (void)setMixedAreaSymbolStroke:(id)arg1;
- (id)mixedAreaSymbolStroke;
- (void)setLineSymbolStroke:(id)arg1;
- (id)lineSymbolStroke;
- (void)setBubbleSymbolStroke:(id)arg1;
- (id)bubbleSymbolStroke;
- (void)setAreaSymbolStroke:(id)arg1;
- (id)areaSymbolStroke;
- (void)setScatterSymbolSize:(id)arg1;
- (id)scatterSymbolSize;
- (void)setMixedLineSymbolSize:(id)arg1;
- (id)mixedLineSymbolSize;
- (void)setMixedAreaSymbolSize:(id)arg1;
- (id)mixedAreaSymbolSize;
- (void)setLineSymbolSize:(id)arg1;
- (id)lineSymbolSize;
- (void)setAreaSymbolSize:(id)arg1;
- (id)areaSymbolSize;
- (void)setScatterSymbolFillUseSeriesStroke:(id)arg1;
- (id)scatterSymbolFillUseSeriesStroke;
- (void)setMixedLineSymbolFillUseSeriesStroke:(id)arg1;
- (id)mixedLineSymbolFillUseSeriesStroke;
- (void)setMixedAreaSymbolFillUseSeriesStroke:(id)arg1;
- (id)mixedAreaSymbolFillUseSeriesStroke;
- (void)setLineSymbolFillUseSeriesStroke:(id)arg1;
- (id)lineSymbolFillUseSeriesStroke;
- (void)setBubbleSymbolFillUseSeriesStroke:(id)arg1;
- (id)bubbleSymbolFillUseSeriesStroke;
- (void)setAreaSymbolFillUseSeriesStroke:(id)arg1;
- (id)areaSymbolFillUseSeriesStroke;
- (void)setMixedLineSymbolFillUseSeriesFill:(id)arg1;
- (id)mixedLineSymbolFillUseSeriesFill;
- (void)setMixedAreaSymbolFillUseSeriesFill:(id)arg1;
- (id)mixedAreaSymbolFillUseSeriesFill;
- (void)setLineSymbolFillUseSeriesFill:(id)arg1;
- (id)lineSymbolFillUseSeriesFill;
- (void)setAreaSymbolFillUseSeriesFill:(id)arg1;
- (id)areaSymbolFillUseSeriesFill;
- (void)setScatterSymbolFill:(id)arg1;
- (id)scatterSymbolFill;
- (void)setMixedLineSymbolFill:(id)arg1;
- (id)mixedLineSymbolFill;
- (void)setMixedAreaSymbolFill:(id)arg1;
- (id)mixedAreaSymbolFill;
- (void)setLineSymbolFill:(id)arg1;
- (id)lineSymbolFill;
- (void)setBubbleSymbolFill:(id)arg1;
- (id)bubbleSymbolFill;
- (void)setAreaSymbolFill:(id)arg1;
- (id)areaSymbolFill;
- (void)setScatterStroke:(id)arg1;
- (id)scatterStroke;
- (void)setPieStroke:(id)arg1;
- (id)pieStroke;
- (void)setMixedLineStroke:(id)arg1;
- (id)mixedLineStroke;
- (void)setMixedColumnStroke:(id)arg1;
- (id)mixedColumnStroke;
- (void)setMixedAreaStroke:(id)arg1;
- (id)mixedAreaStroke;
- (void)setLineStroke:(id)arg1;
- (id)lineStroke;
- (void)setBubbleStroke:(id)arg1;
- (id)bubbleStroke;
- (void)setBarStroke:(id)arg1;
- (id)barStroke;
- (void)setAreaStroke:(id)arg1;
- (id)areaStroke;
- (void)setScatterShadow:(id)arg1;
- (id)scatterShadow;
- (void)setPieShadow:(id)arg1;
- (id)pieShadow;
- (void)setMixedLineShadow:(id)arg1;
- (id)mixedLineShadow;
- (void)setMixedColumnShadow:(id)arg1;
- (id)mixedColumnShadow;
- (void)setMixedAreaShadow:(id)arg1;
- (id)mixedAreaShadow;
- (void)setLineShadow:(id)arg1;
- (id)lineShadow;
- (void)setDefaultShadow:(id)arg1;
- (id)defaultShadow;
- (void)setBubbleShadow:(id)arg1;
- (id)bubbleShadow;
- (void)setBarShadow:(id)arg1;
- (id)barShadow;
- (void)setAreaShadow:(id)arg1;
- (id)areaShadow;
- (void)setPie3dShadow:(id)arg1;
- (id)pie3dShadow;
- (void)setLine3dShadow:(id)arg1;
- (id)line3dShadow;
- (void)setColumn3dShadow:(id)arg1;
- (id)column3dShadow;
- (void)setBar3dShadow:(id)arg1;
- (id)bar3dShadow;
- (void)setArea3dShadow:(id)arg1;
- (id)area3dShadow;
- (void)setPieOutsideLabelParagraphStyleIndex:(id)arg1;
- (id)pieOutsideLabelParagraphStyleIndex;
- (void)setMixedOutsideLabelParagraphStyleIndex:(id)arg1;
- (id)mixedOutsideLabelParagraphStyleIndex;
- (void)setDefaultOutsideLabelParagraphStyleIndex:(id)arg1;
- (id)defaultOutsideLabelParagraphStyleIndex;
- (void)setBarOutsideLabelParagraphStyleIndex:(id)arg1;
- (id)barOutsideLabelParagraphStyleIndex;
- (void)setAreaOutsideLabelParagraphStyleIndex:(id)arg1;
- (id)areaOutsideLabelParagraphStyleIndex;
- (void)setDefaultOpacity:(id)arg1;
- (id)defaultOpacity;
- (void)setPieLabelParagraphStyleIndex:(id)arg1;
- (id)pieLabelParagraphStyleIndex;
- (void)setMixedLabelParagraphStyleIndex:(id)arg1;
- (id)mixedLabelParagraphStyleIndex;
- (void)setLineLabelParagraphStyleIndex:(id)arg1;
- (id)lineLabelParagraphStyleIndex;
- (void)setDefaultLabelParagraphStyleIndex:(id)arg1;
- (id)defaultLabelParagraphStyleIndex;
- (void)setBarLabelParagraphStyleIndex:(id)arg1;
- (id)barLabelParagraphStyleIndex;
- (void)setAreaLabelParagraphStyleIndex:(id)arg1;
- (id)areaLabelParagraphStyleIndex;
- (void)setPieFill:(id)arg1;
- (id)pieFill;
- (void)setMixedColumnFill:(id)arg1;
- (id)mixedColumnFill;
- (void)setMixedAreaFill:(id)arg1;
- (id)mixedAreaFill;
- (void)setDefaultFill:(id)arg1;
- (id)defaultFill;
- (void)setColumnFill:(id)arg1;
- (id)columnFill;
- (void)setBarFill:(id)arg1;
- (id)barFill;
- (void)setAreaFill:(id)arg1;
- (id)areaFill;
- (void)setPie3dFill:(id)arg1;
- (id)pie3dFill;
- (void)setLine3dFill:(id)arg1;
- (id)line3dFill;
- (void)setColumn3dFill:(id)arg1;
- (id)column3dFill;
- (void)setBar3dFill:(id)arg1;
- (id)bar3dFill;
- (void)setArea3dFill:(id)arg1;
- (id)area3dFill;
- (void)setDefaultErrorBarStrokeScatterX:(id)arg1;
- (id)defaultErrorBarStrokeScatterX;
- (void)setDefaultErrorBarStroke:(id)arg1;
- (id)defaultErrorBarStroke;
- (void)setDefaultErrorBarShadow:(id)arg1;
- (id)defaultErrorBarShadow;
- (void)setDefaultErrorBarLineEndScatterX:(id)arg1;
- (id)defaultErrorBarLineEndScatterX;
- (void)setDefaultErrorBarLineEnd:(id)arg1;
- (id)defaultErrorBarLineEnd;

@end

