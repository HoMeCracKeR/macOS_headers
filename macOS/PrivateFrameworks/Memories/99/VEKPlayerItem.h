//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVPlayerItem.h"

@class AltClipCollection, OrientationInfo;

@interface VEKPlayerItem : AVPlayerItem
{
    AltClipCollection *_altInfo;
    OrientationInfo *_currentAltInfo;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak OrientationInfo *currentAltInfo; // @synthesize currentAltInfo=_currentAltInfo;
@property(retain, nonatomic) AltClipCollection *altInfo; // @synthesize altInfo=_altInfo;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) BOOL isRotated;
@property(readonly, nonatomic) double aspect;

@end

