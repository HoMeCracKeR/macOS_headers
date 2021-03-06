//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDMediaCompatibilityConverter-Protocol.h"

@class NSError, NSString, TSDEPSToPDFConverter, TSPData, TSUBasicProgress, TSUProgress;
@protocol OS_dispatch_queue;

@interface TSDImageCompatibilityConverter : NSObject <TSDMediaCompatibilityConverter>
{
    TSPData *mImageData;
    TSUBasicProgress *mProgress;
    TSPData *mConvertedImageData;
    NSError *mError;
    // Error parsing type: Ac, name: mIsCancelled
    TSDEPSToPDFConverter *mEPSToPDFConverter;
    NSObject<OS_dispatch_queue> *mEPSToPDFConverterQueue;
}

@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress=mProgress;
@property(readonly, nonatomic) TSPData *convertedMediaData; // @synthesize convertedMediaData=mConvertedImageData;
@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
- (void)cancel;
- (void)p_completeConversionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long mediaType;
- (void)convertMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

