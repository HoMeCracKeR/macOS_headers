//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FRFeedCollectionViewLayoutBlueprint, FRFeedCollectionViewLayoutBlueprintDiff, FRFontManager, NFLGapTileInfo, NFMutexLock, NSObject;
@protocol FCNewsAppConfiguration, FRFeedLayoutStorage, OS_dispatch_source;

@interface FRFeedCollectionViewLayoutIntegratorAutoexpansionOperation : FCOperation
{
    BOOL _gapOnscreen;
    BOOL _gapOnscreenTooLong;
    BOOL _resumeTimer;
    BOOL _committedBlueprintOrError;
    FRFeedCollectionViewLayoutBlueprint *_layoutBlueprint;
    NFLGapTileInfo *_gapTileInfo;
    id <FRFeedLayoutStorage> _feedLayoutStorage;
    id <FCNewsAppConfiguration> _appConfiguration;
    FCCloudContext *_cloudContext;
    FRFontManager *_fontManager;
    double _desiredLength;
    CDUnknownBlockType _gapExpansionCompletionHandler;
    FRFeedCollectionViewLayoutBlueprint *_fastBlueprint;
    FRFeedCollectionViewLayoutBlueprintDiff *_fastBlueprintDiff;
    CDUnknownBlockType _fastCommitLayoutsHandler;
    FRFeedCollectionViewLayoutBlueprint *_goodBlueprint;
    FRFeedCollectionViewLayoutBlueprintDiff *_goodBlueprintDiff;
    CDUnknownBlockType _goodCommitLayoutsHandler;
    NSObject<OS_dispatch_source> *_gapOnscreenTimer;
    FRFeedCollectionViewLayoutBlueprint *_resultBlueprint;
    FRFeedCollectionViewLayoutBlueprintDiff *_resultBlueprintDiff;
    NFMutexLock *_mutexLock;
    struct CGRect _gapTileInfoFrame;
    struct CGRect _visibleBounds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NFMutexLock *mutexLock; // @synthesize mutexLock=_mutexLock;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintDiff *resultBlueprintDiff; // @synthesize resultBlueprintDiff=_resultBlueprintDiff;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *resultBlueprint; // @synthesize resultBlueprint=_resultBlueprint;
@property(nonatomic) BOOL committedBlueprintOrError; // @synthesize committedBlueprintOrError=_committedBlueprintOrError;
@property(nonatomic) BOOL resumeTimer; // @synthesize resumeTimer=_resumeTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gapOnscreenTimer; // @synthesize gapOnscreenTimer=_gapOnscreenTimer;
@property(nonatomic) BOOL gapOnscreenTooLong; // @synthesize gapOnscreenTooLong=_gapOnscreenTooLong;
@property(nonatomic) BOOL gapOnscreen; // @synthesize gapOnscreen=_gapOnscreen;
@property(copy, nonatomic) CDUnknownBlockType goodCommitLayoutsHandler; // @synthesize goodCommitLayoutsHandler=_goodCommitLayoutsHandler;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintDiff *goodBlueprintDiff; // @synthesize goodBlueprintDiff=_goodBlueprintDiff;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *goodBlueprint; // @synthesize goodBlueprint=_goodBlueprint;
@property(copy, nonatomic) CDUnknownBlockType fastCommitLayoutsHandler; // @synthesize fastCommitLayoutsHandler=_fastCommitLayoutsHandler;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprintDiff *fastBlueprintDiff; // @synthesize fastBlueprintDiff=_fastBlueprintDiff;
@property(retain, nonatomic) FRFeedCollectionViewLayoutBlueprint *fastBlueprint; // @synthesize fastBlueprint=_fastBlueprint;
@property(copy, nonatomic) CDUnknownBlockType gapExpansionCompletionHandler; // @synthesize gapExpansionCompletionHandler=_gapExpansionCompletionHandler;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property double desiredLength; // @synthesize desiredLength=_desiredLength;
@property(retain) FRFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(retain) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(copy) id <FCNewsAppConfiguration> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain) id <FRFeedLayoutStorage> feedLayoutStorage; // @synthesize feedLayoutStorage=_feedLayoutStorage;
@property(nonatomic) struct CGRect gapTileInfoFrame; // @synthesize gapTileInfoFrame=_gapTileInfoFrame;
@property(copy) NFLGapTileInfo *gapTileInfo; // @synthesize gapTileInfo=_gapTileInfo;
@property(copy) FRFeedCollectionViewLayoutBlueprint *layoutBlueprint; // @synthesize layoutBlueprint=_layoutBlueprint;
- (BOOL)_shouldCommitFastBlueprint;
- (BOOL)_tryToFinishWithError:(id)arg1;
- (void)_gapHasBeenOnscreenTooLong;
- (void)_recalculateDistanceFromGap;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)dealloc;
- (BOOL)validateOperation;
- (id)init;

@end

