//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOLocalTime : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct {
        unsigned int has_timeRoundedToHour:1;
        unsigned int has_timezoneOffsetFromGmtInHours:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimezoneOffsetFromGmtInHours;
@property(nonatomic) float timezoneOffsetFromGmtInHours;
@property(nonatomic) BOOL hasTimeRoundedToHour;
@property(nonatomic) unsigned long long timeRoundedToHour;
- (id)initWithCFAbsoluteTime:(double)arg1;
- (id)initWithDate:(id)arg1;

@end

