//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PAPixelFormat <NSObject>
@property(readonly) BOOL hasAlpha;
@property(readonly) unsigned long long bitsPerSample;
@property(readonly) unsigned long long bitsPerPixel;
@property(readonly) unsigned long long numberOfComponents;
@property(readonly) NSString *name;
- (BOOL)isEqualToPixelFormat:(id <PAPixelFormat>)arg1;
@end

