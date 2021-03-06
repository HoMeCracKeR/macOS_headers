//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMSongLibrary, NSMutableArray, NSMutableDictionary;

@interface FlexCloudManager : NSObject
{
    FMSongLibrary *_library;
    NSMutableArray *_cloudManagedSongs;
    NSMutableDictionary *_cloudManagedSongsByUID;
    unsigned long long _retryCount;
}

+ (id)createCloudManager:(long long)arg1 withLibrary:(id)arg2 options:(id)arg3;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly) NSMutableDictionary *cloudManagedSongsByUID; // @synthesize cloudManagedSongsByUID=_cloudManagedSongsByUID;
@property(readonly) NSMutableArray *cloudManagedSongs; // @synthesize cloudManagedSongs=_cloudManagedSongs;
@property(readonly) __weak FMSongLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (unsigned long long)assetStatus:(id)arg1;
- (id)_purgeAndReturnReplacementFor:(id)arg1;
- (void)requestPurgeOfAsset:(id)arg1;
- (id)loadCachedSongs;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)arg1;
- (void)requestDownloadOfAsset:(id)arg1;
- (void)loadAssetWithID:(id)arg1 forSongID:(id)arg2;
- (void)retryFetchAllSongs;
- (void)fetchAllSongsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_registerSongs:(id)arg1;
- (id)initWithLibrary:(id)arg1;

@end

