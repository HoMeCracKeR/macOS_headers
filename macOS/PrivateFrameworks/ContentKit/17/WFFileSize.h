//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "WFNaming.h"
#import "WFSerializableContent.h"

@class NSString;

@interface WFFileSize : NSObject <NSSecureCoding, NSCopying, WFSerializableContent, WFNaming>
{
    long long _byteCount;
}

+ (BOOL)supportsSecureCoding;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
@property(readonly, nonatomic) long long byteCount; // @synthesize byteCount=_byteCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *formattedString;
- (id)initWithByteCount:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

