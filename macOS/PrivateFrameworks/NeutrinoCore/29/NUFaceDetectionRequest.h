//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NURenderRequest.h>

#import "NUTimeBased.h"

@class NSString;

@interface NUFaceDetectionRequest : NURenderRequest <NUTimeBased>
{
    long long _maxFaceCount;
    id <NUScalePolicy> _scalePolicy;
}

@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property long long maxFaceCount; // @synthesize maxFaceCount=_maxFaceCount;
- (void).cxx_destruct;
- (void)submit:(CDUnknownBlockType)arg1;
- (long long)mediaComponentType;
- (id)newRenderJob;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end

