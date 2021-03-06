//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSFileWrapper, NSURL;

@interface QLZipArchive : NSObject
{
    struct archive *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)fileWrapper;
- (void)enumerateEntriesWithHandler:(CDUnknownBlockType)arg1;
- (id)readCurrentDataWithEntry:(struct archive_entry *)arg1 error:(id *)arg2;
- (BOOL)_reopenWithError:(id *)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)libarchiveError;

@end

