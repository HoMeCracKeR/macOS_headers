//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PVVideoCompositingContext;

@interface PVCameraPreviewRenderer : NSObject
{
    HGRef_9706a068 _renderManager;
    struct HGRef<HGRenderJob> _currentRenderJob;
    PVVideoCompositingContext *_compositingContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enqueueRenderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (HGRef_2925969f)rootContext;
- (HGRef_9706a068)renderManager;
- (void)dealloc;
- (id)init;

@end

