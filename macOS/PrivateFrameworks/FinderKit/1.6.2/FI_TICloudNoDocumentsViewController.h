//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_TImageView, FI_TTextField, FI_TView, NSButton, NSView;

__attribute__((visibility("hidden")))
@interface FI_TICloudNoDocumentsViewController : FI_TViewController
{
    FI_TImageView *_cloudAndAppImageView;
    FI_TView *_cloudAndAppView;
    FI_TImageView *_cloudImageView;
    FI_TImageView *_appIconImageView;
    FI_TTextField *_appInfoTextFld;
    FI_TTextField *_explanationTextFld;
    NSButton *_upgradeButton;
    struct TFENode _target;
    struct TNSRef<NSMetadataQuery *, void> _boostingQuery;
    _Bool _isUpgradeToICloudUI;
}

@property(readonly, nonatomic) struct TFENode target; // @synthesize target=_target;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)upgradeToiCloudDrive:(id)arg1;
- (void)learnAboutICloudBtnPressed:(id)arg1;
@property(retain, nonatomic) NSView *dropTargetView;
- (id)nibName;
- (void)viewLoaded;
- (id)initWithTarget:(const struct TFENode *)arg1;

@end

