//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MyDocument, NSImageView, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface RWSiteSettingsViewController : NSViewController
{
    NSTextField *generalFirstResponder;
    NSTextField *templateFirstResponder;
    NSView *containerView;
    NSImageView *bottomBarImageView;
    MyDocument *_document;
}

@property(nonatomic) __weak MyDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (BOOL)shouldEnableInspector;
- (void)willResignActive;
- (void)didBecomeActive;

@end

