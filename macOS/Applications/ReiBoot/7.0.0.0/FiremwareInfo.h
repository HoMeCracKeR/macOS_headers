//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FiremwareInfo : NSObject
{
    BOOL _isSelect;
    NSString *_firemwareUrl;
    NSString *_firemwareName;
    NSString *_firemwareVersion;
    long long _firemwareSize;
    NSString *_downloadSpeed;
    NSString *_downloadTime;
    double _downloadProgress;
    double _progressMax;
}

- (void)setProgressMax:(double)arg1;
- (double)progressMax;
- (void)setDownloadProgress:(double)arg1;
- (double)downloadProgress;
- (void)setDownloadSpeed:(id)arg1;
- (id)downloadSpeed;
- (void)setDownloadTime:(id)arg1;
- (id)downloadTime;
- (void)setFiremwareSize:(long long)arg1;
- (long long)firemwareSize;
- (void)setFiremwareVersion:(id)arg1;
- (id)firemwareVersion;
- (void)setFiremwareName:(id)arg1;
- (id)firemwareName;
- (void)setFiremwareUrl:(id)arg1;
- (id)firemwareUrl;
- (void)setIsSelect:(BOOL)arg1;
- (BOOL)isSelect;
- (void)dealloc;
- (id)init;

@end

