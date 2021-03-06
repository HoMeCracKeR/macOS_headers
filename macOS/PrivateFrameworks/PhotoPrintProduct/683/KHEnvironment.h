//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KHFrame, NSMutableArray, NSMutableDictionary;
@protocol KHPDFGeneratorDelegate;

@interface KHEnvironment : NSObject
{
    NSMutableDictionary *_strings;
    NSMutableArray *_treatmentLayerRendererCacheStack;
    BOOL _renderTreatments;
    BOOL _allowContextTranslation;
    BOOL _renderingToLayers;
    BOOL _isCalendarPreviewEnvironment;
    BOOL _shouldIgnoreDrawingBadges;
    BOOL _shouldIgnoreDrawingTexts;
    int _currentBlendMode;
    double _backingScaleFactor;
    unsigned long long _renderingIntent;
    KHFrame *_currentFrame;
    id <KHPDFGeneratorDelegate> _progressDelegate;
}

@property id <KHPDFGeneratorDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(retain) KHFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property unsigned long long renderingIntent; // @synthesize renderingIntent=_renderingIntent;
@property int currentBlendMode; // @synthesize currentBlendMode=_currentBlendMode;
@property double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property BOOL shouldIgnoreDrawingTexts; // @synthesize shouldIgnoreDrawingTexts=_shouldIgnoreDrawingTexts;
@property BOOL shouldIgnoreDrawingBadges; // @synthesize shouldIgnoreDrawingBadges=_shouldIgnoreDrawingBadges;
@property BOOL isCalendarPreviewEnvironment; // @synthesize isCalendarPreviewEnvironment=_isCalendarPreviewEnvironment;
@property BOOL renderingToLayers; // @synthesize renderingToLayers=_renderingToLayers;
@property BOOL allowContextTranslation; // @synthesize allowContextTranslation=_allowContextTranslation;
@property BOOL renderTreatments; // @synthesize renderTreatments=_renderTreatments;
- (BOOL)canCacheForTreatmentLayers;
- (void)cacheForTreatmentLayer:(id)arg1 object:(id)arg2;
- (id)retrieveCachedForTreatmentLayer:(id)arg1;
- (void)popTreatmentLayerRendererCache;
- (void)pushTreatmentLayerRendererCache:(id)arg1;
- (id)treatmentLayerRendererCache;
- (void)clearStrings;
- (void)removeStringForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)addString:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end

