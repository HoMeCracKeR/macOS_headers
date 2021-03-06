//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVConference/GKNATObserver.h>

@class GKNATObserver_SCContext, NSMutableDictionary, NSObject, NSRecursiveLock;
@protocol GKNATObserverDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GKNATObserverInternal : GKNATObserver
{
    id <GKNATObserverDelegate> _delegate;
    struct __SCDynamicStore *_dynamicStore;
    NSRecursiveLock *_xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary *_interfaceInfoDictionary;
    BOOL _nonCarrierInterfacesOnly;
    BOOL _checkTCPAndSSL;
    BOOL _favorNonCarrier;
    BOOL _newCarrierType;
    BOOL _addInRangeFlag;
    BOOL _addCarrierFlag;
    BOOL _ignoreNatTypeCache;
    BOOL _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary *_currentNetworkNames;
    NSObject<OS_dispatch_queue> *_natCheckQueue;
    NSObject<OS_dispatch_queue> *_reportNATQueue;
    NSObject<OS_dispatch_group> *_natCheckGroup;
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;
    BOOL _fNATCheckQueued;
    BOOL _fNATCheckInProgress;
    GKNATObserver_SCContext *_sccontext;
    BOOL _hasNATCheckStarted;
    BOOL _hasNATCheckEnded;
}

- (void)registerForNetworkChanges;
- (id)nameForNetworkWithIPPort:(struct tagIPPORT *)arg1 interfaceName:(id)arg2;
- (void)tryNATCheckWithDelay:(double)arg1;
- (void)clearRetries;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT *)arg1 useCache:(BOOL)arg2;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT *)arg1 useCache:(BOOL)arg2;
- (void)NATCheckWithIPPort:(struct tagIPPORT *)arg1 useCache:(BOOL)arg2;
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;
- (void)updateNatTypeCache:(id)arg1;
- (id)retrieveNatTypeCache;
- (void)updateNatTypeCache_OSXGamedScheme:(id)arg1;
- (id)retrieveNatTypeCache_OSXGamedScheme;
- (void)updateNatTypeCache_CachePlistScheme:(id)arg1;
- (id)retrieveNatTypeCache_CachePlistScheme;
- (BOOL)ensureNatCachePathExists;
- (BOOL)theObserverRunsInFaceTime;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT *)arg1 ToServer:(id)arg2 isSSL:(BOOL)arg3;
- (struct tagCommNATInfo *)callCommNATTestFromIPPort:(struct tagIPPORT *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)reportNATType;
- (void)shouldTryNATCheck;
- (int)currentNATType;
- (void)calculateSummmaryNATType:(int *)arg1 andCarrierNATType:(int *)arg2 andNonCarrierNATType:(int *)arg3 copyInterfaceInfoDictionary:(id *)arg4;
- (unsigned int)setSSLFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setTCPFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setCommNATFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3;
- (unsigned int)setFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(BOOL)arg3 isCachedKey:(id)arg4 mask:(unsigned int)arg5;
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(BOOL)arg2 commnatFlagsCached:(BOOL)arg3 tcpFlagsCached:(BOOL)arg4 sslFlagsCached:(BOOL)arg5;
- (void)dealloc;
- (oneway void)release;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

