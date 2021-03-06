//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermVariableVendor.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, iTermVariableReference;

@interface iTermVariables : NSObject <iTermVariableVendor>
{
    NSMutableDictionary *_values;
    iTermVariables *_parent;
    NSString *_parentName;
    unsigned long long _context;
    NSMutableDictionary *_resolvedLinks;
    NSMutableDictionary *_unresolvedLinks;
    id _indexedValueOfPrimaryKey;
    iTermVariableReference *_primaryKeyReference;
    id <iTermObject> _owner;
    NSString *_primaryKey;
}

+ (id)namesToRecordFromSet:(id)arg1 inContext:(unsigned long long)arg2;
+ (id)globalInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
@property(readonly, nonatomic) __weak id <iTermObject> owner; // @synthesize owner=_owner;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)dictionaryInScope:(id)arg1;
- (id)stringValuedDictionaryInScope:(id)arg1;
@property(readonly, nonatomic) NSDictionary *stringValuedDictionary;
- (id)namesByPrependingParentName:(id)arg1;
- (void)recordUseOfVariables:(id)arg1;
- (void)enumerateOwners:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateMutationsByDepth:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateMutationsByOwnersByDepth:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)didReferenceVariables:(id)arg1;
- (id)setValue:(id)arg1 forVariableNamed:(id)arg2 withSideEffects:(BOOL)arg3 weak:(BOOL)arg4;
- (void)removeWeakReferenceFromLinkTable:(id)arg1 toObject:(id)arg2 forKey:(id)arg3;
- (void)addWeakReferenceToLinkTable:(id)arg1 toObject:(id)arg2 forKey:(id)arg3;
- (id)strongArrayFromWeakArray:(id)arg1;
- (void)didChangeTerminalValueWithPath:(id)arg1;
- (id)linksDescription;
- (void)didChangeNonterminalValueWithPath:(id)arg1;
- (void)valueOfPrimaryKeyDidChange;
@property(readonly, nonatomic) NSArray *allNames;
- (void)removeLinkToReference:(id)arg1 path:(id)arg2;
- (BOOL)hasLinkToReference:(id)arg1 path:(id)arg2;
- (void)addLinkToReference:(id)arg1 path:(id)arg2;
- (void)addLinksToReference:(id)arg1;
- (id)stringValueForVariableName:(id)arg1;
- (id)valueForVariableName:(id)arg1;
- (id)valueByUnwrappingWeakVariables:(id)arg1;
- (id)rawValueForVariableName:(id)arg1;
- (id)discouragedValueForVariableName:(id)arg1;
- (BOOL)setValuesFromDictionary:(id)arg1;
- (BOOL)setValue:(id)arg1 forVariableNamed:(id)arg2 weak:(BOOL)arg3;
- (BOOL)setValue:(id)arg1 forVariableNamed:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *debugInfo;
- (id)initWithContext:(unsigned long long)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

