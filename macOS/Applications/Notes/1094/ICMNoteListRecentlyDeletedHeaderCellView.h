//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICMNoteListHeaderCellView.h"

@class NSLayoutConstraint;

@interface ICMNoteListRecentlyDeletedHeaderCellView : ICMNoteListHeaderCellView
{
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double totalMarginWidth;
- (id)menuForEvent:(id)arg1;

@end

