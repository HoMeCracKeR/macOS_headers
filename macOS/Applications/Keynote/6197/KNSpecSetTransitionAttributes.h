//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNSpecTransitionAttributes.h"

#import "GSSPAutoEncodable-Protocol.h"

@class KNTransitionAttributes;

@interface KNSpecSetTransitionAttributes : KNSpecTransitionAttributes <GSSPAutoEncodable>
{
    KNTransitionAttributes *_transitionAttributes;
    BOOL _unset;
}

+     // Error parsing type: @32@0:8r^{SpecSetTransitionAttributesArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{TransitionAttributesArchive}B}16@24, name: newFromArchive:unarchiver:
+     // Error parsing type: v40@0:8@16^{SpecSetTransitionAttributesArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{TransitionAttributesArchive}B}24@32, name: saveObject:toArchive:archiver:
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)operationPropertyName;
- (id)apply:(id)arg1;
- (BOOL)isUnsetSpec;
- (id)initUnsetSpec;
- (id)initWithCurrentProperty:(id)arg1;
-     // Error parsing type: @32@0:8r^{SpecSetTransitionAttributesArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{TransitionAttributesArchive}B}16@24, name: initSpecSetTransitionAttributesWithArchive:unarchiver:
-     // Error parsing type: v32@0:8^{SpecSetTransitionAttributesArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{TransitionAttributesArchive}B}16@24, name: saveSpecSetTransitionAttributesToArchive:archiver:
- (void)populateGSSPSpecSetTransitionAttributes:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

