//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PluginDirectoryAPI : NSObject
{
}

+ (id)APIRoot;
+ (id)shared;
- (void)getPluginsNeedingUpdatesWithExistingVersions:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)logPluginInstall:(id)arg1 isUpdate:(BOOL)arg2;
- (id)URLForPluginNamed:(id)arg1;
- (id)URLForSearchQuery:(id)arg1;
- (id)URLForCategory:(id)arg1;
- (void)loadCategoriesWithCallback:(CDUnknownBlockType)arg1;

@end

