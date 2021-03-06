//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import <EventKit/EKProtocolNotificationBoxMessage-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSNumber, NSString;

@interface EKFrozenNotificationBoxMessage : EKFrozenObject <EKProtocolNotificationBoxMessage>
{
    NSNumber *messageTypeNumber;
    NSString *path;
}

+ (Class)meltedClass;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path;
@property(readonly, nonatomic) NSNumber *messageTypeNumber; // @synthesize messageTypeNumber;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

