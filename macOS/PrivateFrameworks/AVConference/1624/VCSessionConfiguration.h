//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCSessionConfiguration : NSObject
{
    unsigned long long _maxRemoteParticipants;
    long long _sessionMode;
    id _reportingHierarchyToken;
}

@property(retain, nonatomic) id reportingHierarchyToken; // @synthesize reportingHierarchyToken=_reportingHierarchyToken;
@property(nonatomic) long long sessionMode; // @synthesize sessionMode=_sessionMode;
@property(nonatomic) unsigned long long maxRemoteParticipants; // @synthesize maxRemoteParticipants=_maxRemoteParticipants;
- (BOOL)applyConfigurationUsingClientDict:(id)arg1;
- (BOOL)updateWithClientDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;

@end

