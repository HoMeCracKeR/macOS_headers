//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TemplateKit/TLKView.h>

#import <TemplateKit/NUIContainerViewDelegate-Protocol.h>

@class NSBezierPath, NSString, NUIContainerBoxView, TLKImage, TLKImageView, TLKLabel, TLKMultilineText, TLKTextButton, TLKTextView;
@protocol TLKDescriptionViewDelegate;

@interface TLKDescriptionView : TLKView <NUIContainerViewDelegate>
{
    TLKImage *_image;
    TLKMultilineText *_text;
    TLKMultilineText *_title;
    NSString *_moreButtonText;
    id <TLKDescriptionViewDelegate> _delegate;
    TLKLabel *_titleLabel;
    TLKTextButton *_moreButton;
    TLKTextView *_detailsTextView;
    NUIContainerBoxView *_imageAndDescriptionBoxView;
    TLKImageView *_imageView;
    NSBezierPath *_imageViewExclusionPath;
    NSBezierPath *_moreButtonExclusionPath;
}

@property(retain, nonatomic) NSBezierPath *moreButtonExclusionPath; // @synthesize moreButtonExclusionPath=_moreButtonExclusionPath;
@property(retain, nonatomic) NSBezierPath *imageViewExclusionPath; // @synthesize imageViewExclusionPath=_imageViewExclusionPath;
@property(retain, nonatomic) TLKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NUIContainerBoxView *imageAndDescriptionBoxView; // @synthesize imageAndDescriptionBoxView=_imageAndDescriptionBoxView;
@property(retain, nonatomic) TLKTextView *detailsTextView; // @synthesize detailsTextView=_detailsTextView;
@property(retain, nonatomic) TLKTextButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property __weak id <TLKDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *moreButtonText; // @synthesize moreButtonText=_moreButtonText;
@property(retain, nonatomic) TLKMultilineText *title; // @synthesize title=_title;
@property(retain, nonatomic) TLKMultilineText *text; // @synthesize text=_text;
@property(retain, nonatomic) TLKImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)exclusionPathsForTextView;
- (BOOL)moreButtonIsHidden;
- (long long)numberOfLines;
- (id)detailTextViewText;
- (id)imageExclusionPath;
- (void)simulateMoreButtonPress;
- (void)moreButtonPressed;
- (BOOL)shouldHideMoreButtonForTextView:(id)arg1;
- (struct CGSize)textSizeForTextView:(id)arg1 width:(double)arg2 lineCount:(unsigned long long)arg3;
- (void)setExclusionPathInContainer:(id)arg1 includeMoreButton:(BOOL)arg2;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidChangeEffectiveAppearance;
- (BOOL)usesDefaultInsets;
- (id)setupContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

