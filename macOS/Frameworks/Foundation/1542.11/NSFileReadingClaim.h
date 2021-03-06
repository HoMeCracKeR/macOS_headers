//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileReadingClaim : NSFileAccessClaim
{
    NSURL *_url;
    BOOL _urlDidChange;
    unsigned long long _options;
    NSFileAccessNode *_location;
    NSFileAccessNode *_rootNode;
    long long _linkResolutionCount;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)shouldCancelInsteadOfWaiting;
- (id)allURLs;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (BOOL)blocksClaim:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)resolveURLThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (void)granted;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(CDUnknownBlockType)arg4;

@end

