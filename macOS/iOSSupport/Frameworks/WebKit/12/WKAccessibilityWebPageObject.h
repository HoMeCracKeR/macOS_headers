//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase
{
    NSData *_remoteTokenData;
}

@property(retain, nonatomic) NSData *remoteTokenData; // @synthesize remoteTokenData=_remoteTokenData;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (double)pageScale;
- (void)_accessibilityCategoryInstalled:(id)arg1;
- (void)dealloc;
- (id)init;

@end

