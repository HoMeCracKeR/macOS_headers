//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <AOSUI/NSURLConnectionDelegate-Protocol.h>

@class AKAppleIDSession, NSHTTPURLResponse, NSMutableData, NSMutableURLRequest, NSObject, NSString, NSURLConnection;
@protocol OS_dispatch_queue;

@interface iCloudRequester : NSOperation <NSURLConnectionDelegate>
{
    NSMutableURLRequest *_request;
    NSURLConnection *_urlConnection;
    CDUnknownBlockType _handler;
    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _canceled;
    AKAppleIDSession *_appleIDSession;
    NSString *_accountID;
    BOOL _shouldRetry;
    BOOL _isCanceled;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(nonatomic, getter=isExecuting) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(getter=isCanceled) BOOL canceled; // @synthesize canceled=_isCanceled;
@property(getter=isFinished) BOOL finished; // @synthesize finished=_isFinished;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)__unsafe_callHandler;
- (void)_callHandler;
- (void)_kickOffRequest:(id)arg1;
- (void)generateiCloudRequestHeadersForAccountID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)start;
- (void)cancel;
- (id)initWithRequest:(id)arg1 signForAccountID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

