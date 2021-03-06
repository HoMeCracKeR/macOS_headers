//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UGCPOIEnrichmentAnalyticsDelegate-Protocol.h"

@class MapsScrollableStackView, NSArray, NSString, UGCLegalAttributionSectionController, UGCPOIEnrichmentForm, UGCPhotosSectionController, UGCRatingsSectionController;
@protocol UGCPOIEnrichmentEditorDelegate;

__attribute__((visibility("hidden")))
@interface UGCPOIEnrichmentViewController : UIViewController <UGCPOIEnrichmentAnalyticsDelegate>
{
    MapsScrollableStackView *_containerView;
    UGCRatingsSectionController *_ratingsSectionController;
    UGCPhotosSectionController *_photosSectionController;
    UGCLegalAttributionSectionController *_legalAttributionSectionController;
    UGCPOIEnrichmentForm *_poiEnrichmentForm;
    id <UGCPOIEnrichmentEditorDelegate> _delegate;
    long long _presentationContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long presentationContext; // @synthesize presentationContext=_presentationContext;
@property(readonly, nonatomic) __weak id <UGCPOIEnrichmentEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureSessionlessAction:(int)arg1;
- (int)currentTarget;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithPOIEnrichmentForm:(id)arg1 presentationContext:(long long)arg2;
@property(readonly, nonatomic) NSArray *sectionControllers;
- (void)logCancelAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

