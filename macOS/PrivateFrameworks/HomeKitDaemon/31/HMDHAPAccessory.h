//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessory.h>

#import "HAPRelayAccessoryDelegate.h"
#import "HMDAccessoryIdentify.h"
#import "HMDAccessoryMinimumUserPrivilegeCapable.h"
#import "HMDAccessoryUserManagement.h"
#import "HMDServiceOwner.h"
#import "HMDTimeInformationMonitorDelegate.h"
#import "HMFTimerDelegate.h"

@class AWDHomeKitHAPService, HMDAccessoryAdvertisement, HMDAccessorySymptomHandler, HMDCameraProfileSettingsManager, HMDCharacteristic, HMDDataStreamController, HMDMediaProfile, HMDNetworkRouterController, HMDNetworkRouterProfile, HMDNetworkRouterSatelliteProfile, HMDPendingCharacteristic, HMDService, HMDTargetControllerManager, HMFConnectivityInfo, HMFPairingIdentity, HMFTimer, NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSNumber, NSSet, NSString;

@interface HMDHAPAccessory : HMDAccessory <HMDAccessoryMinimumUserPrivilegeCapable, HMDServiceOwner, HAPRelayAccessoryDelegate, HMDTimeInformationMonitorDelegate, HMFTimerDelegate, HMDAccessoryIdentify, HMDAccessoryUserManagement>
{
    NSMutableArray *_transportInformationInstances;
    NSMutableArray *_services;
    BOOL _relayEnabled;
    BOOL _timeInformationServiceExists;
    BOOL _supportsTargetController;
    BOOL _keyGenerationInProgress;
    BOOL _hardwareSupport;
    BOOL _supportsRelay;
    unsigned char _keyGenerationType;
    BOOL _systemTimeNeedsUpdate;
    NSString *_relayIdentifier;
    unsigned long long _currentRelayAccessoryState;
    HMDCharacteristic *_currentTimeCharacteristic;
    HMDCharacteristic *_timeUpdateCharacteristic;
    HMDCharacteristic *_dayOfTheWeekCharacteristic;
    NSNumber *_accessoryFlags;
    NSData *_setupHash;
    NSData *_broadcastKey;
    NSNumber *_keyUpdatedStateNumber;
    NSDate *_keyUpdatedTime;
    NSArray *_targetUUIDs;
    HMDTargetControllerManager *_targetControllerManager;
    HMDAccessorySymptomHandler *_symptomsHandler;
    NSSet *_identifiersForBridgedAccessories;
    HMDService *_primaryService;
    HMDPendingCharacteristic *_pendingPowerOn;
    HMDNetworkRouterController *_networkRouterController;
    HMFConnectivityInfo *_connectivityInfo;
    NSMutableArray *_powerOnCompletionRoutines;
    HMDCameraProfileSettingsManager *_cameraProfileSettingsManager;
    HMDAccessoryAdvertisement *_accessoryAdvertisement;
    NSString *_uniqueIdentifier;
    long long _certificationStatus;
    unsigned long long _activationAttempts;
    unsigned long long _pairingAttempts;
    NSNumber *_backedOffStateNumber;
    HMFTimer *_accessoryDiscoveryBackoffTimer;
    HMFTimer *_accessoryKeyRefreshTimer;
    NSDictionary *_cameraClipCloudZoneUUIDByRecordingServiceUUID;
    NSMutableArray *_discoveredServices;
    HMDHAPAccessory *_bridge;
    NSData *_publicKey;
    NSString *_pairingUsername;
    HMFTimer *_timeInformationTimer;
    HMFTimer *_systemTimeInformationTimer;
    NSSet *_cameraProfiles;
    HMDDataStreamController *_dataStreamController;
    NSMapTable *_serverIDToHAPAccessoryTable;
    NSMutableArray *_pendingReads;
}

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)getAWDTransportTypeWithLinkType:(long long)arg1;
+ (Class)transactionClass;
- (void).cxx_destruct;
@property(retain) NSMutableArray *pendingReads; // @synthesize pendingReads=_pendingReads;
@property(retain, nonatomic) NSMapTable *serverIDToHAPAccessoryTable; // @synthesize serverIDToHAPAccessoryTable=_serverIDToHAPAccessoryTable;
@property(retain, nonatomic) HMDDataStreamController *dataStreamController; // @synthesize dataStreamController=_dataStreamController;
@property(retain, nonatomic) NSSet *cameraProfiles; // @synthesize cameraProfiles=_cameraProfiles;
@property(nonatomic) BOOL systemTimeNeedsUpdate; // @synthesize systemTimeNeedsUpdate=_systemTimeNeedsUpdate;
@property(retain, nonatomic) HMFTimer *systemTimeInformationTimer; // @synthesize systemTimeInformationTimer=_systemTimeInformationTimer;
@property(retain, nonatomic) HMFTimer *timeInformationTimer; // @synthesize timeInformationTimer=_timeInformationTimer;
@property(retain, nonatomic) NSString *pairingUsername; // @synthesize pairingUsername=_pairingUsername;
@property(retain, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(nonatomic) __weak HMDHAPAccessory *bridge; // @synthesize bridge=_bridge;
@property(retain, nonatomic) NSMutableArray *discoveredServices; // @synthesize discoveredServices=_discoveredServices;
@property(retain, nonatomic) NSDictionary *cameraClipCloudZoneUUIDByRecordingServiceUUID; // @synthesize cameraClipCloudZoneUUIDByRecordingServiceUUID=_cameraClipCloudZoneUUIDByRecordingServiceUUID;
@property unsigned char keyGenerationType; // @synthesize keyGenerationType=_keyGenerationType;
@property(retain, nonatomic) HMFTimer *accessoryKeyRefreshTimer; // @synthesize accessoryKeyRefreshTimer=_accessoryKeyRefreshTimer;
@property(retain, nonatomic) HMFTimer *accessoryDiscoveryBackoffTimer; // @synthesize accessoryDiscoveryBackoffTimer=_accessoryDiscoveryBackoffTimer;
@property(copy, nonatomic) NSNumber *backedOffStateNumber; // @synthesize backedOffStateNumber=_backedOffStateNumber;
@property(nonatomic) unsigned long long pairingAttempts; // @synthesize pairingAttempts=_pairingAttempts;
@property(nonatomic) unsigned long long activationAttempts; // @synthesize activationAttempts=_activationAttempts;
@property(nonatomic) BOOL supportsRelay; // @synthesize supportsRelay=_supportsRelay;
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMDAccessoryAdvertisement *accessoryAdvertisement; // @synthesize accessoryAdvertisement=_accessoryAdvertisement;
@property(retain, nonatomic) NSMutableArray *powerOnCompletionRoutines; // @synthesize powerOnCompletionRoutines=_powerOnCompletionRoutines;
@property(retain, nonatomic) HMDPendingCharacteristic *pendingPowerOn; // @synthesize pendingPowerOn=_pendingPowerOn;
@property BOOL keyGenerationInProgress; // @synthesize keyGenerationInProgress=_keyGenerationInProgress;
@property(copy, nonatomic) NSDate *keyUpdatedTime; // @synthesize keyUpdatedTime=_keyUpdatedTime;
@property(copy, nonatomic) NSNumber *keyUpdatedStateNumber; // @synthesize keyUpdatedStateNumber=_keyUpdatedStateNumber;
@property(copy, nonatomic) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property(retain, nonatomic) NSString *relayIdentifier; // @synthesize relayIdentifier=_relayIdentifier;
@property(readonly, nonatomic) HMDCameraProfileSettingsManager *cameraProfileSettingsManager; // @synthesize cameraProfileSettingsManager=_cameraProfileSettingsManager;
- (id)cameraClipCloudZoneUUIDForRecordingService:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *hapInstanceId;
- (id)backingStoreTransactionWithName:(id)arg1;
- (id)createUpdateServiceTransationWithServiceUUID:(id)arg1;
- (void)makeServiceNameConsistent:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)messageReceiverChildren;
- (id)backingStoreObjects:(long long)arg1;
- (void)populateModelObject:(id)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (void)_updateBridge:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (BOOL)updateTransportInformation:(id)arg1;
- (id)retrieveUpdatedTransportInfoArray:(id)arg1;
- (id)getTransportInformationArray;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)readInitialRequiredCharacteristicsForBTLEAccessory:(CDUnknownBlockType)arg1;
- (id)getOrCreateServiceUpdateTransactionForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)anyIPServer;
- (id)primaryIPServer;
- (id)dumpSimpleState;
- (id)dumpState;
- (BOOL)isNotificationEnabled;
- (BOOL)isNonClientNotificationEnabled;
- (BOOL)isNotificationEnabledForClientIdentifier:(id)arg1;
- (void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;
- (void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
- (void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
- (void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
- (void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2;
- (void)__updateNotifyingCharacteristicStateNumber:(id)arg1;
- (void)notifyingCharacteristicStateNumberUpdated:(id)arg1;
- (void)_handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleMultipleCharacteristicsUpdated:(id)arg1 message:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)accessoryDidBecomeUnreachable:(id)arg1;
- (void)accessoryDidBecomeReachable:(id)arg1;
- (void)removeAdvertisement:(id)arg1;
- (void)addAdvertisement:(id)arg1;
- (void)associateWithAccessoryAdvertisement:(id)arg1;
- (void)_handleConfigureTargets:(id)arg1;
- (void)_handleKeyRefreshTimerFired;
- (void)_removeBackedoffAccessoryForStateNumber:(id)arg1;
- (void)backOffAccessoryForStateNumber:(id)arg1;
- (void)_handleDiscoveryBackoffTimerFired;
- (id)characteristicsPassingTest:(CDUnknownBlockType)arg1;
- (void)identifyAccessory:(id)arg1;
@property(readonly) BOOL supportsIdentify;
- (void)_handleUpdateAuthorizationData:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleRenameService:(id)arg1;
- (void)_renameService:(id)arg1 name:(id)arg2 message:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)runtimeState;
- (long long)reachableTransports;
- (void)setReachability:(BOOL)arg1 serverIdentifier:(id)arg2 linkType:(long long)arg3;
- (void)_updateReachability;
- (id)findServiceWithServiceType:(id)arg1;
- (id)findCharacteristicType:(id)arg1 forServiceType:(id)arg2;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristic:(id)arg1 forService:(id)arg2;
- (id)findService:(id)arg1;
- (void)_evaluateLocalOperation:(long long)arg1 state:(id)arg2 logEventSession:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateStateForTrackedAccessory:(id)arg1 stateNumber:(id)arg2;
- (void)updateTrackedAccessoryStateNumber:(id)arg1;
- (void)_retrieveStateForTrackedAccessory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_containsSecureCharacteristic;
- (BOOL)_shouldTrackAccessoryWithPriority:(char *)arg1;
- (void)_updateAccessoryTracking;
- (void)_reenableNotificationsOnWatch;
- (void)reachabilityDidChange:(id)arg1;
- (void)_enableBroadcastNotifications:(BOOL)arg1 hapAccessory:(id)arg2 forCharacteristics:(id)arg3;
- (void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 hapAccessory:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)_enableNotificationOnResident:(BOOL)arg1 characteristic:(id)arg2 clientIdentifier:(id)arg3 ignoreDeviceUnlockRequirement:(BOOL)arg4;
- (void)_enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(BOOL)arg1 forCharacteristics:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)enableNotification:(BOOL)arg1 forCharacteristicIDs:(id)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_enableNotification:(BOOL)arg1 matchingHAPAccessory:(id)arg2 ignoreDeviceUnlockRequirement:(BOOL)arg3 clientIdentifier:(id)arg4 forCharacteristics:(id)arg5;
- (void)enableNotification:(BOOL)arg1 ignoreDeviceUnlockRequirement:(BOOL)arg2 clientIdentifier:(id)arg3 forCharacteristics:(id)arg4;
- (void)_disableRemoteNotificationsForCharacteristics:(id)arg1;
- (void)disableRemoteNotificationsForCharacteristics:(id)arg1;
- (void)_disableNotificationsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)disableNotificationsForBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyNotificationChangesForCharacteristics:(id)arg1 errors:(id)arg2 enableNotification:(BOOL)arg3 message:(id)arg4;
- (void)_notifyCharacteristicNotificationChanges:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3 clientIdentifier:(id)arg4;
- (void)_notifyCharacteristicNotificationChangedForCharacteristic:(id)arg1 enableNotification:(BOOL)arg2 message:(id)arg3;
- (void)handleRemoteGatewayNotificationRegistration:(id)arg1 enable:(BOOL)arg2 enableTime:(id)arg3;
- (void)resetNotificationEnabledTime;
@property(readonly, getter=isClientRegisteredForNotifications) BOOL clientRegisteredForNotifications;
- (void)updateNotificationEnabled:(BOOL)arg1 forCharacteristics:(id)arg2 onBehalfOf:(id)arg3;
- (void)_readValueForCharacteristic:(id)arg1 hapAccessory:(id)arg2 requestMessage:(id)arg3;
- (void)_handleCharacteristicRead:(id)arg1;
- (void)submitCharacteristicReadErrorLogEvent:(id)arg1 message:(id)arg2 error:(id)arg3;
- (void)_parseResponseFromRemotePeer:(id)arg1 message:(id)arg2 forCharacteristic:(id)arg3;
- (void)_relayReadFromCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_relayWriteToCharacteristic:(id)arg1 toResidentForMessage:(id)arg2 viaDevice:(id)arg3;
- (void)_handleCharacteristicWrite:(id)arg1;
- (void)submitCharacteristicWriteErrorLogEvent:(id)arg1 message:(id)arg2 error:(id)arg3;
- (BOOL)_handleCharacteristicError:(id)arg1 read:(BOOL)arg2 characteristic:(id)arg3 didRelayMessage:(id)arg4;
- (void)logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (void)_logDuetEventIfNeeded:(id)arg1 clientName:(id)arg2;
- (id)_prepareMessagePayloadForCharacteristicRemoteWrite:(id)arg1;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 hapAccessory:(id)arg3 authorizationData:(id)arg4 message:(id)arg5;
- (void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 logEventSession:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_readCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 logEventSession:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_writeCharacteristicValues:(id)arg1 hapAccessory:(id)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)populateHMDCharacteristicResponses:(id)arg1 hapResponses:(id)arg2 mapping:(id)arg3 overallError:(id)arg4 requests:(id)arg5;
- (id)hapCharacteristicWriteRequests:(id)arg1 hapAccessory:(id)arg2 hmdResponses:(id *)arg3 mapping:(id *)arg4;
- (void)notifyValue:(id)arg1 previousValue:(id)arg2 error:(id)arg3 forCharacteristic:(id)arg4 requestMessage:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)getBluetoothAddress;
- (BOOL)_shouldFilterAccessoryProfile:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)saveBluetoothAddress:(id)arg1;
- (id)_getSymptomHandler;
- (BOOL)shouldConfigureTargetController;
- (id)hmdCharacteristicForInstanceId:(id)arg1;
- (id)hmdCharacteristicFromHapCharacteristic:(id)arg1;
- (void)_readCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 logEventSession:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (void)_readCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)autoUpdateCachedCountDownCharacteristics:(id)arg1;
- (void)readCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 logEventSession:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)readCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_getResponseTuple:(id)arg1 error:(id)arg2 source:(unsigned long long)arg3 suspended:(BOOL)arg4;
- (id)getFullError:(id)arg1 source:(unsigned long long)arg2 suspended:(BOOL)arg3;
- (void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 logEventSession:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (void)_writeCharacteristicValues:(id)arg1 localOperationRequired:(BOOL)arg2 source:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 logEventSession:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)writeCharacteristicValues:(id)arg1 source:(unsigned long long)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)canWakeBasedOnCharacteristic:(id)arg1;
@property(readonly) BOOL supportsUserManagement;
- (void)_performOperation:(long long)arg1 linkType:(long long)arg2 logEventSession:(id)arg3 operationBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)performOperation:(long long)arg1 linkType:(long long)arg2 operationBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long *)arg2;
- (BOOL)matchesHAPAccessory:(id)arg1;
- (id)matchingHAPAccessoryServerIdentifierWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithLinkType:(long long)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1;
- (id)matchingHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1;
- (id)matchingTransportInformationWithServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (BOOL)matchesHAPAccessoryWithServerIdentifier:(id)arg1 instanceID:(id)arg2;
- (id)matchingTransportInformation:(id)arg1;
- (void)unconfigureAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 updateReachability:(BOOL)arg3;
- (void)unconfigure;
- (void)configureWithAccessory:(id)arg1 homeNotificationsEnabled:(BOOL)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enableNotificationsWithHAPAccessory:(id)arg1 homeNotificationsEnabled:(BOOL)arg2;
- (id)configureService:(id)arg1;
- (id)tunneledHAPAccessories;
- (id)getPrimaryHAPAccessories;
- (id)preferredHAPAccessoryForOperation:(long long)arg1 linkType:(long long *)arg2;
- (long long)linkSpeed;
- (BOOL)hasBLELinkConnected;
- (BOOL)hasBTLELink;
- (BOOL)hasIPLink;
- (void)_addHAPAccessory:(id)arg1;
- (void)_removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)removeHAPAccessoryWithServerIdentifier:(id)arg1 linkType:(long long)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;
- (void)removeRelayUser:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addRelayUser:(id)arg1 accessToken:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startRelayPairingWithPairingClient:(id)arg1;
- (void)startRelayActivationWithActivationClient:(id)arg1;
- (id)relayAccessory;
- (void)_setCurrentRelayAccessoryState:(unsigned long long)arg1;
- (unsigned long long)_currentRelayAccessoryState;
@property(readonly, nonatomic) unsigned long long currentRelayAccessoryState; // @synthesize currentRelayAccessoryState=_currentRelayAccessoryState;
- (void)_updateRelayEnabled:(BOOL)arg1 notifyRelayManager:(BOOL)arg2;
- (void)_setRelayEnabled:(BOOL)arg1;
@property(nonatomic, getter=isRelayEnabled) BOOL relayEnabled; // @synthesize relayEnabled=_relayEnabled;
- (void)_setRelayIdentifier:(id)arg1;
- (void)_setSupportsRelay:(BOOL)arg1;
@property(retain, nonatomic) HMDNetworkRouterController *networkRouterController; // @synthesize networkRouterController=_networkRouterController;
@property(readonly, getter=isCameraRecordingFeatureSupported) BOOL supportsCameraRecordingFeature;
- (BOOL)containsCameraService;
- (void)removeTransportInformationInstance:(id)arg1;
- (void)addTransportInformationInstances:(id)arg1;
- (void)addTransportInformationInstance:(id)arg1;
- (id)transportInformationInstances;
- (void)removeBridgedAccessory:(id)arg1;
- (void)addBridgedAccessory:(id)arg1;
@property(copy, nonatomic) NSSet *identifiersForBridgedAccessories; // @synthesize identifiersForBridgedAccessories=_identifiersForBridgedAccessories;
- (void)updateButtonConfigurationForTarget:(id)arg1;
- (void)acknowledgeTargetControlService:(id)arg1 active:(BOOL)arg2;
- (void)autoConfigureTargetController;
- (void)_autoConfigureTargetController;
- (void)_configureTargetControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_notifyClientsOfTargetControlSupportUpdate;
- (void)notifyClientsOfTargetControlSupportUpdate;
- (unsigned long long)targetControllerTicksPerSecond;
- (id)targetControllerButtonConfiguration;
- (void)registerForActiveIdentifierNotifications;
- (void)updateTarget:(id)arg1 name:(id)arg2 buttonConfiguration:(id)arg3;
- (void)removeTarget:(id)arg1;
- (void)addTarget:(id)arg1 buttonConfiguration:(id)arg2;
- (BOOL)supportsTargetController;
- (BOOL)_supportsMediaAccessControl;
@property(readonly, copy, nonatomic) NSArray *awdHAPServicesList;
@property(readonly, copy, nonatomic) AWDHomeKitHAPService *awdPrimaryHAPService;
- (void)_handleServiceRemovedTransaction:(id)arg1 message:(id)arg2;
- (void)_handleAddServiceTransaction:(id)arg1 message:(id)arg2;
- (void)_handleUpdatedServicesForProfilesAndControllers:(id)arg1;
- (id)serviceWithUUID:(id)arg1;
- (void)_removeService:(id)arg1;
- (void)_addService:(id)arg1;
- (void)_updatePrimaryServiceIfNeededWithService:(id)arg1;
- (void)updatePrimaryServiceIfNeeded;
@property(readonly, nonatomic) HMDService *primaryService; // @synthesize primaryService=_primaryService;
@property(readonly, copy) NSArray *services;
@property(readonly, copy) HMFPairingIdentity *pairingIdentity;
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isSecuritySessionOpen;
- (void)verifyPairingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isPrimary;
- (void)savePublicKeyToKeychain;
- (void)setPairingUsername:(id)arg1 publicKey:(id)arg2;
- (void)handlePairedStateChange:(BOOL)arg1;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (void)timeInformationMonitorDidChangeTime;
- (void)_registerForTimeMonitor;
- (void)registerForTimeMonitor;
- (void)_deRegisterForTimeMonitor;
- (void)deRegisterForTimeMonitor;
- (void)writeTimeInformationCharacteristicsForAccessory:(id)arg1;
- (BOOL)updateTimeInformationCharacteristicsForAccessory:(id)arg1;
- (void)_writeTimeInformationCharacteristicsForAccessory;
- (void)_readandWriteToCurrentTime:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)_readAndWriteTimeInformationCharacteristic:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_startSystemTimeWriteTimeInformationTimer;
- (void)_stopSystemTimeWriteTimeInformationTimer;
- (void)_startWriteTimeInformationTimer;
- (void)_stopWriteTimeInformationTimer;
- (id)updateAccessoryFlagsAndNotifyClients:(id)arg1;
- (id)namesOfServicesShowingTilesInHomeApp;
- (BOOL)updateAccessoryInformationWithCharacteristicType:(id)arg1 value:(id)arg2 accessoryTransaction:(id)arg3;
- (BOOL)isReadingRequiredForBTLEAccessoryCharacteristic:(id)arg1 forceReadFWVersion:(BOOL)arg2;
- (void)_handleCharacteristicsChangedNotification:(id)arg1;
- (void)_setSystemTimeNeedsUpdate:(BOOL)arg1;
- (void)_setTimeInformationServiceExists:(BOOL)arg1;
- (void)setTimeInformationServiceExists:(BOOL)arg1;
- (BOOL)_timeInformationServiceExists;
@property(readonly, nonatomic) BOOL timeInformationServiceExists; // @synthesize timeInformationServiceExists=_timeInformationServiceExists;
- (void)_setTimeUpdateCharacteristic:(id)arg1;
- (void)setTimeUpdateCharacteristic:(id)arg1;
- (id)_timeUpdateCharacteristic;
@property(readonly, nonatomic) __weak HMDCharacteristic *timeUpdateCharacteristic; // @synthesize timeUpdateCharacteristic=_timeUpdateCharacteristic;
- (void)_setDayOfTheWeekCharacteristic:(id)arg1;
- (void)setDayOfTheWeekCharacteristic:(id)arg1;
- (id)_dayOfTheWeekCharacteristic;
@property(readonly, nonatomic) __weak HMDCharacteristic *dayOfTheWeekCharacteristic; // @synthesize dayOfTheWeekCharacteristic=_dayOfTheWeekCharacteristic;
- (void)_setCurrentTimeCharacteristic:(id)arg1;
- (void)setCurrentTimeCharacteristic:(id)arg1;
- (id)_currentTimeCharacteristic;
@property(readonly, nonatomic) __weak HMDCharacteristic *currentTimeCharacteristic; // @synthesize currentTimeCharacteristic=_currentTimeCharacteristic;
- (void)handleRoomChanged:(id)arg1;
- (void)handleRoomNameChanged:(id)arg1;
- (void)_handleRoomChangedFromOldRoomName:(id)arg1;
- (id)_messagesForUpdatedRoom:(id)arg1;
- (void)_handleUpdatedName:(id)arg1;
- (void)_renameAccessory:(id)arg1 resetName:(BOOL)arg2 message:(id)arg3;
- (id)getConfiguredName;
- (id)name;
- (void)handleUpdatedPassword:(id)arg1;
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;
- (BOOL)_serviceSupportsMinimumUserPrivilege:(id)arg1;
- (BOOL)supportsMinimumUserPrivilege;
- (void)didUpdateCurrentNetworkProtection;
- (void)_handleWiFiReconfiguration:(id)arg1;
- (BOOL)supportsNetworkProtection;
@property(retain, nonatomic) HMDAccessorySymptomHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
- (BOOL)providesHashRouteID;
- (void)_reconcileAccessControlSetting;
- (void)updateTargetUUIDs:(id)arg1;
- (void)_saveTargetUUIDs:(id)arg1;
- (void)saveTargetUUIDs:(id)arg1;
@property(retain, nonatomic) HMDTargetControllerManager *targetControllerManager; // @synthesize targetControllerManager=_targetControllerManager;
- (void)_saveHardwareSupport:(BOOL)arg1;
- (void)saveHardwareSupport:(BOOL)arg1;
@property(nonatomic) BOOL hardwareSupport; // @synthesize hardwareSupport=_hardwareSupport;
@property(retain, nonatomic) NSArray *targetUUIDs; // @synthesize targetUUIDs=_targetUUIDs;
- (void)evaluateSymptomHandler;
@property(copy, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // @synthesize connectivityInfo=_connectivityInfo;
- (void)setBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(id)arg3;
- (void)_updateBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 keyUpdatedTime:(double)arg3;
@property(copy, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
- (void)updateAccessoryFlags:(id)arg1;
- (void)configureBulletinNotification;
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3;
- (BOOL)shouldEnableDaemonRelaunch;
- (void)takeOwnershipOfAppData:(id)arg1;
- (void)_registerForMessages;
@property(readonly, nonatomic) NSString *serializedIdentifier;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (void)_setWakeType;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)init;
- (void)stopScan;
- (void)_stopScan;
- (void)scanningCompleteWithAccessoryFound:(BOOL)arg1 suspended:(BOOL)arg2;
- (BOOL)initiateScan:(CDUnknownBlockType)arg1;
- (void)initializeBTLEScan;
- (BOOL)_handleUpdatedServicesForNetworkRouterProfileAndController:(id)arg1;
- (BOOL)__createSatelliteNetworkRouterProfile:(id)arg1;
- (BOOL)__createNetworkRouterProfileAndController:(id)arg1;
- (void)postNetworkRouterProfileNotification:(id)arg1 object:(id)arg2;
- (BOOL)__removeNetworkRouterController;
- (void)__createNetworkRouterController:(id)arg1;
@property(readonly, nonatomic) HMDNetworkRouterSatelliteProfile *networkRouterSatelliteProfile;
@property(readonly, nonatomic) HMDNetworkRouterProfile *networkRouterProfile;
- (void)writeValue:(id)arg1 toCharacteristic:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)assistantObject;
- (id)urlString;
- (BOOL)_handleUpdatedServicesForCameraProfiles:(id)arg1;
- (void)_updateSiriAudioFormat:(id)arg1;
- (void)setSelectedSiriAudioConfiguration:(id)arg1;
- (BOOL)_resolveSupportedSiriInputType:(id)arg1;
- (BOOL)_resolveAudioAbility:(id)arg1;
- (void)getSupportedSiriAudioConfiguration:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL supportsSiri;
- (void)_handleUpdateMediaSourceDisplayOrder:(id)arg1;
@property(readonly) BOOL hasTelevisionService;
- (BOOL)_handleUpdatedServicesForMediaProfile:(id)arg1;
@property(readonly) BOOL hasSmartSpeakerService;
@property(readonly) HMDMediaProfile *mediaProfile;
- (void)startBulkSendSessionForFileType:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg1;
- (BOOL)canAcceptBulkSendListeners;
- (void)removeDataStreamBulkSendListener:(id)arg1;
- (void)addDataStreamBulkSendListener:(id)arg1 fileType:(id)arg2;
- (void)_handleUpdatedServicesForDataStreamController:(id)arg1;
- (BOOL)isPoweringOn;
- (void)cancelPowerOn;
- (void)_cancelPowerOn;
- (void)wirelessPowerOn:(CDUnknownBlockType)arg1;
- (void)_wirelessPowerOn:(CDUnknownBlockType)arg1;
- (void)powerOnComplete:(id)arg1;
- (void)wirelessResumeInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

