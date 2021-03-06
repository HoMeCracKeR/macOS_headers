//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LoginUIKit/LUI2ViewController.h>

#import "NSTextStorageDelegate.h"

@class NSLayoutConstraint, NSScrollView, NSString, NSTextView;

@interface LUI2MessageViewController : LUI2ViewController <NSTextStorageDelegate>
{
    NSTextView *_messageTextView;
    NSScrollView *_scrollView;
    NSLayoutConstraint *_messageTextViewHeightConstraint;
}

+ (double)centerXPadding;
@property NSLayoutConstraint *messageTextViewHeightConstraint; // @synthesize messageTextViewHeightConstraint=_messageTextViewHeightConstraint;
@property(retain) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly) NSTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
- (void)dealloc;
- (void)viewDidLoad;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

