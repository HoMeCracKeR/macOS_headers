//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ECSubjectParser : NSObject
{
}

+ (id)subjectWithoutPrefixForSubject:(id)arg1 prefix:(id *)arg2;
+ (id)subjectWithoutPrefixForSubject:(id)arg1;
+ (unsigned long long)_fastPrefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2;
+ (unsigned long long)_prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2;
+ (unsigned long long)_lastPrefixDelimiterLocationForSubject:(id)arg1;
+ (unsigned long long)prefixLengthForSubject:(id)arg1 replyOnly:(BOOL)arg2;
+ (unsigned long long)prefixLengthForSubject:(id)arg1;
+ (id)subjectWithoutPrefixIncludingListMarkersForSubject:(id)arg1 prefix:(id *)arg2;
+ (BOOL)subjectHasReplyPrefix:(id)arg1;

@end

