//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class EKParticipant, EKUIKeyViewButton, NSArray;
@protocol EKUIProposedTimeActionHandler;

@interface EKUIProposedTimeResponseView : NSView
{
    NSArray *_previousConstraints;
    EKParticipant *_proposingAttendee;
    id <EKUIProposedTimeActionHandler> _actionHandler;
    unsigned long long _orderIndex;
    EKUIKeyViewButton *_declineControl;
    EKUIKeyViewButton *_acceptControl;
}

@property(readonly) EKUIKeyViewButton *acceptControl; // @synthesize acceptControl=_acceptControl;
@property(readonly) EKUIKeyViewButton *declineControl; // @synthesize declineControl=_declineControl;
@property unsigned long long orderIndex; // @synthesize orderIndex=_orderIndex;
@property __weak id <EKUIProposedTimeActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain) EKParticipant *proposingAttendee; // @synthesize proposingAttendee=_proposingAttendee;
- (void).cxx_destruct;
- (BOOL)shouldDisplay;
- (void)acceptControlClicked:(id)arg1;
- (void)declineControlClicked:(id)arg1;
- (void)updateConstraints;
- (id)init;

@end

