//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteMemoryEntity : NSObject <NSCopying>
{
    long long _databaseID;
    NSMutableDictionary *_propertyValues;
    NSMutableDictionary *_externalPropertyValues;
}

+ (id)defaultProperties;
+ (Class)databaseEntityClass;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;
- (void)setValuesWithDictionary:(id)arg1;
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;
- (id)init;

@end

