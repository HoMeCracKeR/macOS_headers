//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ABCreatePersonCommand, ABPerson, ABPersonEntry;

@protocol ABCreatePersonCommandDelegate <NSObject>
- (void)createPersonCommand:(ABCreatePersonCommand *)arg1 updatePredicateWithPerson:(ABPerson *)arg2 entry:(ABPersonEntry *)arg3;
@end

