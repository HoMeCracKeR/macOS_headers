//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/KHFrame.h>

@class NSString;

@interface KHProjectFrame : KHFrame
{
    long long _masterId;
    NSString *_treatmentIdentifier;
    int _atomicAccess;
    BOOL _cacheRectForScaleValid;
    struct CGRect _cacheRectForScale;
    double _cacheRectForScaleScale;
    CDStruct_e9d111b7 _cacheRectForScaleInset;
}

+ (id)frameForKey:(long long)arg1 inDatabase:(id)arg2;
+ (void)addMissingThemeFramesToLayout:(id)arg1 forProject:(id)arg2 withPhotoUIDs:(id)arg3;
+ (void)addFrameToLayout:(id)arg1 usingInfoDict:(id)arg2;
- (long long)locked;
- (id)treatmentOrConfigurationDatabase;
- (Class)behaviorClass;
- (Class)appliedBehaviorClass;
- (Class)treatmentClass;
- (Class)configurationTextStyleClass;
- (Class)configurationAttributeClass;
- (Class)configurationTreatmentClass;
- (Class)configurationClass;
- (id)projectTextStyleFromTextStyle:(id)arg1;
- (void)_cloneBehaviorsFromTreatment:(id)arg1 toTreatment:(id)arg2 inDatabase:(id)arg3;
- (void)cloneProjectBehaviorsFromFrame:(id)arg1 inDatabase:(id)arg2;
- (void)clearAppliedBehaviors;
- (id)cloneProjectConfigFromConfig:(id)arg1 inDatabase:(id)arg2;
- (void)remapLayerFrameKeysFromTreatment:(id)arg1 toTreatment:(id)arg2;
- (id)projectTreatmentFromTreatment:(id)arg1 inDatabase:(id)arg2;
- (void)cacheHeight:(double)arg1;
- (void)cacheWidth:(double)arg1;
- (void)cacheY:(double)arg1;
- (void)cacheX:(double)arg1;
- (id)photoContentErrors;
- (BOOL)hasPhotoContentIssues;
- (BOOL)hasLowResolutionPhoto;
- (BOOL)wantsTransparencyLayer;
- (BOOL)allowsDynamicShadows;
- (BOOL)enableDefaultLeading;
- (BOOL)isBackground;
- (id)prototypeAttributeForKey:(id)arg1;
- (void)setPrototypeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (id)behaviors;
- (id)childFrames;
- (id)childLayout;
- (id)parentLayout;
- (void)setParentLayout:(id)arg1 momentary:(BOOL)arg2;
- (id)addAttributeValue:(id)arg1 forKey:(id)arg2 type:(id)arg3 momentary:(BOOL)arg4;
- (void)loadBehaviorBindings;
- (void)loadAttributes;
- (void)remove;
- (void)setPhotoAlpha:(double)arg1 momentary:(BOOL)arg2;
- (void)setPhotoAlpha:(double)arg1;
- (double)photoAlpha;
- (void)setIsPhotoBackground:(BOOL)arg1;
- (BOOL)clipsContext;
- (BOOL)isPhotoBackground;
- (id)cloneInDatabase:(id)arg1 forNewProjectId:(long long)arg2 andNewParentLayoutId:(long long)arg3;
- (id)cloneForNewProjectId:(long long)arg1 andNewParentLayoutId:(long long)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)encodeWithDictionary:(id)arg1;
- (void)applyMaster:(id)arg1;
- (id)parentFrame;
- (id)masterFrame;
- (void)setTreatment:(id)arg1;
- (void)cacheTreatment:(id)arg1;
- (id)treatment;
- (void)setTreatmentIdentifier:(id)arg1;
- (void)cacheTreatmentIdentifier:(id)arg1;
- (id)treatmentIdentifier;
- (void)setMasterId:(long long)arg1;
- (void)cacheMasterId:(long long)arg1;
- (long long)masterId;
- (BOOL)isProjectModel;
- (void)dealloc;
- (id)init;
- (BOOL)setCaption:(id)arg1;
- (void)appendIPMapElementAttributes:(id)arg1;
- (void)appendIPDrawingElementAttributes:(id)arg1;
- (void)appendIPSegmentedArtElementAttributes:(id)arg1;
- (void)appendIPPageAttributes:(id)arg1;
- (void)appendIPPageElementAttributes:(id)arg1;
- (void)appendIPArtElementAttributes:(id)arg1;
- (void)appendIPCompoundElementAttributes:(id)arg1;
- (void)appendIPImageElementAttributes:(id)arg1;
- (void)appendIPTextElementAttributes:(id)arg1;
- (struct CGRect)rectForScale:(double)arg1 inset:(CDStruct_e9d111b7)arg2;
- (id)mapStyleConfigurationForUpgrade;
- (id)mapStyleConfiguration;
- (void)setMapStyleConfiguration:(id)arg1;

@end

