//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Coherence/CRStringDecoderProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC9Coherence15CRStringDecoder : NSObject <CRStringDecoderProtocol>
{
    // Error parsing type: , name: encoded
    // Error parsing type: , name: subsequence
    // Error parsing type: , name: decodeContext
}

- (void).cxx_destruct;
- (id)init;
- (unsigned int)substringChild:(long long)arg1;
- (long long)substringChildCount;
- (unsigned int)substringLength;
- (unsigned int)substringAddedByCounter:(long long)arg1;
- (unsigned int)substringAddedByReplica:(long long)arg1;
- (long long)substringAddedByCount;
- (unsigned int)substringCharClock;
- (unsigned int)substringCharReplica;
- (void)decodeSubstring:(long long)arg1;
- (long long)substringCount;
- (id)addedByVersionWithError:(id *)arg1;
- (id)versionWithError:(id *)arg1;
- (id)context;
- (id)storageWithError:(id *)arg1;

@end

