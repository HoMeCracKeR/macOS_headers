//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class IPPhotoObjCProxy;

@interface PAPhotoInfoAsyncImageLoadRequest : NSObject
{
    id _target;
    SEL _selector;
    struct CGSize _imageSize;
    int _quality;
    id _arg;
    IPPhotoObjCProxy *_photoInfo;
    double _startTimestamp;
    struct CGImage *_loadedImageRef;
}

@property double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain) IPPhotoObjCProxy *photoInfo; // @synthesize photoInfo=_photoInfo;
@property(nonatomic) struct CGImage *loadedImageRef; // @synthesize loadedImageRef=_loadedImageRef;
@property(readonly) id arg; // @synthesize arg=_arg;
@property(readonly) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly) int quality; // @synthesize quality=_quality;
@property(readonly) SEL selector; // @synthesize selector=_selector;
@property(readonly) id target; // @synthesize target=_target;
- (id)description;
- (id)initWithPhotoInfo:(id)arg1 target:(id)arg2 selector:(SEL)arg3 imageSize:(struct CGSize)arg4 quality:(int)arg5 object:(id)arg6;
- (void)dealloc;

@end

