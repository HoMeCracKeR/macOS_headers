//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFItemManager, HUQuickControlCollectionViewControllerLayoutOptions, NSArray, NSMutableArray, UICollectionView;
@protocol HUQuickControlCollectionItemManaging;

@interface HUQuickControlGridLayoutManager : NSObject
{
    HUQuickControlCollectionViewControllerLayoutOptions *_layoutOptions;
    HFItemManager<HUQuickControlCollectionItemManaging> *_itemManager;
    UICollectionView *_collectionView;
    NSMutableArray *_sectionSettingsArray;
}

@property(retain, nonatomic) NSMutableArray *sectionSettingsArray; // @synthesize sectionSettingsArray=_sectionSettingsArray;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager; // @synthesize itemManager=_itemManager;
@property(retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
- (void).cxx_destruct;
- (id)_viewProfilesForSection:(unsigned long long)arg1;
- (unsigned long long)_mostImportantItemTypeForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) long long viewSizeSubclass;
- (unsigned long long)titlePositionForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfColumnsInSection:(unsigned long long)arg1;
- (double)sectionTopPaddingInSection:(unsigned long long)arg1 withLayoutOptions:(id)arg2;
- (double)interItemSpacingForItemSize:(unsigned long long)arg1 layoutOptions:(id)arg2;
- (id)_settingsForSectionNumber:(unsigned long long)arg1 sectionIdentifier:(id)arg2 layoutOptions:(id)arg3;
- (void)generateSectionSettings;
- (unsigned long long)itemSizeForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *collectionSectionSettings;
- (id)init;
- (id)initWithCollectionView:(id)arg1 itemManager:(id)arg2 layoutOptions:(id)arg3;

@end

