//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AVAsset, AVComposition;

@protocol NUSlowMotionVideoFactory
+ (id <NUSlowMotionTimeRangeMapper>)timeRangeMapperForSourceDuration:(double)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(BOOL)arg4;
+ (AVComposition *)assetFromVideoAsset:(AVAsset *)arg1 slowMotionRate:(float)arg2 slowMotionTimeRange:(CDStruct_e83c9415)arg3 forExport:(BOOL)arg4 outAudioMix:(id *)arg5 outTimeRangeMapper:(id *)arg6;
@end

