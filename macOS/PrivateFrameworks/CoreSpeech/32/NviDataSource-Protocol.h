//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NviContext;

@protocol NviDataSource <NSObject>
@property(readonly, nonatomic) unsigned long long type;
- (void)stopWithDidStopHandler:(void (^)(BOOL, NSError *))arg1;
- (void)startWithNviContext:(NviContext *)arg1 didStartHandler:(void (^)(BOOL, NSError *))arg2;
- (void)removeReceiver:(id <NviDataReceiver>)arg1;
- (void)addReceiver:(id <NviDataReceiver>)arg1;
@end

