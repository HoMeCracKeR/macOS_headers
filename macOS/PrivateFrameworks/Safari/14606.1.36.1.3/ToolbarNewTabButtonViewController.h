//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTitlebarAccessoryViewController.h>

@class NewTabButton;

__attribute__((visibility("hidden")))
@interface ToolbarNewTabButtonViewController : NSTitlebarAccessoryViewController
{
    NewTabButton *_createTabButton;
}

@property(readonly, nonatomic) NewTabButton *createTabButton; // @synthesize createTabButton=_createTabButton;
- (void).cxx_destruct;
- (id)initWithButtonTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

