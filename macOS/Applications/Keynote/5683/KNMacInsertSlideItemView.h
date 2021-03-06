//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class KNMacInsertMasterButton, KNMacInsertMasterPopoverTextField, KNSlideNode, NSArray;

@interface KNMacInsertSlideItemView : NSView
{
    KNMacInsertMasterButton *_imageButton;
    KNMacInsertMasterPopoverTextField *_masterNameTextField;
    NSArray *_subviewConstraints;
    BOOL _showsMasterTitles;
    KNSlideNode *_masterNode;
}

@property(nonatomic) BOOL showsMasterTitles; // @synthesize showsMasterTitles=_showsMasterTitles;
@property(retain, nonatomic) KNSlideNode *masterNode; // @synthesize masterNode=_masterNode;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;
- (void)p_invalidateConstraints;
@property(nonatomic) SEL action;
@property(nonatomic) id target;
@property(nonatomic) BOOL disallowsDragging;
@property(nonatomic) BOOL createsMasterSlides;
@property(nonatomic) BOOL masterNodeIsSelected;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;
- (void)dealloc;

@end

