//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCMessageHeaders, MFMessageWritePreparedStatements, NSArray, NSData, NSString, NSUUID;

@interface MFDatabaseWritableMessage : NSObject
{
    char *_color;
    BOOL _messageType;
    int _automatedConversationType;
    int _rootStatus;
    int _conversationPosition;
    int _dateReceived;
    int _dateSent;
    int _dateViewed;
    long long _subjectID;
    long long _senderID;
    long long _conversationID;
    long long _mailboxID;
    long long _fuzzyAncestor;
    unsigned long long _size;
    long long _flags;
    NSString *_sender;
    NSString *_subjectPrefixString;
    NSString *_subject;
    NSData *_messageIDHeaderDigest;
    NSString *_remoteMailboxIDString;
    NSArray *_toRecipients;
    NSUUID *_documentID;
    MCMessageHeaders *_headers;
    NSArray *_references;
    MFMessageWritePreparedStatements *_preparedStatements;
    NSData *_inReplyToHeaderDigest;
}

@property(copy, nonatomic) NSData *inReplyToHeaderDigest; // @synthesize inReplyToHeaderDigest=_inReplyToHeaderDigest;
@property(readonly, nonatomic) MFMessageWritePreparedStatements *preparedStatements; // @synthesize preparedStatements=_preparedStatements;
@property(copy, nonatomic) NSArray *references; // @synthesize references=_references;
@property(retain, nonatomic) MCMessageHeaders *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSUUID *documentID; // @synthesize documentID=_documentID;
@property(copy, nonatomic) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(copy, nonatomic) NSString *remoteMailboxIDString; // @synthesize remoteMailboxIDString=_remoteMailboxIDString;
@property(copy, nonatomic) NSData *messageIDHeaderDigest; // @synthesize messageIDHeaderDigest=_messageIDHeaderDigest;
@property(copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(copy, nonatomic) NSString *subjectPrefixString; // @synthesize subjectPrefixString=_subjectPrefixString;
@property(copy, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) long long flags; // @synthesize flags=_flags;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) BOOL messageType; // @synthesize messageType=_messageType;
@property(nonatomic) int dateViewed; // @synthesize dateViewed=_dateViewed;
@property(nonatomic) int dateSent; // @synthesize dateSent=_dateSent;
@property(nonatomic) int dateReceived; // @synthesize dateReceived=_dateReceived;
@property(nonatomic) int conversationPosition; // @synthesize conversationPosition=_conversationPosition;
@property(nonatomic) int rootStatus; // @synthesize rootStatus=_rootStatus;
@property(nonatomic) int automatedConversationType; // @synthesize automatedConversationType=_automatedConversationType;
@property(nonatomic) long long fuzzyAncestor; // @synthesize fuzzyAncestor=_fuzzyAncestor;
@property(nonatomic) long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property(nonatomic) long long conversationID; // @synthesize conversationID=_conversationID;
@property(nonatomic) long long senderID; // @synthesize senderID=_senderID;
@property(nonatomic) long long subjectID; // @synthesize subjectID=_subjectID;
- (void).cxx_destruct;
- (long long)_rowIDForSubject:(id)arg1 subjectRowIDsCache:(id)arg2 cacheIsExhaustive:(BOOL)arg3;
- (id)propertyListFromMessage:(id)arg1 remoteID:(id)arg2 gmailLabels:(id)arg3;
- (void)setupLibraryMessage:(id)arg1 fromMessage:(id)arg2;
- (void)bindFieldsToPreparedStatement:(id)arg1 isUpdate:(BOOL)arg2;
- (BOOL)updateFieldsFromMessage:(id)arg1 subjectRowIDsCache:(id)arg2 addressRowIDsCache:(id)arg3 cacheIsExhaustive:(BOOL)arg4;
- (long long)_rowIDForAddress:(id)arg1 comment:(id)arg2;
- (long long)_rowIDForAddressText:(id)arg1 cache:(id)arg2 cacheIsExhaustive:(BOOL)arg3;
- (BOOL)_insertRecipientsWithMessageID:(long long)arg1 recipients:(id)arg2 recipientType:(BOOL)arg3 position:(unsigned long long)arg4 addressRowIDsCache:(id)arg5 cacheIsExhaustive:(BOOL)arg6;
- (BOOL)insertRecpientsWithMessageID:(long long)arg1 fromMessage:(id)arg2 addressRowIDsCache:(id)arg3 cacheIsExhaustive:(BOOL)arg4;
- (void)insertCalendarEvent:(id)arg1 withMessageID:(long long)arg2;
- (void)insertAttachmentsWithMessageID:(long long)arg1 fromMessage:(id)arg2;
- (BOOL)insertReferencesWithMessageID:(long long)arg1;
- (void)updateFieldsFromLibraryWithMessageRowID:(long long)arg1;
@property(nonatomic) char *color;
- (void)dealloc;
- (id)init;
- (id)initWithPreparedStatements:(id)arg1;

@end

