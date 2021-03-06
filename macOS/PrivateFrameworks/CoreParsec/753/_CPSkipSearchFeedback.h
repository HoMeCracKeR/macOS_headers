//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_CPProcessableFeedback.h"
#import "_CPSkipSearchFeedback.h"

@class NSData, NSDictionary, NSString;

@interface _CPSkipSearchFeedback : PBCodable <_CPProcessableFeedback, _CPSkipSearchFeedback, NSSecureCoding>
{
    int _triggerEvent;
    unsigned long long _timestamp;
    NSString *_input;
}

- (void).cxx_destruct;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)init;
- (id)initWithTriggerEvent:(int)arg1 input:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

