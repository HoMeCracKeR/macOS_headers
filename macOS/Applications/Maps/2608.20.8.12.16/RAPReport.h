//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FeedbackSubmissionManager, NSMapTable, NSMutableArray, NSString, RAPQuestion;
@protocol RAPAppStateProtocol;

__attribute__((visibility("hidden")))
@interface RAPReport : NSObject
{
    BOOL _willUpdate;
    NSMutableArray *_photosWithMetadata;
    id <RAPAppStateProtocol> _reportContext;
    FeedbackSubmissionManager *_submitter;
    NSMapTable *_observers;
    BOOL _canCreateSubmittableProblem;
    RAPQuestion *_initialQuestion;
    id <RAPAppStateProtocol> _context;
    NSString *_preferredEmailAddress;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *preferredEmailAddress; // @synthesize preferredEmailAddress=_preferredEmailAddress;
@property(readonly, nonatomic, getter=_context) id <RAPAppStateProtocol> context; // @synthesize context=_context;
@property(retain, nonatomic) RAPQuestion *initialQuestion; // @synthesize initialQuestion=_initialQuestion;
- (void)_anonymizeDirectionsRequestsAndResponsesIfNeeded:(id)arg1;
- (void)_anonymizeLocations:(id)arg1 traits:(id)arg2;
- (void)_anonymizeScreenshots:(id)arg1;
- (void)_anonymizePhotos:(id)arg1;
- (void)submitWithPrivacyRequestHandler:(CDUnknownBlockType)arg1 willStartSubmitting:(CDUnknownBlockType)arg2 didFinishSubmitting:(CDUnknownBlockType)arg3;
- (id)devicePushToken;
- (id)_abAssignmentResponse;
- (void)_prepareRequestParametersForSubmission:(id)arg1;
- (id)_navigationSettings;
- (id)_auxiliaryControlsRecording;
- (id)_placeContext;
- (id)_mapContext;
- (void)_invokeChangeHandlers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;
- (id)newFeedbackRequestParameters;
- (void)_update;
- (void)updateIfNeeded;
- (void)_setNeedsUpdate;
- (void)_questionDidChange:(id)arg1;
@property(readonly, nonatomic) BOOL canCreateSubmittableProblem; // @synthesize canCreateSubmittableProblem=_canCreateSubmittableProblem;
- (void)removePhotosOfType:(long long)arg1;
- (void)addPhotoWithMetadata:(id)arg1;
- (id)initWithContext:(id)arg1 submitter:(id)arg2;
- (id)init;

@end

