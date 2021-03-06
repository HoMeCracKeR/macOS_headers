//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "PLDiagnosticsProvider.h"

@class NSManagedObjectContext, NSOrderedSet, NSString, PLPhotoLibrary;

@protocol PLAssetContainerList <NSObject, PLDiagnosticsProvider>
@property(readonly, nonatomic) unsigned long long containersCount;
- (NSString *)containersRelationshipName;
- (PLPhotoLibrary *)photoLibrary;
- (NSManagedObjectContext *)managedObjectContext;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
- (NSOrderedSet *)containers;
@end

