//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSDictionary, NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CKEventMetricInfo : NSObject <NSSecureCoding>
{
    BOOL _isCKInternalMetric;
    BOOL _isPushTriggerFired;
    BOOL _allowsCellularAccess;
    BOOL _preferAnonymousRequests;
    NSUUID *_metricUUID;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    NSDictionary *_attributes;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *associatedOperationGroups; // @synthesize associatedOperationGroups=_associatedOperationGroups;
@property(readonly, nonatomic) NSMutableDictionary *associatedOperations; // @synthesize associatedOperations=_associatedOperations;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(readonly, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(readonly, nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(readonly, nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(readonly, nonatomic) BOOL isPushTriggerFired; // @synthesize isPushTriggerFired=_isPushTriggerFired;
@property(readonly, nonatomic) BOOL isCKInternalMetric; // @synthesize isCKInternalMetric=_isCKInternalMetric;
@property(readonly, nonatomic) NSUUID *metricUUID; // @synthesize metricUUID=_metricUUID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEventMetric:(id)arg1;

@end

