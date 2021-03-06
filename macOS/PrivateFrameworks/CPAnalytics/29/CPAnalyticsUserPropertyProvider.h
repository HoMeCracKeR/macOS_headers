//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CPAnalyticsDynamicPropertyProvider.h"

@class NSString;

@interface CPAnalyticsUserPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>
{
}

- (struct NSObject *)_iCPLHasChangesToProcess;
- (struct NSObject *)_iCPLLowDiskSpace;
- (struct NSObject *)_iCPLExceedingQuota;
- (struct NSObject *)_iCPLEnabled;
- (struct NSObject *)getDynamicProperty:(id)arg1 forEventName:(id)arg2 withPayload:(id)arg3;
- (void)registerAndProvideUserPropertiesFor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

