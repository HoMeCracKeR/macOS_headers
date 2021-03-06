//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SNAnalyzerProviding.h"
#import "SNRequest.h"

@class NSString, SNSpeechUtteranceDetector;

@interface SNDetectSpeechUtteranceRequest : NSObject <SNAnalyzerProviding, SNRequest>
{
    SNSpeechUtteranceDetector *_detector;
}

- (void).cxx_destruct;
@property(readonly) double decisionDelay;
- (BOOL)detected;
@property(readonly, nonatomic) __weak id <SNAnalyzing> analyzer;
- (id)init;
- (id)initWithRequestType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

