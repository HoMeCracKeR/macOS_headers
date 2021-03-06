//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

@class CSProfTag, CSProfTagArray, CSProfile, CSProfileTable, NSBox, NSPrintInfo, NSWindow;

@interface CSProfileDoc : NSDocument
{
    NSWindow *_wind;
    CSProfile *_profile;
    BOOL _profDirty;
    NSBox *_box;
    CSProfileTable *_table;
    BOOL _option;
    CSProfTagArray *_tagModules;
    CSProfTag *_currentModule;
    long long _currentIndex;
    long long _switchToIndex;
    NSPrintInfo *mPrintInfo;
}

- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (id)printInfo;
- (void)setPrintInfo:(id)arg1;
- (id)profileContentView;
- (BOOL)profileIsDirty;
- (void)windowDidUpdate:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)shouldUnselectResult:(int)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)writeSafelyToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 error:(id *)arg4;
- (void)windowControllerDidLoadNib:(id)arg1;
- (id)windowNibName;
- (void)dealloc;

@end

