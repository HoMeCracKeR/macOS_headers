//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

#import "NSDraggingDestination-Protocol.h"

@class NSString, TSKDocumentRoot;

@interface TMAImageBulletButton : NSButton <NSDraggingDestination>
{
    TSKDocumentRoot *_documentRoot;
    id _representedObject;
    NSString *_modelValueKeyPath;
}

+ (Class)cellClass;
@property(copy, nonatomic) NSString *modelValueKeyPath; // @synthesize modelValueKeyPath=_modelValueKeyPath;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

