//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDDataStreamPendingRequest : NSObject
{
    NSNumber *_identifier;
    NSString *_topic;
    NSString *_protocol;
    CDUnknownBlockType _callback;
    NSDictionary *_payload;
}

@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSNumber *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)matchesResponseHeader:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 protocol:(id)arg2 topic:(id)arg3 payload:(id)arg4 callback:(CDUnknownBlockType)arg5;

@end

