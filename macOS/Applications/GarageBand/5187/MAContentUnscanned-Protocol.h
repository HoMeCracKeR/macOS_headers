//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSNumber, NSString, NSURL;

@protocol MAContentUnscanned
- (NSArray *)allAvailablePackageNames;
- (BOOL)quickInstallStateOfPackageName:(NSString *)arg1;
- (long long)installStateOfPackageName:(NSString *)arg1;
- (NSArray *)mandatoryPackageNames;
- (BOOL)packageContainsAlchemyFiles:(NSString *)arg1;
- (BOOL)packageContainsAppleLoops:(NSString *)arg1;
- (BOOL)packageConstainsGarageBandLegacyInstruments:(NSString *)arg1;
- (BOOL)packageIsAutomaticDownloadOnly:(NSString *)arg1;
- (BOOL)packageIsLegacy:(NSString *)arg1;
- (BOOL)packageIsLegacyLocked:(NSString *)arg1;
- (NSString *)minimumAppVersionForPackageName:(NSString *)arg1;
- (NSNumber *)minimumSoCTypeForPackageName:(NSString *)arg1;
- (NSNumber *)packageVersionNumberForPackageName:(NSString *)arg1;
- (unsigned long long)installSizeForPackageNames:(NSArray *)arg1;
- (unsigned long long)installSizeForPackageName:(NSString *)arg1;
- (unsigned long long)downloadSizeForPackageNames:(NSArray *)arg1;
- (unsigned long long)downloadSizeForPackageName:(NSString *)arg1;
- (NSString *)downloadFileNameForPackageName:(NSString *)arg1;
- (NSString *)packageNameForDownloadURL:(NSURL *)arg1;
- (NSURL *)downloadURLforPackageName:(NSString *)arg1;
- (NSURL *)packageContentsUpdateURL;
- (NSData *)packageContentsUpdateData;
- (NSArray *)applicationUpdateInfos;
- (double)version;
@end

