//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPArtworkEventsProtocol.h"

@interface AMPArtworkEventsXPCObject : NSObject <AMPArtworkEventsProtocol>
{
    id <AMPArtworkEventsProtocol> _eventsDelegate;
}

@property(nonatomic) __weak id <AMPArtworkEventsProtocol> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
- (void).cxx_destruct;
- (void)notifyArtworkStatusChangedWithInfoArray:(id)arg1;

@end

