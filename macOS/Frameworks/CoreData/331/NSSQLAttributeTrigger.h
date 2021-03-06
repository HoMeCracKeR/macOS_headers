//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSQLAttributeExtension.h"

@class NSArray, NSMutableArray, NSMutableString, NSPredicate, NSSQLAttribute, NSSQLEntity, NSSQLRelationship, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension>
{
    NSPredicate *_predicate;
    NSString *_predicateString;
    NSSQLEntity *_entity;
    NSSQLAttribute *_attribute;
    NSSQLRelationship *_relationship;
    NSSQLEntity *_destinationEntity;
    NSArray *_destinationAttributes;
    NSMutableString *_mToManyInnerFetchWhereClause;
    NSMutableString *_mToManyDecrementWhenClause;
    NSMutableString *_mToManyIncrementWhenClause;
    NSMutableString *_mOfClause;
    NSMutableString *_mOldMatchingClause;
    NSMutableString *_mNewMatchingClause;
    NSMutableString *_mColumnChangedClause;
    NSMutableArray *_mSqlDropStrings;
    NSMutableArray *_mBulkChangeStrings;
    NSArray *_insertSQLStrings;
}

@property(readonly, nonatomic) NSArray *insertSQLStrings; // @synthesize insertSQLStrings=_insertSQLStrings;
@property(readonly) NSString *predicateString; // @synthesize predicateString=_predicateString;
@property(readonly) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly) NSArray *destinationAttributes; // @synthesize destinationAttributes=_destinationAttributes;
@property(readonly) NSSQLEntity *destinationEntity; // @synthesize destinationEntity=_destinationEntity;
@property(readonly) NSSQLRelationship *relationship; // @synthesize relationship=_relationship;
@property(readonly) NSSQLEntity *entity; // @synthesize entity=_entity;
@property(readonly) NSSQLAttribute *attribute; // @synthesize attribute=_attribute;
- (BOOL)validateComparisonPredicate:(id)arg1 error:(id *)arg2;
- (id)inverseOperatorSymbolForOperator:(id)arg1;
- (BOOL)isSupportedOperatorType:(unsigned long long)arg1;
- (BOOL)validatePredicate:(id)arg1 error:(id *)arg2;
- (BOOL)parseTriggerPredicateError:(id *)arg1;
- (id)createSQLStrings:(id *)arg1;
- (BOOL)validate:(id *)arg1;
@property(readonly, nonatomic) NSArray *dropSQLStrings;
@property(readonly, nonatomic) NSArray *bulkUpdateSQLStrings;
@property(readonly) NSString *columnChangedClause;
@property(readonly) NSString *newMatchingClause;
@property(readonly) NSString *oldMatchingClause;
@property(readonly) NSString *ofClause;
@property(readonly) NSString *toManyInnerFetchWhereClause;
@property(readonly) NSString *toManyIncrementWhenClause;
@property(readonly) NSString *toManyDecrementWhenClause;
- (BOOL)isEqualToExtension:(id)arg1;
- (void)dealloc;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

