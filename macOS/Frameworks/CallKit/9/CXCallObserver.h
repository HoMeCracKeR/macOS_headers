//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CXCallObserverDataSourceDelegate.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface CXCallObserver : NSObject <CXCallObserverDataSourceDelegate>
{
    id <CXCallObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    id <CXCallObserverDataSource> _dataSource;
}

@property(readonly, nonatomic) id <CXCallObserverDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXCallObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 callChanged:(id)arg2;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *calls;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 concurrentQueue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

