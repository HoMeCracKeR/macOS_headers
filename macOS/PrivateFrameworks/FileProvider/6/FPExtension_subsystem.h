//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKModularService.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FPExtension_subsystem : NSObject <PKModularService>
{
    BOOL _initialized;
    NSDictionary *_infoDictionary;
}

+ (id)initForPlugInKit;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (void).cxx_destruct;
- (void)endUsing:(id)arg1;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

