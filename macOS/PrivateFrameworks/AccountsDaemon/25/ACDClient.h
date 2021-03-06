//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSNumber, NSString, NSXPCConnection;

@interface ACDClient : NSObject
{
    NSXPCConnection *_connection;
    struct __CFBundle *_bundle;
    NSString *_bundleID;
    BOOL _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
}

+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (id)description;
- (BOOL)hasEntitlement:(id)arg1;
@property(readonly) struct __CFBundle *bundle;
@property(readonly) NSString *adamOrDisplayID;
@property(readonly) NSString *name;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
@property(readonly) NSString *localizedAppName;
@property(retain) NSString *bundleID;
@property(readonly) NSNumber *pid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)init;

@end

