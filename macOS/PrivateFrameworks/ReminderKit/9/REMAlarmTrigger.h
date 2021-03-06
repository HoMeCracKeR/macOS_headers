//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "REMObjectIDProviding.h"

@class REMObjectID;

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding>
{
    REMObjectID *_objectID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (void)encodeWithCoder:(id)arg1;
- (id)_deepCopy;
- (BOOL)isContentEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) BOOL isTemporal;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithAlarmTrigger:(id)arg1 objectID:(id)arg2;
- (id)initWithObjectID:(id)arg1;

@end

