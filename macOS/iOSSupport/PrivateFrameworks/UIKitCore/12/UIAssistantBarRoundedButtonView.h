//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIAssistantBarRoundedButtonViewButton;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonView : UIView
{
    UIView *_shadowView;
    BOOL _dropShadow;
    UIAssistantBarRoundedButtonViewButton *_button;
}

@property(readonly, nonatomic) UIAssistantBarRoundedButtonViewButton *button; // @synthesize button=_button;
@property(nonatomic) BOOL dropShadow; // @synthesize dropShadow=_dropShadow;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

