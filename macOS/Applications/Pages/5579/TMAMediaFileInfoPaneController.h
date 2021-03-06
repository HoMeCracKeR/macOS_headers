//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

@class NSImage, TMAFileInfoWell;

@interface TMAMediaFileInfoPaneController : TMAInspectorPaneController
{
    TMAFileInfoWell *mFileInfoWell;
}

+ (id)keyPathsForValuesAffectingCanChooseNewMedia;
+ (id)keyPathsForValuesAffectingIconForSelectedMedia;
+ (id)nibName;
@property(nonatomic) TMAFileInfoWell *fileInfoWell; // @synthesize fileInfoWell=mFileInfoWell;
- (void)chooseNewMedia:(id)arg1;
@property(readonly, nonatomic) BOOL canChooseNewMedia;
@property(readonly, nonatomic) NSImage *iconForSelectedMedia;
- (void)awakeFromNib;

@end

