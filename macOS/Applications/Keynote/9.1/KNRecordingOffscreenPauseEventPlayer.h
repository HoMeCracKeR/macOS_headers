//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNRecordingOffscreenEventPlayer.h"

@class KNAnimatedOffscreenPlaybackController;

@interface KNRecordingOffscreenPauseEventPlayer : KNRecordingOffscreenEventPlayer
{
    KNAnimatedOffscreenPlaybackController *_playbackController;
}

- (void).cxx_destruct;
- (void)playEvent:(id)arg1 atTime:(double)arg2;
- (id)initWithEventTrack:(id)arg1;
- (id)initWithEventTrack:(id)arg1 offscreenPlaybackController:(id)arg2;

@end

