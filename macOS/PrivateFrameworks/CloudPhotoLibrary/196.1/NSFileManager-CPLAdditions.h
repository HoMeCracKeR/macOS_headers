//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CPLAdditions)
- (BOOL)cplFileExistsAtURL:(id)arg1;
- (BOOL)cplIsHardLinkNotPossibleError:(id)arg1;
- (BOOL)cplIsFileDoesNotExistError:(id)arg1;
- (BOOL)cplIsFileExistsError:(id)arg1;
- (BOOL)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)cplLinkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
@end

