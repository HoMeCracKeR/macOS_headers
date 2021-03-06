//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSArray, NSLayoutConstraint, NSTextView;

@interface HyperlinkTextField : NSTextField
{
    NSLayoutConstraint *_topConstraint;
}

@property __weak NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
@property(readonly, nonatomic) NSTextView *textView;
@property(readonly, nonatomic) NSArray *hyperlinkInfos;
- (void)_resetHyperlinkCursorRects;
- (void)resetCursorRects;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_hyperlinkTextFieldInit;

@end

