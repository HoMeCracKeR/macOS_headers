//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterInputHelper.h>

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputUnknownHelper : AVAssetWriterInputHelper
{
}

+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;
- (BOOL)canStartRespondingToEachPassDescriptionReturningReason:(id *)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (BOOL)_canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2 exceptionReason:(id *)arg3;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (void)setMediaDataLocation:(id)arg1;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (void)setPreferredMediaChunkDuration:(CDStruct_1b6d18a9)arg1;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (BOOL)canPerformMultiplePasses;
- (void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg1;
- (void)setProvisionalAlternateGroupID:(short)arg1;
- (void)setAlternateGroupID:(short)arg1;
- (void)setLayer:(long long)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (BOOL)_validateLanguageCode:(id)arg1;
- (void)setNaturalSize:(struct CGSize)arg1;
- (void)setMaximizePowerEfficiency:(BOOL)arg1;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (long long)status;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription *)arg3;
- (id)initWithConfigurationState:(id)arg1;

@end

