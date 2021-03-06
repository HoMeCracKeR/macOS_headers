//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class CLgNotesFocusView;

@interface CLgNotesTextView : NSTextView
{
    CLgNotesFocusView *notesFocusView;
}

- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (BOOL)adjustDarkText;
- (void)changeDocumentBackgroundColor:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)description_textview;
- (id)initWithFrame:(struct CGRect)arg1 notesFocusView:(id)arg2;

@end

