//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDTilingLayer.h"

@class TSCHRenderer;

@interface TSCHRendererLayer : TSDTilingLayer
{
    TSCHRenderer *mRenderer;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)p_layerFrameFromNaturalSpaceFrame:(struct CGRect)arg1;
- (struct CGRect)p_calculateLayerFrame;
- (void)updateFrameFromLayout;
- (id)renderer;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1;

@end

