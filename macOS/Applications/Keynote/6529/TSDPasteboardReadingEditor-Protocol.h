//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSDEditor.h"

@class NSPasteboard, NSString, TSPPasteboard;

@protocol TSDPasteboardReadingEditor <TSDEditor>
- (BOOL)readSelectionFromPasteboard:(NSPasteboard *)arg1;
- (id)validRequestorForSendType:(NSString *)arg1 returnType:(NSString *)arg2 shouldStop:(char *)arg3;
- (void)pasteWithPasteboard:(TSPPasteboard *)arg1 sender:(id)arg2;
- (BOOL)canPasteWithPasteboard:(TSPPasteboard *)arg1 sender:(id)arg2;
@end

