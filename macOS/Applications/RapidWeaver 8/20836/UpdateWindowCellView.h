//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface UpdateWindowCellView : NSTableCellView
{
    NSButton *_checkbox;
    NSTextField *_titleLabel;
    NSButton *_infoButton;
    NSTextField *_versionLabel;
}

@property(nonatomic) __weak NSTextField *versionLabel; // @synthesize versionLabel=_versionLabel;
@property(nonatomic) __weak NSButton *infoButton; // @synthesize infoButton=_infoButton;
@property(nonatomic) __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSButton *checkbox; // @synthesize checkbox=_checkbox;
- (void).cxx_destruct;

@end

