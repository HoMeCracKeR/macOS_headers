//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class ICMFolderListOutlineView;

@interface ICMFolderListTableCellView : NSTableCellView
{
    BOOL _showsAdditionalInterface;
    ICMFolderListOutlineView *_outlineView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL showsAdditionalInterface; // @synthesize showsAdditionalInterface=_showsAdditionalInterface;
@property(nonatomic) __weak ICMFolderListOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void)setObjectValue:(id)arg1;
- (void)prepareForReuse;

@end

