//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SocialUI/SODebugMenuItem.h>

@class NSString;

@interface SODebugFeatureMenuItem : SODebugMenuItem
{
    NSString *_userDefaultsKey;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
- (void)handleMenuAction:(id)arg1;
- (void)update;
- (void)featureEnabled:(BOOL)arg1;
@property(nonatomic, getter=isFeatureEnabled) BOOL featureEnabled; // @dynamic featureEnabled;
- (id)initWithUserDefaultsKey:(id)arg1 title:(id)arg2;

@end

