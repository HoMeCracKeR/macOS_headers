//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"

@class NSObject<OS_dispatch_workloop>, NSString, NSURLSession;

@interface TransparencyLogSession : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_workloop> *_workloop;
    unsigned long long _fetchCount;
    unsigned long long _downloadCount;
    NSURLSession *_backgroundSession;
    NSURLSession *_foregroundSession;
}

- (void).cxx_destruct;
@property(retain) NSURLSession *foregroundSession; // @synthesize foregroundSession=_foregroundSession;
@property(retain) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property unsigned long long downloadCount; // @synthesize downloadCount=_downloadCount;
@property unsigned long long fetchCount; // @synthesize fetchCount=_fetchCount;
@property(retain) NSObject<OS_dispatch_workloop> *workloop; // @synthesize workloop=_workloop;
- (void)download:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)fetch:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)createAuthenticatedForegroundSession;
- (id)createAuthenticatedBackgroundSession:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithWorkloop:(id)arg1 sessionDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

