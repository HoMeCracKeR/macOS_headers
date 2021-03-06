//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPortraitOnlyNavigationController.h>

@class CNPhotoPickerTrapView, NSArray;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController
{
    BOOL _allowRotation;
    BOOL _disablingRotation;
    CNPhotoPickerTrapView *_trapOverlayView;
    NSArray *_trapOverlayConstraints;
    struct CGSize _previousSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL disablingRotation; // @synthesize disablingRotation=_disablingRotation;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property(retain, nonatomic) NSArray *trapOverlayConstraints; // @synthesize trapOverlayConstraints=_trapOverlayConstraints;
@property(retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView; // @synthesize trapOverlayView=_trapOverlayView;
@property(nonatomic) BOOL allowRotation; // @synthesize allowRotation=_allowRotation;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)arg1;
- (void)setupTrapOverlayView;
- (BOOL)shouldDisplayTrapOverlayView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)beginDisablingAutorotation;
- (void)endDisablingAutorotation;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithRootViewController:(id)arg1;

@end

