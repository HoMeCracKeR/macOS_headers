//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDomain.h"

#import "FBScriptableObject-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableSet, NSString;

@interface FBLibrary : FBDomain <FBScriptableObject, NSSecureCoding, NSCopying>
{
    unsigned long long fRef;
    NSString *fLibPath;
    BOOL fDisabled;
    NSMutableSet *_files;
    NSArray *_cachedFaces;
}

+ (BOOL)validProposedName:(id)arg1;
+ (id)unfilteredLibraryFiles;
+ (void)removeLibrary:(id)arg1;
+ (void)addLibrary:(id)arg1;
+ (id)fontLibraries;
+ (id)fontDomains;
+ (id)newName;
+ (id)libraryWithName:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)fontLibraryDirectory;
+ (int)libraryForContainer:(id)arg1;
+ (id)_newLibraryPathForName:(id)arg1;
+ (void)_readLibrariesFromDiskIfNecessary;
- (id)faces;
- (id)unsortedFiles;
- (id)removeFiles:(id)arg1;
- (id)installFiles:(id)arg1 withOptions:(unsigned int)arg2;
- (unsigned int)scope;
- (id)remove;
- (id)add;
- (BOOL)isEnabled;
- (BOOL)isDownloadableStub;
- (id)renameWithName:(id)arg1;
- (long long)compare:(id)arg1;
- (id)imageName;
- (id)alternateImage;
- (id)image;
- (id)fontFiles;
- (id)folder;
- (id)path;
- (long long)domainRef;
- (long long)order;
- (unsigned int)flags;
- (id)key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (void)dealloc;
- (void)_internalFontsDidChange:(id)arg1;
- (void)_modelDidInitialize:(id)arg1;
- (id)description;
- (BOOL)_deletePersistentFile:(id)arg1;
- (BOOL)_savePersistentFile:(id)arg1;
- (long long)_libRef;
- (id)_initWithContentsOfFile:(id)arg1;
- (void)_setPersistentFilePath:(id)arg1;
- (id)_persistentFilePath;
- (void)_setFileSet:(id)arg1;
- (void)_addFileSet:(id)arg1;
- (void)_removeFiles:(id)arg1;
- (void)_installFiles:(id)arg1;
- (void)_disable;
- (void)_enable;
- (void)_setName:(id)arg1;
- (void)_setFiles:(id)arg1;
- (id)objectSpecifier;
- (void)takeValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)setAppleScriptEnabled:(id)arg1;
- (void)setAppleScriptName:(id)arg1;
- (id)appleScriptID;
- (id)appleScriptContainers;
- (id)applescriptDescription;
- (id)appleScriptLocalizedName;
- (id)appleScriptName;

@end

