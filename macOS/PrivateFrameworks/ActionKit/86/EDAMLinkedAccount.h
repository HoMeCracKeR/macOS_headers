//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMLinkedAccount : FATObject
{
    NSNumber *_inAccountUserId;
    NSString *_shardId;
    NSString *_guid;
    NSNumber *_updateSequenceNum;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSNumber *inAccountUserId; // @synthesize inAccountUserId=_inAccountUserId;
- (void).cxx_destruct;

@end

