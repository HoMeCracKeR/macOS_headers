//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScreen.h>

@class NSString;

@interface NSScreen (KNAdditions)
+ (id)kn_screenWithDisplayID:(unsigned int)arg1;
+ (id)kn_orderedScreensForScreens:(id)arg1;
+ (id)kn_orderedLogicalScreens;
+ (id)kn_logicalScreens;
- (unsigned int)knp_mirrorMasterDisplayID;
@property(readonly, nonatomic) BOOL kn_isProjector;
@property(readonly, nonatomic) BOOL kn_isTV;
@property(readonly, nonatomic) NSString *kn_localizedName;
@property(readonly, nonatomic) unsigned int kn_displayID;
@property(readonly, nonatomic, getter=kn_isInternal) BOOL kn_internal;
@end

