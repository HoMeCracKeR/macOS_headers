//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsDebugTableRow.h"

@class MapsPieProgressView, NSProgress, _UICellAccessoryConfigurationCustomView;

__attribute__((visibility("hidden")))
@interface MapsDebugActionTableRow : MapsDebugTableRow
{
    NSProgress *_internalProgress;
    MapsPieProgressView *_progressView;
    _UICellAccessoryConfigurationCustomView *_progressViewAccessory;
    NSProgress *_observingProgress;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSProgress *observingProgress; // @synthesize observingProgress=_observingProgress;
- (void)setSelectionAction:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_progressView;
- (BOOL)_showingProgressView;
- (void)_createProgressViewIfNeeded;
- (void)_setProgressViewHidden:(BOOL)arg1;
- (id)_findTableView;
- (void)configureCollectionViewCell:(id)arg1;
- (void)configureCell:(id)arg1;
- (void)dealloc;

@end

