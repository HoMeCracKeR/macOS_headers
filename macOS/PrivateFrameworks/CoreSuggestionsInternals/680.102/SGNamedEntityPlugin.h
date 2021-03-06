//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/FIAPPlugin-Protocol.h>

@class NSString, SGNamedEntityDissector;

@interface SGNamedEntityPlugin : NSObject <FIAPPlugin>
{
    SGNamedEntityDissector *_dissector;
}

- (void).cxx_destruct;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)_harvestMapsIntent:(id)arg1 identifier:(id)arg2;
- (id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;
- (id)processUserAction:(id)arg1 searchableItem:(id)arg2;
- (id)processSearchableItem:(id)arg1;
- (void)processTextContentItem:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

