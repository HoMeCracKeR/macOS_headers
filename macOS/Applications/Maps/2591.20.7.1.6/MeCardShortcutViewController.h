//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ControlContaineeViewController.h"

@class AutoLayoutScrollView, MeCardShortcutView, ModalCardHeaderView, NSLayoutConstraint, OverridenBackgroundColorButton, ShortcutEditSession, UIButton, UILabel, UIView;
@protocol ShortcutEditSessionController;

__attribute__((visibility("hidden")))
@interface MeCardShortcutViewController : ControlContaineeViewController
{
    ModalCardHeaderView *_modalHeaderView;
    ShortcutEditSession *_shortcutEditSession;
    AutoLayoutScrollView *_scrollView;
    UIView *_meCardContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    OverridenBackgroundColorButton *_contactCardButton;
    NSLayoutConstraint *_contactCardButtonHeightConstraint;
    MeCardShortcutView *_meCardAvatar;
    id <ShortcutEditSessionController> _sessionController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <ShortcutEditSessionController> sessionController; // @synthesize sessionController=_sessionController;
- (void)_doneAction:(id)arg1;
- (void)_close;
- (void)_updateFonts;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_buildContent;
- (BOOL)_isMapUserShortcut;
- (id)shortcut;
- (void)updateContact;
@property(readonly, nonatomic) UIButton *contactCardButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (void)viewDidLoad;
- (id)initWithShortcutEditSession:(id)arg1;

@end

