//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAFollowupResponseViewController.h"

@class FBAFileCollectionView, FBAOptOutWindowController, FBATextViewWithPlaceHolder, NSButton, NSSet;

@interface FBAFileRequestResponseViewController : FBAFollowupResponseViewController
{
    BOOL _observing;
    FBAOptOutWindowController *_optOutWindowController;
    FBATextViewWithPlaceHolder *_filesRequestTextView;
    FBAFileCollectionView *_fileCollectionView;
    NSSet *_stagedURLs;
}

- (void).cxx_destruct;
@property(copy) NSSet *stagedURLs; // @synthesize stagedURLs=_stagedURLs;
@property(retain) FBAFileCollectionView *fileCollectionView; // @synthesize fileCollectionView=_fileCollectionView;
@property FBATextViewWithPlaceHolder *filesRequestTextView; // @synthesize filesRequestTextView=_filesRequestTextView;
@property(retain, nonatomic) FBAOptOutWindowController *optOutWindowController; // @synthesize optOutWindowController=_optOutWindowController;
@property(getter=isObserving) BOOL observing; // @synthesize observing=_observing;
- (BOOL)hasPendingContent;
- (void)clearPendingContent;
- (void)configureForUse;
- (void)configureForSubmission;
- (id)submissionJSON;
- (void)submitFileResponseOptingOut:(BOOL)arg1;
- (void)submit:(id)arg1;
- (BOOL)allFileMatchersSatisfied;
- (BOOL)requirementSatisfied:(id)arg1;
- (id)uploadedFiles;
- (id)fileMatchers;
- (void)dealloc;
- (void)loadView;
- (id)initWithFeedbackFollowup:(id)arg1;

// Remaining properties
@property(retain) NSButton *submitButton;

@end

