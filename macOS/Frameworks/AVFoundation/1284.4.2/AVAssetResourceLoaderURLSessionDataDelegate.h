//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/NSURLSessionDataDelegate-Protocol.h>

@class AVWeakReference, NSString;

@interface AVAssetResourceLoaderURLSessionDataDelegate : NSObject <NSURLSessionDataDelegate>
{
    AVWeakReference *_weakReferenceToAsset;
}

- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didBecomeDownloadTask:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invokeFigAssetDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

