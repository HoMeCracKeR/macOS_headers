//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXAssetsGridViewControllerConfiguration.h"

@class NSArray, NSButton, PXCMMSession, PXMomentShareStatusPresentation;

__attribute__((visibility("hidden")))
@interface IPXPhotosGridViewControllerCMMDetailsConfiguration : IPXAssetsGridViewControllerConfiguration
{
    PXCMMSession *_session;
    NSArray *_topTrailingBarButtonItems;
    PXMomentShareStatusPresentation *_statusPresentation;
    NSButton *_declineShareButton;
    NSButton *_actionButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) NSButton *declineShareButton; // @synthesize declineShareButton=_declineShareButton;
@property(readonly, nonatomic) PXMomentShareStatusPresentation *statusPresentation; // @synthesize statusPresentation=_statusPresentation;
- (Class)sectionHeaderClass;
- (Class)mainHeaderClass;
- (double)mainHeaderHeightForWidth:(double)arg1 scale:(double)arg2;
- (BOOL)shouldShowMainHeader;
- (BOOL)shouldShowMainFooterIncludingWhenInBounds:(char *)arg1;
- (double)footerHeightForWidth:(double)arg1 scale:(double)arg2;
- (Class)footerClass;
- (id)topTrailingBarButtonItems;
- (void)updateWithSelectionSnapshot:(id)arg1;
- (SEL)_selectorForActionForSession:(id)arg1;
- (id)_buttonTitleForDeclineSharingButton;
- (BOOL)_wantsDeclineSharingButton;
- (BOOL)_wantsAddButton;
- (BOOL)_wantsShareButton;
- (id)init;
- (id)initWithSession:(id)arg1;

@end

