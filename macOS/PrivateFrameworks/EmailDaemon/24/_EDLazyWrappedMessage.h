//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage
{
    long long _databaseID;
    EDMessagePersistence *_messagePersistence;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
- (long long)databaseID;
- (id)initWithMessage:(id)arg1 messagePersistence:(id)arg2;

@end

