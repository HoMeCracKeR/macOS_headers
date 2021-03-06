//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "iTermMetalCellRenderer-Protocol.h"

@class NSString, iTermMetalBufferPool, iTermMetalCellRenderer;

@interface iTermHighlightRowRenderer : NSObject <iTermMetalCellRenderer>
{
    iTermMetalCellRenderer *_cellRenderer;
    iTermMetalBufferPool *_colorPool;
}

- (void).cxx_destruct;
- (void)drawWithRenderEncoder:(id)arg1 transientState:(id)arg2;
- (void)initializeTransientState:(id)arg1;
- (id)createTransientStateForCellConfiguration:(id)arg1 commandBuffer:(id)arg2;
- (int)createTransientStateStat;
@property(readonly, nonatomic) BOOL rendererDisabled;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

