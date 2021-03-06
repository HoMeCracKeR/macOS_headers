//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLPhotoLibraryPathManager.h"

@interface PLPhotoLibraryPathManager (conveniences)
+ (BOOL)supportedFilesystemForCloneWithLibraryURL:(id)arg1 error:(id *)arg2;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1 createEmptyFile:(BOOL)arg2;
- (id)cloudSharingArchiveDirectory;
- (id)directoryPathForInFlightComments:(BOOL)arg1;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)cplEnableMarkerFilePath;
- (id)forceSoftResetSyncPath;
- (id)pauseICloudPhotosFilePath;
- (id)disableICloudPhotosFilePath;
- (id)enableICloudPhotosFilePath;
- (id)cplDataDirectoryCreateIfNeeded:(BOOL)arg1;
- (id)deletedMemoryUUIDsFilePath;
- (id)searchMetadataStoreFilePath;
- (id)zeroKeywordStoreFilePath;
- (id)searchIndexManagerDatabaseFilePath;
- (id)searchIndexManagerDatabaseDirectory;
- (id)dataMigratorFinishedFilePath;
- (id)photoStreamsDataDirectory;
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (void)_setSqliteErrorAndExitIfNecessaryForReason:(int)arg1;
- (void)setSqliteErrorAndExitIfNecessaryForDemoContentInstallation;
- (void)setSqliteErrorAndExitIfNecessaryForSimulatedCorruption:(BOOL)arg1;
- (BOOL)createSqliteErrorIndicatorFile;
- (id)sqliteErrorIndicatorFilePath;
@end

