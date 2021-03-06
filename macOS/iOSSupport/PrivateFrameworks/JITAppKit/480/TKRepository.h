//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TKRepository : NSObject
{
    NSString *_bundlePath;
    NSURL *_URL;
    NSString *_version;
}

+ (void)unpackBundleWithURL:(id)arg1 destinationPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)bundlePathForURL:(id)arg1;
+ (void)reset;
+ (void)loadWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (id)viewPathForName:(id)arg1;
- (id)initWithURL:(id)arg1 bundlePath:(id)arg2;

@end

