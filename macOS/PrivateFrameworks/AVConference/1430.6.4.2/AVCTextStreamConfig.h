//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVCTextStreamConfig : NSObject
{
    long long _codecType;
    unsigned long long _numRedundantPayloads;
    unsigned long long _txRedPayloadType;
    unsigned long long _rxRedPayloadType;
}

+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
@property(nonatomic) unsigned long long rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property(nonatomic) unsigned long long txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;
@property(nonatomic) unsigned long long numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (BOOL)isRedValid;
- (BOOL)isValid;

@end

