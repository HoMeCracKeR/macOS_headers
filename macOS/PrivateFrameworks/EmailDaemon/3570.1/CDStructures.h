//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct objc_method_description {
    SEL _field1;
    char *_field2;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    char *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_f0c997a8;

typedef struct {
    long long *list;
    unsigned long long count;
    unsigned long long size;
} CDStruct_5df41632;

typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int mailboxId:1;
    unsigned int messageId:1;
    unsigned int mailboxType:1;
    unsigned int value:1;
} CDStruct_1b0f2210;

// Ambiguous groups
typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int fromMailboxId:1;
    unsigned int messageId:1;
    unsigned int toMailboxId:1;
    unsigned int fromMailboxType:1;
    unsigned int toMailboxType:1;
} CDStruct_b83e950b;

typedef struct {
    unsigned int accountId:1;
    unsigned int conversationId:1;
    unsigned int mailboxId:1;
    unsigned int messageId:1;
    unsigned int mailboxType:1;
} CDStruct_11e5c17e;

