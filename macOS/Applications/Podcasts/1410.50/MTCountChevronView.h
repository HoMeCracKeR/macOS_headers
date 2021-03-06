//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTChevronView, NSNumber, UIColor, UIFont, UILabel;

@interface MTCountChevronView : UIView
{
    NSNumber *_count;
    UIColor *_textColor;
    UILabel *_countLabel;
    MTChevronView *_chevronView;
}

@property(retain, nonatomic) MTChevronView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
- (void).cxx_destruct;
- (struct CGRect)_countFrameForViewSize:(struct CGSize)arg1;
- (struct CGSize)_countSize;
- (struct CGSize)_chevronSize;
- (struct CGRect)_chevronFrameForViewSize:(struct CGSize)arg1;
- (void)_updateCurrentTextColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;

@end

