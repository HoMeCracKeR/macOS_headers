//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CKEventOperationInfo : NSObject <NSSecureCoding>
{
    NSString *_operationID;
    NSString *_operationType;
    NSString *_operationGroupID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *operationGroupID; // @synthesize operationGroupID=_operationGroupID;
@property(readonly, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperation:(id)arg1;

@end

