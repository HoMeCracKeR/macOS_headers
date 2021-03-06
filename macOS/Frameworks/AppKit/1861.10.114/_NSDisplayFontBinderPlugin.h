//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSBinderPlugin.h>

#import <AppKit/_NSDisplayFontBinderPlugin-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSDisplayFontBinderPlugin : _NSBinderPlugin <_NSDisplayFontBinderPlugin>
{
    struct __displayFontBinderPluginFlags {
        unsigned int _isFontInvalidationCapable:1;
        unsigned int _reservedDisplayFontBinderPlugin:31;
    } _displayFontBinderPluginFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;
- (id)fontInvalidationCapableObjectForObject:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

