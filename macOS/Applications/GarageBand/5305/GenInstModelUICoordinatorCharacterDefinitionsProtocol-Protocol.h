//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet;

@protocol GenInstModelUICoordinatorCharacterDefinitionsProtocol <NSObject>
- (BOOL)parameterIDsContainXYPadIDs:(NSSet *)arg1;
- (BOOL)parameterIDsAreXYPadIDs:(NSSet *)arg1;
- (NSDictionary *)initialRegionParameterValuesForTrackModel:(id <GenInstDrummer_TrackModelProtocol>)arg1;
- (NSArray *)knownParameterIDs;
- (NSDictionary *)parameterGenerateOptions;
- (NSDictionary *)parameterChangeConditions;
- (NSDictionary *)parameterDependencies;
- (NSDictionary *)parameterTemplates;
- (NSDictionary *)parameters;
@end

