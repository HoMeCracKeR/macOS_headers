//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASXPCServerHelper : NSObject
{
}

+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 shouldGenerateCrashReport:(BOOL)arg5;
+ (BOOL)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4;
+ (BOOL)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 logHandle:(id)arg3;
+ (BOOL)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(CDUnknownBlockType)arg6 setupClientProxy:(CDUnknownBlockType)arg7 interruptionHandler:(CDUnknownBlockType)arg8 invalidationHandler:(CDUnknownBlockType)arg9 logHandle:(id)arg10;

@end

