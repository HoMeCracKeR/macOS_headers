//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBAUTHInvalidAccountTypeError, DBAUTHPaperAccessError, NSString;

@interface DBAUTHAccessError : NSObject <DBSerializable, NSCopying>
{
    DBAUTHInvalidAccountTypeError *_invalidAccountType;
    DBAUTHPaperAccessError *_paperAccessDenied;
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (BOOL)isEqualToAccessError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isOther;
- (BOOL)isPaperAccessDenied;
- (BOOL)isInvalidAccountType;
@property(readonly, nonatomic) DBAUTHPaperAccessError *paperAccessDenied; // @synthesize paperAccessDenied=_paperAccessDenied;
@property(readonly, nonatomic) DBAUTHInvalidAccountTypeError *invalidAccountType; // @synthesize invalidAccountType=_invalidAccountType;
- (id)initWithOther;
- (id)initWithPaperAccessDenied:(id)arg1;
- (id)initWithInvalidAccountType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

