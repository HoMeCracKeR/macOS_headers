//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNVoiceController, NSString;

@protocol MNVoiceControllerObserver <NSObject>
- (void)voiceController:(MNVoiceController *)arg1 didStartSpeakingPrompt:(NSString *)arg2;
- (void)voiceController:(MNVoiceController *)arg1 didActivateAudioSession:(BOOL)arg2;
@end

