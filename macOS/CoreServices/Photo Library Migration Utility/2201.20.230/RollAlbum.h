//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Album.h"

@interface RollAlbum : Album
{
    unsigned long long mRollID;
    unsigned long long mKeyPhotoID;
}

+ (void)initialize;
- (BOOL)isVisible;
- (long long)rollIDCompare:(id)arg1;
- (id)rollName;
- (void)setName:(id)arg1;
- (id)name;
- (struct IPPhotoInfo *)keyPhotoInfo;
- (unsigned long long)keyPhotoID;
- (void)setKeyPhotoID:(unsigned long long)arg1;
- (unsigned long long)rollID;
- (void)setRollID:(unsigned long long)arg1;
- (BOOL)isCollapsed;
- (void)setCollapsed:(BOOL)arg1;
- (unsigned long long)defaultGroup;
- (void)dealloc;
- (id)initWithDB:(id)arg1 key:(unsigned long long)arg2 persistent:(BOOL)arg3 rollID:(unsigned long long)arg4;
- (id)init;

@end

