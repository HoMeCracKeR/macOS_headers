//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADStatusConditions_XPC.h"

@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>
{
}

- (id)setupXPCConnection;
- (void)isStatusConditionRegistered:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setStatusCondition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

