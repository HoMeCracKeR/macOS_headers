//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTLDrawable.h"

@class CAMetalLayer, NSString;

__attribute__((visibility("hidden")))
@interface MTKOffscreenDrawable : NSObject <MTLDrawable>
{
    id <MTLTexture> _texture;
    unsigned long long _pixelFormat;
    struct CGSize _size;
    BOOL _textureDirty;
    CAMetalLayer *_layer;
    double _presentedTime;
    unsigned long long _drawableID;
    id <MTLDevice> _device;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) unsigned long long drawableID; // @synthesize drawableID=_drawableID;
@property(readonly, nonatomic) double presentedTime; // @synthesize presentedTime=_presentedTime;
@property(readonly) CAMetalLayer *layer; // @synthesize layer=_layer;
- (void)addPresentedHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) unsigned long long pixelFormat;
- (id)texture;
- (void)presentAtTime:(double)arg1;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)present;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(struct CGSize)arg3 drawableID:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

