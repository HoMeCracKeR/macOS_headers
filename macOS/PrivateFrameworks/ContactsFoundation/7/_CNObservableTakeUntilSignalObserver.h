//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNObserver.h"

@class NSString;

@interface _CNObservableTakeUntilSignalObserver : NSObject <CNObserver>
{
    id <CNObserver> _observer;
    id <_CNObservableTakeUntilSignalObserverDelegate> _delegate;
}

@property(readonly) __weak id <_CNObservableTakeUntilSignalObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) id <CNObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

