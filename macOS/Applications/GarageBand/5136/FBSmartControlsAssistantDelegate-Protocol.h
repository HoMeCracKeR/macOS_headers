//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSmartControlsAssistant, WsControlIdentity;

@protocol FBSmartControlsAssistantDelegate <NSObject>
- (void)assistant:(FBSmartControlsAssistant *)arg1 didUpdateObjectWithIdentity:(WsControlIdentity *)arg2 doubleValue:(double)arg3;
- (void)assistantWorkspaceDidUpdate:(FBSmartControlsAssistant *)arg1;
@end

