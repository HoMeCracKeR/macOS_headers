//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol MPVolumeControllerDataSource <NSObject>
@property(readonly, nonatomic) float EUVolumeLimit;
@property(readonly, nonatomic) long long volumeWarningState;
@property(readonly, nonatomic) BOOL volumeWarningEnabled;
@property(nonatomic, getter=isMuted) BOOL muted;
@property(nonatomic) float volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property(readonly, copy, nonatomic) NSString *volumeControlLabel;
@property(readonly, nonatomic) BOOL applicationShouldOverrideHardwareVolumeBehavior;
@property(nonatomic) __weak id <MPVolumeControllerDataSourceDelegate> delegate;
- (void)getVolumeValueWithCompletion:(void (^)(float))arg1;
- (void)reload;
- (void)initializeVolume;
- (void)adjustVolumeValue:(float)arg1;

@optional
- (void)endDecreasingRelativeVolume;
- (void)beginDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)reloadWarning;
@end

