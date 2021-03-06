//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSProgress, NSString, NSURL;

@protocol FPArchiveServiceProtocol
- (NSProgress *)unarchiveItemAtURL:(NSURL *)arg1 passphrases:(NSArray *)arg2 destinationFolderURL:(NSURL *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (NSProgress *)unarchiveItemAtURL:(NSURL *)arg1 passphrase:(NSString *)arg2 destinationFolderURL:(NSURL *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (NSProgress *)archiveItemsWithURLs:(NSArray *)arg1 compressionFormat:(unsigned long long)arg2 destinationFolderURL:(NSURL *)arg3 completionHandler:(void (^)(NSURL *, NSString *, NSError *))arg4;
- (void)itemDescriptorsForItemAtURL:(NSURL *)arg1 passphrases:(NSArray *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)itemDescriptorsForItemAtURL:(NSURL *)arg1 passphrase:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

