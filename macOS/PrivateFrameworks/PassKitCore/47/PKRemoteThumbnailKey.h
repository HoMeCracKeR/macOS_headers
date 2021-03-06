//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface PKRemoteThumbnailKey : NSObject <NSCopying>
{
    NSString *_requestIdentifier;
    NSDictionary *_requestDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *requestDictionary; // @synthesize requestDictionary=_requestDictionary;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
- (BOOL)isEqualToRemoteThumbnailKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

