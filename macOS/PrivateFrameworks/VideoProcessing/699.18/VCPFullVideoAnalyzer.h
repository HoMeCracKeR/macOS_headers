//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoAnalyzer.h>

@class NSMutableDictionary, VCPFrameAnalysisStats;

@interface VCPFullVideoAnalyzer : VCPVideoAnalyzer
{
    struct EncodeAnalysis *_encodeAnalysis;
    struct PreEncodeAnalysis *_preencodeAnalysis;
    struct ObstructionAnalysis *_obstructionAnalysis;
    struct SceneAnalysis *_sceneAnalysis;
    struct MotionFilter *_motionFilter;
    struct MetaDataAnalysis *_metadataAnalysis;
    struct IrisAnalysis *_irisAnalysis;
    struct FrameBuffer _frameBuffer;
    struct Histogram _idealHistogram;
    BOOL _isTimelapse;
    BOOL _isIris;
    BOOL _isSlowMo;
    int _orientation;
    BOOL _finalized;
    BOOL _hasInterestingScene;
    BOOL _isCaptureAnalysis;
    NSMutableDictionary *_privateResults;
    VCPFrameAnalysisStats *_videoFrameAnalysis;
    float _actionScore;
}

@property float actionScore; // @synthesize actionScore=_actionScore;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)computeExposureScoreOfFrame:(struct Frame *)arg1;
- (void)reviseFrameTrackScore:(struct Frame *)arg1 saliencyRegions:(id)arg2;
- (void)setNextCaptureFrame:(struct __CVBuffer *)arg1;
- (float)getSceneSwichFrequency;
- (int)addResult:(struct __CFArray *)arg1 to:(id)arg2 forKey:(id)arg3 optional:(BOOL)arg4;
- (int)addSceneAnalysisResult:(id)arg1 to:(id)arg2 optional:(BOOL)arg3;
- (id)privateResults;
- (id)results;
- (int)process:(int)arg1;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (void)prepareVideoAnalysisByScenes:(id)arg1;
- (int)seedAnalyzersWithPixelBuffer:(struct __CVBuffer *)arg1 startTime:(CDStruct_1b6d18a9)arg2;
- (void)dealloc;
- (id)initWithVideoTrack:(id)arg1 withMetaOrientation:(id)arg2 withPrivateResults:(id)arg3 withFrameStats:(id)arg4 isTimelapse:(BOOL)arg5 isIris:(BOOL)arg6 irisPhotoOffsetSec:(float)arg7 irisPhotoExposureSec:(float)arg8 slowMoRate:(float)arg9;
- (id)initWithTransform:(struct CGAffineTransform)arg1;

@end

