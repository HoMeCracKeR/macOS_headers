//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton;

@interface FFontDialogAccessoryView : NSView
{
    NSButton *OKButton;
    NSButton *CancelButton;
    _Bool Result;
}

- (void)onOK:(id)arg1;
- (void)onCancel:(id)arg1;
- (_Bool)result;
- (id)initWithFrame:(struct CGRect)arg1;

@end

