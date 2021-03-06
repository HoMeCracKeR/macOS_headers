//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

@class IPXButton, IPXPrologueButton, NSButton, NSProgressIndicator, NSTextField, NSTimer, NSView, UXView, WKWebView;
@protocol IPXWelcomeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface IPXWelcomeViewController : IPXViewController
{
    NSTimer *_progressTimer;
    NSTextField *_titleField;
    NSTextField *_descriptionField;
    NSButton *_tourButton;
    IPXPrologueButton *_startButton;
    UXView *_textAreaView;
    NSView *_tourOverlayView;
    NSView *_tourBackgroundView;
    WKWebView *_tourWebView;
    IPXButton *_closeTourButton;
    NSProgressIndicator *_progressIndicator;
    id <IPXWelcomeViewControllerDelegate> _delegate;
}

@property(retain) id <IPXWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) IPXButton *closeTourButton; // @synthesize closeTourButton=_closeTourButton;
@property(retain) WKWebView *tourWebView; // @synthesize tourWebView=_tourWebView;
@property(retain) NSView *tourBackgroundView; // @synthesize tourBackgroundView=_tourBackgroundView;
@property(retain) NSView *tourOverlayView; // @synthesize tourOverlayView=_tourOverlayView;
@property(retain) UXView *textAreaView; // @synthesize textAreaView=_textAreaView;
@property(retain) IPXPrologueButton *startButton; // @synthesize startButton=_startButton;
@property(retain) NSButton *tourButton; // @synthesize tourButton=_tourButton;
@property(retain) NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(retain) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void).cxx_destruct;
- (void)_accessibilityCloseTour;
- (void)_accessibilityOpenTour;
- (void)_progressTimerFired:(id)arg1;
- (void)_disarmProgressTimer;
- (void)_armProgressTimer;
- (void)closeTour:(id)arg1;
- (void)openTour:(id)arg1;
- (void)confirm:(id)arg1;
- (void)_setShowProgress:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)awakeFromNib;

@end

