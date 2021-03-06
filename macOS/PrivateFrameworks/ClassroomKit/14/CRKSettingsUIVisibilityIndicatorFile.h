//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKMarker.h"

@class NSString;

@interface CRKSettingsUIVisibilityIndicatorFile : NSObject <CRKMarker>
{
    id <CRKMarker> mFileMarker;
}

+ (id)fileURL;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)arg1;
- (BOOL)createWithError:(id *)arg1;
@property(readonly, nonatomic) BOOL exists;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

