//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsEntry.h>

#import "MapsUIDiffableDataSourceIdentifiable-Protocol.h"

@class GEOFeatureStyleAttributes, MKMapItem, NSString, UIImage;

@interface MapsSuggestionsEntry (Analytics) <MapsUIDiffableDataSourceIdentifiable>
+ (id)iconForSuggestionType:(long long)arg1 suggestionAttributes:(id)arg2 mapItemAttributes:(id)arg3 originBundleID:(id)arg4 screenScale:(double)arg5 inverted:(BOOL)arg6 isDashboardWidget:(BOOL)arg7 nightMode:(BOOL)arg8;
+ (id)sharedDefaults;
+ (void)removeStaleArchivedDestinations;
+ (id)archivedDestinationForUniqueID:(id)arg1;
+ (id)__debug_fakeHomeEntry;
@property(readonly, nonatomic) int proactiveItemType;
@property(readonly, nonatomic, getter=hasVibrantBackground) BOOL vibrantBackground;
- (void)loadIconInBackground:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property(retain, nonatomic) UIImage *icon;
@property(readonly, nonatomic) MKMapItem *MKMapItem;
- (id)notificationDetailsWithTitle:(id)arg1 message:(id)arg2;
- (void)archiveDestination;
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

