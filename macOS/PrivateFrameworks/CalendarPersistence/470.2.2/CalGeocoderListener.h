//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalPersistenceMonitor.h>

@class CalLimitingQueue;

@interface CalGeocoderListener : CalPersistenceMonitor
{
    CalLimitingQueue *_geocodingQueue;
    BOOL _userInitiatedLocationInterestWasChanged;
}

+ (id)sharedListener;
- (void).cxx_destruct;
- (void)managedObjectContextDidSave:(id)arg1;
- (void)managedObjectContextWillSave:(id)arg1;
- (id)init;
- (void)attemptGeocoding;

@end

