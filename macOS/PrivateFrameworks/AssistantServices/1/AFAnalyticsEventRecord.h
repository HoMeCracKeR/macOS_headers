//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class AFAnalyticsEvent, NSDate, NSString;

@interface AFAnalyticsEventRecord : NSObject <NSSecureCoding>
{
    AFAnalyticsEvent *_event;
    NSString *_streamUID;
    NSDate *_dateCreated;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy, nonatomic) NSString *streamUID; // @synthesize streamUID=_streamUID;
@property(readonly, copy, nonatomic) AFAnalyticsEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3;

@end

