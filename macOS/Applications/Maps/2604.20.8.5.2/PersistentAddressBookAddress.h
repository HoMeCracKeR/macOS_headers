//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PersistentAddressBookAddress : PBCodable <NSCopying>
{
    double _position;
    int _addressID;
    int _recordID;
    NSString *_syncIdentifier;
    struct {
        unsigned int position:1;
        unsigned int addressID:1;
        unsigned int recordID:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) double position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;
@property(nonatomic) int addressID; // @synthesize addressID=_addressID;
@property(nonatomic) int recordID; // @synthesize recordID=_recordID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPosition;
@property(readonly, nonatomic) BOOL hasSyncIdentifier;
@property(nonatomic) BOOL hasAddressID;
@property(nonatomic) BOOL hasRecordID;

@end

