//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol CSVoiceTriggerDelegate <NSObject>
- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1 deviceId:(NSString *)arg2;

@optional
- (void)raiseToSpeakDetected:(NSDictionary *)arg1;
- (void)voiceTriggerGotSuperVector:(NSData *)arg1;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1;
@end

