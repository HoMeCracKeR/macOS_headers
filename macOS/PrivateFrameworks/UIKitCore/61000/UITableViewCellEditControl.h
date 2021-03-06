//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIImageView, UITableViewCell, _UITableViewCellEditControlMinusView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl
{
    UITableViewCell *_cell;
    UIImageView *_imageView;
    _UITableViewCellEditControlMinusView *_minusView;
    UIImageView *_shadowView;
    double _focalY;
    double _focalHeight;
    unsigned int _style:2;
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _reserved:27;
}

- (void).cxx_destruct;
- (void)_multiselectColorChanged;
@property(readonly, nonatomic) BOOL wantsImageShadow;
@property(readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isRotating;
@property(nonatomic, getter=isRotated) BOOL rotated;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_shadowImage;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (struct CGSize)defaultSize;
- (id)_currentImage;
- (void)_updateImageView;
- (id)_multiSelectHighlightedImage;
- (id)_multiSelectSelectedImage;
- (id)_multiSelectNotSelectedImage;
- (id)_insertImage:(double)arg1;
- (id)_deleteImage:(double)arg1;
- (void)_toggleRotate;
- (struct CGRect)_minusRect;
- (id)_minusView;
- (id)_imageView;

@end

