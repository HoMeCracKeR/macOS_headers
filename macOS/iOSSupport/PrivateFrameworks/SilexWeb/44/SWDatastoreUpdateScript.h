//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexWeb/SWScript-Protocol.h>

@class NSString, SWDatastore, WKUserScript;
@protocol SWSession;

@interface SWDatastoreUpdateScript : NSObject <SWScript>
{
    SWDatastore *_datastore;
    SWDatastore *_oldDatastore;
    id <SWSession> _originatingSession;
}

+ (id)source;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SWSession> originatingSession; // @synthesize originatingSession=_originatingSession;
@property(readonly, nonatomic) SWDatastore *oldDatastore; // @synthesize oldDatastore=_oldDatastore;
@property(readonly, nonatomic) SWDatastore *datastore; // @synthesize datastore=_datastore;
@property(readonly, nonatomic) NSString *executableScript;
@property(readonly, nonatomic) BOOL queueable;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithDatastore:(id)arg1 oldDatastore:(id)arg2 originatingSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) WKUserScript *userScript;

@end

