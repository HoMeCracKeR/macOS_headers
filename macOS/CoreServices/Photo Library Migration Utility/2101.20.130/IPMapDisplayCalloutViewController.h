//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSViewController.h>

@class MultiPaneController;

@interface IPMapDisplayCalloutViewController : NSViewController
{
    MultiPaneController *_multiPaneController;
}

@property MultiPaneController *multiPaneController; // @synthesize multiPaneController=_multiPaneController;
- (void)_switchToDetailViewForAnnotation:(id)arg1;
- (void)_updateView;
- (void)showPhotos:(id)arg1;
- (void)loadView;
- (void)setRepresentedObject:(id)arg1;

@end

