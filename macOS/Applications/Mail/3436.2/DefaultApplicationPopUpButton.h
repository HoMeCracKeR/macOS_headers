//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@interface DefaultApplicationPopUpButton : NSPopUpButton
{
    long long _indexOfSelectedHandler;
}

@property(nonatomic) long long indexOfSelectedHandler; // @synthesize indexOfSelectedHandler=_indexOfSelectedHandler;
- (void)_selectApplication:(id)arg1;
- (void)_setDefaultEmailHandler:(id)arg1;
- (void)_selectHandlerWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (long long)_addHandlerWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (void)_populateMenu;
- (void)refreshApplicationList;

@end

