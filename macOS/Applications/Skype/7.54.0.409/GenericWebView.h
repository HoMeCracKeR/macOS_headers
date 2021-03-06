//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKit/WebView.h>

@class WebSecurityContext;

@interface GenericWebView : WebView
{
    BOOL _blockNotifications;
    BOOL _allowsMagnification;
    BOOL _allowsChangeTextSize;
    WebSecurityContext *_securityContext;
}

@property(nonatomic) BOOL allowsChangeTextSize; // @synthesize allowsChangeTextSize=_allowsChangeTextSize;
@property(nonatomic) BOOL allowsMagnification; // @synthesize allowsMagnification=_allowsMagnification;
@property(nonatomic) BOOL blockNotifications; // @synthesize blockNotifications=_blockNotifications;
@property(retain, nonatomic) WebSecurityContext *securityContext; // @synthesize securityContext=_securityContext;
- (void).cxx_destruct;
- (void)magnifyWithEvent:(id)arg1;
- (BOOL)canMakeTextStandardSize;
- (BOOL)canMakeTextLarger;
- (BOOL)canMakeTextSmaller;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewDidMoveToSuperview;
- (void)setPreferencesIdentifier:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;

@end

