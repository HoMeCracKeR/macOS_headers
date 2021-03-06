//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iLifeKit/IPKGridView.h>

@interface IPSharingMenuGridView : IPKGridView
{
    IPSharingMenuGridView *_previousGrid;
    IPSharingMenuGridView *_nextGrid;
}

@property IPSharingMenuGridView *nextGrid; // @synthesize nextGrid=_nextGrid;
@property IPSharingMenuGridView *previousGrid; // @synthesize previousGrid=_previousGrid;
- (BOOL)accessibilityIsIgnored;
- (void)_setHoverItemView:(id)arg1 scroll:(BOOL)arg2;
- (void)_selectItemBelow;
- (void)_selectItemBelowBackwardsOnly;
- (void)_selectItemAbove;
- (void)_selectPreviousItem;
- (void)_selectPreviousItemBackwardsOnly;
- (void)_selectNextItem;
- (id)_itemsForRepresentedObjects:(id)arg1;
- (void)selectItemView:(id)arg1;
- (void)setSelectedItem:(long long)arg1;
- (BOOL)forwardKeyDownMessage:(id)arg1 inReverse:(BOOL)arg2;
- (void)keyDown:(id)arg1;

@end

