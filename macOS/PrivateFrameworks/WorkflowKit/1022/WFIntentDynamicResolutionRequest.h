//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WFIntentDynamicResolutionRequest : NSObject
{
    BOOL _cancelled;
    CDUnknownBlockType _resolutionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resolutionBlock; // @synthesize resolutionBlock=_resolutionBlock;
@property(readonly, nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;

@end

