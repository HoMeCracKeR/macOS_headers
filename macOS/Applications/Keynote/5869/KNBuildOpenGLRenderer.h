//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNBuildRenderer.h"

#import "TSDGLLayerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, TSDGLLayer, TSDGLState;

@interface KNBuildOpenGLRenderer : KNBuildRenderer <TSDGLLayerDelegate>
{
    TSDGLLayer *_GLLayer;
    double _startTime;
    BOOL _animationDidStart;
    BOOL _animationRanToCompletion;
    NSArray *_textures;
    NSMutableDictionary *_scaledTextures;
    double _pauseTime;
    double _nonRealtimeLayerTime;
    double _animationAlreadyCompleteTime;
    TSDGLState *_GLState;
    BOOL _wasPluginNotifiedOfAnimationStart;
    BOOL _isRealtime;
    BOOL _shouldFactorInSetupTime;
    BOOL _shouldForceRenderOfFirstFrame;
    BOOL _shouldEnableBlending;
    struct CGPoint _offset;
}

@property(nonatomic) BOOL shouldEnableBlending; // @synthesize shouldEnableBlending=_shouldEnableBlending;
@property(nonatomic) BOOL shouldForceRenderOfFirstFrame; // @synthesize shouldForceRenderOfFirstFrame=_shouldForceRenderOfFirstFrame;
@property(nonatomic) BOOL isRealtime; // @synthesize isRealtime=_isRealtime;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) TSDGLLayer *GLLayer; // @synthesize GLLayer=_GLLayer;
- (void)markAnimationsRanToCompletion:(BOOL)arg1;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)pauseAnimationsAtTime:(double)arg1;
- (void)stopAnimations;
- (void)removeAnimationsAndFinish:(BOOL)arg1;
- (void)p_notifyPluginOfAnimationDidEndIfNeeded;
- (void)replaceGLLayerWithProxy;
- (void)updateAnimationsForLayerTime:(double)arg1;
- (void)drawFrameAtLayerTime:(double)arg1;
- (BOOL)shouldDrawFrameAtLayerTime:(double)arg1;
- (BOOL)addAnimationsAtLayerTime:(double)arg1;
- (id)animationWillBegin;
- (struct CGRect)p_frameForTextures;
- (void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg1;
- (void)renderTextures;
- (void)generateTextures;
- (void)p_generateTextures;
- (BOOL)p_isBulletHighlighted;
- (void)p_notifyPluginOfAnimationWillBeginIfNeeded;
@property(readonly, nonatomic) BOOL supportsGLStateManagement;
- (void)animate;
- (double)animationFPS;
- (void)setupPluginContext;
- (BOOL)setupGLLayerWithFrame:(struct CGRect)arg1;
- (void)forceRenderOfFirstFrame;
- (void)tearDownGLLayer;
- (void)p_releaseTextures;
- (void)teardown;
- (void)dealloc;
- (id)initWithAnimatedBuild:(id)arg1 info:(id)arg2 buildStage:(id)arg3 animatedSlideView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

