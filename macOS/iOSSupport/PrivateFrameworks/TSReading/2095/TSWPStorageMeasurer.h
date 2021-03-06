//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSWPColumnMetrics-Protocol.h>
#import <TSReading/TSWPLayoutOwner-Protocol.h>
#import <TSReading/TSWPLayoutTarget-Protocol.h>

@class NSMutableArray, NSString, TSDCanvas, TSDLayout, TSPObject, TSWPPadding, TSWPStorage;
@protocol TSDHint, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPLayoutParent, TSWPOffscreenColumn, TSWPStyleProvider;

@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>
{
    TSWPStorage *_storage;
    NSObject<TSWPLayoutParent> *_layoutParent;
    id <TSWPStyleProvider> _styleProvider;
    NSMutableArray *_columns;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    unsigned int _flags;
    struct CGPoint _anchor;
}

@property(readonly, retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) BOOL columnsAreLeftToRight;
@property(readonly, nonatomic) BOOL shrinkTextToFit;
@property(readonly, nonatomic) BOOL alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) struct CGSize adjustedInsets;
@property(readonly, nonatomic) unsigned int maxLineCount;
- (id)lineHintsForTarget:(id)arg1;
- (id)textWrapper;
- (void)layoutManager:(id)arg1 didClearDirtyRangeWithDelta:(long long)arg2 afterCharIndex:(unsigned long long)arg3;
- (void)layoutManagerNeedsLayout:(id)arg1;
- (BOOL)caresAboutStorageChanges;
- (id)styleProvider;
@property(readonly, nonatomic) BOOL layoutIsValid;
- (BOOL)isLayoutOffscreen;
@property(readonly, nonatomic) BOOL textIsVertical;
@property(readonly, nonatomic) unsigned long long pageCount;
@property(readonly, nonatomic) unsigned long long pageNumber;
@property(readonly, nonatomic) double maxAnchorY;
- (id)currentAnchoredDrawableLayouts;
- (void)addAttachmentLayout:(id)arg1;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (BOOL)shouldPositionAttachmentsIteratively;
- (id)currentInlineDrawableLayouts;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
- (struct CGRect)targetRectForCanvasRect:(struct CGRect)arg1;
- (void)setNeedsDisplayInTargetRect:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL wantsLineFragments;
@property(readonly, nonatomic) int naturalDirection;
@property(readonly, nonatomic) unsigned int naturalAlignment;
@property(readonly, nonatomic) unsigned int verticalAlignment;
@property(readonly, nonatomic) unsigned int autosizeFlags;
@property(readonly, nonatomic) struct CGPoint anchorPoint;
@property(readonly, nonatomic) struct CGPoint position;
@property(readonly, nonatomic) struct CGSize currentSize;
@property(readonly, nonatomic) struct CGSize maxSize;
@property(readonly, nonatomic) struct CGSize minSize;
- (BOOL)isLastTarget;
@property(readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider;
@property(readonly, nonatomic) id <TSWPFootnoteHeightMeasurer> footnoteHeightMeasurer;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> nextTargetFirstColumn;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *nextTargetTopicNumbers;
@property(readonly, nonatomic) const struct TSWPTopicNumberHints *previousTargetTopicNumbers;
@property(readonly, retain, nonatomic) id <TSWPOffscreenColumn> previousTargetLastColumn;
- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1 maxSize:(struct CGSize)arg2 layoutParent:(id)arg3 styleProvider:(id)arg4;
- (struct CGSize)measuredSizeWithFlags:(unsigned int)arg1;
- (id)pLayoutWithMinSize:(struct CGSize)arg1 maxSize:(struct CGSize)arg2 anchor:(struct CGPoint)arg3 flags:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL allowsDescendersToClip;
@property(readonly, nonatomic) BOOL allowsLastLineTruncation;
@property(readonly, nonatomic) BOOL alwaysAllowWordSplit;
@property(retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property(readonly, nonatomic) TSDCanvas *canvas;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct __CFLocale *hyphenationLocale;
@property(readonly, nonatomic) BOOL ignoresEquationAlignment;
@property(readonly, nonatomic) struct CGRect maskRect;
@property(readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property(readonly, nonatomic) BOOL pushAscendersIntoColumn;
@property(readonly, nonatomic) double reservedWidthWhenTruncating;
@property(readonly, nonatomic) BOOL shouldHyphenate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double textScaleFactor;

@end

