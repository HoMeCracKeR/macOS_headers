//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKit/SKInAppServiceObserver-Protocol.h>

@interface SKPaymentQueueClient : NSObject <SKInAppServiceObserver>
{
    CDUnknownBlockType _observerBlock;
}

@property(copy) CDUnknownBlockType observerBlock; // @synthesize observerBlock=_observerBlock;
- (void)inAppServiceReply:(id)arg1;

@end

