//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MigrationCustomizeEventsListener.h"
#import "SMSizingDelegate.h"

@class NSString, NSXPCConnection, NSXPCInterface, SMSystem_Client;

@interface SMCustomize_Client : NSObject <MigrationCustomizeEventsListener, SMSizingDelegate>
{
    id <SMCustomize_Client_Delegate> _delegate;
    NSString *_pathingProgressMessage;
    NSXPCInterface *_daemonInterface;
    NSXPCInterface *_exportedInterface;
    NSXPCConnection *_daemonConnection;
    SMSystem_Client *_customizeSystem;
    id <SMDPCustomizeProtocol> _daemonProxy;
}

+ (id)customizeEventsListenerInterface;
- (void).cxx_destruct;
@property(retain) id <SMDPCustomizeProtocol> daemonProxy; // @synthesize daemonProxy=_daemonProxy;
@property(retain) SMSystem_Client *customizeSystem; // @synthesize customizeSystem=_customizeSystem;
@property(retain) NSXPCConnection *daemonConnection; // @synthesize daemonConnection=_daemonConnection;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain) NSXPCInterface *daemonInterface; // @synthesize daemonInterface=_daemonInterface;
@property(retain) NSString *pathingProgressMessage; // @synthesize pathingProgressMessage=_pathingProgressMessage;
@property __weak id <SMCustomize_Client_Delegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)submitRequest:(id)arg1;
- (void)cancelSizingForSystem:(id)arg1;
- (BOOL)hasCustomPathsForSystem:(id)arg1 destinationSystem:(id)arg2;
- (void)informationForBundlesAtPaths:(id)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sizeAllUsersForSystem:(id)arg1 includingVaultUsers:(BOOL)arg2;
- (void)beginSizeCalculationForForCustomPathType:(unsigned long long)arg1 user:(id)arg2 onSourceSystem:(id)arg3 andDestinationSystem:(id)arg4;
- (void)sizingCompletedForCustomPathType:(unsigned long long)arg1 user:(id)arg2 onSystem:(id)arg3 withSize:(unsigned long long)arg4;
- (void)preliminarySizeForCustomPaths:(unsigned long long)arg1 type:(unsigned long long)arg2 user:(id)arg3 onSystem:(id)arg4;
- (void)beginSizeCalculationForComponent:(id)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3;
- (id)sizeForComponent:(id)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3;
- (void)sizingCompletedForComponent:(id)arg1 onSystem:(id)arg2 withSize:(unsigned long long)arg3;
- (void)preliminarySize:(unsigned long long)arg1 forComponent:(id)arg2 onSystem:(id)arg3;
- (id)sizeForPathGroup:(unsigned long long)arg1 onSourceSystem:(id)arg2 andDestinationSystem:(id)arg3;
- (void)sizingCompletedForPathGroup:(unsigned long long)arg1 onSystem:(id)arg2 withSize:(unsigned long long)arg3;
- (void)preliminarySize:(unsigned long long)arg1 andCount:(unsigned long long)arg2 forPathGroup:(unsigned long long)arg3 onSystem:(id)arg4;
- (void)sizingCompletedForUserWithUUID:(id)arg1 excludablePaths:(id)arg2 onSystem:(id)arg3;
- (void)pathingProgressFormatKey:(id)arg1 arguments:(id)arg2;
- (void)preliminarySize:(unsigned long long)arg1 forUserWithUUID:(id)arg2 onSystem:(id)arg3;
- (void)connectionErrorOccurred:(id)arg1;
- (void)startCustomizer;
- (void)dealloc;
- (id)initWithSystem:(id)arg1;

@end

