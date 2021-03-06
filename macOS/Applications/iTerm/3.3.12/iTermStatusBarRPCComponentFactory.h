//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermStatusBarComponentFactory.h"

@class ITMRPCRegistrationRequest, NSString;

@interface iTermStatusBarRPCComponentFactory : NSObject <iTermStatusBarComponentFactory>
{
    ITMRPCRegistrationRequest *_savedRegistrationRequest;
}

- (void).cxx_destruct;
- (id)newComponentWithKnobs:(id)arg1 layoutAlgorithm:(unsigned long long)arg2 scope:(id)arg3;
- (id)defaultKnobs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)componentDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegistrationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

