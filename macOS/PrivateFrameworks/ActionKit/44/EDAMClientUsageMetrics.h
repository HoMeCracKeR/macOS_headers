//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMClientUsageMetrics : FATObject
{
    NSNumber *_sessions;
    NSString *_subjectConsumerKey;
    NSString *_subjectConsumerSecret;
}

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subjectConsumerSecret; // @synthesize subjectConsumerSecret=_subjectConsumerSecret;
@property(retain, nonatomic) NSString *subjectConsumerKey; // @synthesize subjectConsumerKey=_subjectConsumerKey;
@property(retain, nonatomic) NSNumber *sessions; // @synthesize sessions=_sessions;

@end

