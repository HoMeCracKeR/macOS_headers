//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXAssetMetadataDonator : NSObject
{
    NSCountedSet *_locationDescriptions;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSMutableDictionary *_locationDescriptionsByAssetLocalIdentifiers;
}

+ (id)sharedDonator;
+ (id)new;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *locationDescriptionsByAssetLocalIdentifiers; // @synthesize locationDescriptionsByAssetLocalIdentifiers=_locationDescriptionsByAssetLocalIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(retain, nonatomic) NSCountedSet *locationDescriptions; // @synthesize locationDescriptions=_locationDescriptions;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)_notifyWhenDonationIsComplete:(CDUnknownBlockType)arg1;
- (void)donate:(id)arg1;
- (void)donateMetadataForAsset:(id)arg1;
- (id)_init;
- (id)init;

@end

