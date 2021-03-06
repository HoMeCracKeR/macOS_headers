//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DigiHubEvent : NSObject
{
    NSString *_event;
    int _action;
    int _defaultAction;
    NSURL *_app;
    NSURL *_script;
    unsigned int _aeEventID;
    BOOL _performAtLogin;
}

+ (id)digiHubEvent:(id)arg1 withDictionary:(id)arg2 defaultAction:(int)arg3 appleEventID:(unsigned int)arg4;
+ (id)digiHubEvent:(id)arg1 defaultAction:(int)arg2 appleEventID:(unsigned int)arg3 performAtLogin:(BOOL)arg4;
@property(retain, nonatomic) NSURL *script; // @synthesize script=_script;
@property(retain, nonatomic) NSURL *app; // @synthesize app=_app;
@property(readonly, nonatomic) BOOL performAtLogin; // @synthesize performAtLogin=_performAtLogin;
@property(nonatomic) int defaultAction; // @synthesize defaultAction=_defaultAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(readonly, nonatomic) unsigned int appleEventID; // @synthesize appleEventID=_aeEventID;
@property(readonly, nonatomic) NSString *event; // @synthesize event=_event;
- (id)createDictionary;
- (void)dealloc;
- (id)initWithEvent:(id)arg1 action:(int)arg2 app:(id)arg3 script:(id)arg4 defaultAction:(int)arg5 appleEventID:(unsigned int)arg6 performAtLogin:(BOOL)arg7;
- (id)initWithEvent:(id)arg1 withDictionary:(id)arg2 defaultAction:(int)arg3 appleEventID:(unsigned int)arg4;

@end

