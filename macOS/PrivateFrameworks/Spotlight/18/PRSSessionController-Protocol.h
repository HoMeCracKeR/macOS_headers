//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFileHandle, NSString;

@protocol PRSSessionController <NSObject>
@property(readonly, nonatomic) NSArray *excludedDomainIdentifiers;
@property(readonly, nonatomic) NSString *applicationNameForUserAgent;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property(readonly, nonatomic) double sessionStartTime;
- (void)updateCorrectionDict:(NSFileHandle *)arg1;
- (void)sessionReceivedBagWithEnabledDomains:(NSArray *)arg1;

@optional
- (void)sessionReceivedSuggestionsParameters:(NSArray *)arg1;
@end

