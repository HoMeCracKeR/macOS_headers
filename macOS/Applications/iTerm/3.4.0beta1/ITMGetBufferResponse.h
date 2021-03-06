//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class ITMCoord, ITMRange, ITMWindowedCoordRange, NSMutableArray;

@interface ITMGetBufferResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) ITMCoord *cursor; // @dynamic cursor;
@property(nonatomic) BOOL hasCursor; // @dynamic hasCursor;
@property(nonatomic) BOOL hasNumLinesAboveScreen; // @dynamic hasNumLinesAboveScreen;
@property(nonatomic) BOOL hasRange; // @dynamic hasRange;
@property(nonatomic) BOOL hasStatus; // @dynamic hasStatus;
@property(nonatomic) BOOL hasWindowedCoordRange; // @dynamic hasWindowedCoordRange;
@property(nonatomic) long long numLinesAboveScreen; // @dynamic numLinesAboveScreen;
@property(retain, nonatomic) ITMRange *range; // @dynamic range;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) ITMWindowedCoordRange *windowedCoordRange; // @dynamic windowedCoordRange;

@end

