//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AbstractMessage {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct MessageHeader *_field4;
};

struct AbstractPart {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    struct String *_field5;
    struct String *_field6;
    struct String *_field7;
    struct String *_field8;
    struct String *_field9;
    struct String *_field10;
    _Bool _field11;
    _Bool _field12;
    int _field13;
    struct HashMap *_field14;
};

struct AccountValidator {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct OperationCallback *_field4;
    _Bool _field5;
    _Bool _field6;
    struct _opaque_pthread_mutex_t _field7;
    id _field8;
    CDUnknownFunctionPointerType *_field9;
    CDUnknownFunctionPointerType *_field10;
    struct String *_field11;
    struct String *_field12;
    struct String *_field13;
    struct String *_field14;
    struct Array *_field15;
    struct Array *_field16;
    struct Array *_field17;
    struct String *_field18;
    struct NetService *_field19;
    struct NetService *_field20;
    struct NetService *_field21;
    int _field22;
    int _field23;
    int _field24;
    struct String *_field25;
    struct MailProvider *_field26;
    int _field27;
    int _field28;
    struct Operation *_field29;
    struct OperationQueue *_field30;
    struct MXRecordResolverOperation *_field31;
    struct IMAPAsyncSession *_field32;
    struct POPAsyncSession *_field33;
    struct SMTPAsyncSession *_field34;
    _Bool _field35;
    _Bool _field36;
    _Bool _field37;
    struct _opaque_pthread_mutex_t _field38;
    struct ConnectionLogger *_field39;
};

struct Address {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    struct String *_field5;
};

struct Array {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct carray_s *_field4;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct ConnectionLogger;

struct Data {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    char *_field4;
    unsigned int _field5;
    unsigned int _field6;
    _Bool _field7;
    CDUnknownFunctionPointerType _field8;
};

struct HashMap {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    void **_field6;
};

struct IMAPAsyncConnection;

struct IMAPAsyncSession {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct Array *_field4;
    struct String *_field5;
    unsigned int _field6;
    struct String *_field7;
    struct String *_field8;
    struct String *_field9;
    int _field10;
    int _field11;
    _Bool _field12;
    _Bool _field13;
    struct IMAPNamespace *_field14;
    long long _field15;
    _Bool _field16;
    unsigned int _field17;
    struct ConnectionLogger *_field18;
    _Bool _field19;
    struct IMAPIdentity *_field20;
    struct IMAPIdentity *_field21;
    _Bool _field22;
    struct OperationQueueCallback *_field23;
    id _field24;
    struct String *_field25;
    _Bool _field26;
};

struct IMAPFolder {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    char _field5;
    int _field6;
};

struct IMAPFolderInfo {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned long long _field6;
    int _field7;
    unsigned int _field8;
    _Bool _field9;
};

struct IMAPFolderStatus {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned long long _field9;
};

struct IMAPIdentity {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct HashMap *_field4;
};

struct IMAPNamespace {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct Array *_field4;
};

struct IMAPNamespaceItem {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    char _field4;
    struct String *_field5;
};

struct IMAPOperation {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct OperationCallback *_field4;
    _Bool _field5;
    _Bool _field6;
    struct _opaque_pthread_mutex_t _field7;
    id _field8;
    CDUnknownFunctionPointerType *_field9;
    struct IMAPAsyncSession *_field10;
    struct IMAPAsyncConnection *_field11;
    struct String *_field12;
    struct IMAPOperationCallback *_field13;
    int _field14;
    _Bool _field15;
};

struct IMAPOperationCallback;

struct IMAPSearchExpression {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    int _field4;
    struct String *_field5;
    struct String *_field6;
    unsigned long long _field7;
    struct IndexSet *_field8;
    struct IndexSet *_field9;
    struct IMAPSearchExpression *_field10;
    struct IMAPSearchExpression *_field11;
};

struct IndexSet {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct Range *_field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct MCOIMAPBaseOperationIMAPCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MCOIMAPCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    CDUnknownFunctionPointerType *_field5;
    id _field6;
};

struct MCONNTPCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    CDUnknownFunctionPointerType *_field5;
    id _field6;
};

struct MCONNTPFetchArticleOperationCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MCONNTPPostOperationCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MCOOperationCompletionCallback {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    id _field5;
};

struct MCOPOPCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    CDUnknownFunctionPointerType *_field5;
    id _field6;
};

struct MCOPOPFetchMessageOperationCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MCOSMTPCallbackBridge {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    CDUnknownFunctionPointerType *_field5;
    id _field6;
};

struct MCOSMTPSendOperationCallback {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct MCOValidatorOperationCallback {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    CDUnknownFunctionPointerType *_field4;
    CDUnknownFunctionPointerType *_field5;
    id _field6;
};

struct MXRecordResolverOperation;

struct MailProvider {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    struct Array *_field5;
    struct Array *_field6;
    struct Array *_field7;
    struct Array *_field8;
    struct Array *_field9;
    struct Array *_field10;
    struct HashMap *_field11;
};

struct MessageHeader {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    _Bool _field5;
    struct Array *_field6;
    struct Array *_field7;
    struct Address *_field8;
    struct Address *_field9;
    struct Array *_field10;
    struct Array *_field11;
    struct Array *_field12;
    struct Array *_field13;
    struct String *_field14;
    long long _field15;
    long long _field16;
    struct HashMap *_field17;
};

struct NNTPAsyncSession {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct NNTPSession *_field4;
    struct OperationQueue *_field5;
    struct NNTPOperationQueueCallback *_field6;
    struct ConnectionLogger *_field7;
    struct _opaque_pthread_mutex_t _field8;
    struct NNTPConnectionLogger *_field9;
    struct OperationQueueCallback *_field10;
};

struct NNTPConnectionLogger;

struct NNTPGroupInfo {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    unsigned int _field5;
};

struct NNTPOperation {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct OperationCallback *_field4;
    _Bool _field5;
    _Bool _field6;
    struct _opaque_pthread_mutex_t _field7;
    id _field8;
    CDUnknownFunctionPointerType *_field9;
    struct NNTPAsyncSession *_field10;
    struct NNTPOperationCallback *_field11;
    int _field12;
};

struct NNTPOperationCallback;

struct NNTPOperationQueueCallback;

struct NNTPSession;

struct NetService {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct String *_field4;
    unsigned int _field5;
    int _field6;
};

struct Object {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
};

struct Operation {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct OperationCallback *_field4;
    _Bool _field5;
    _Bool _field6;
    struct _opaque_pthread_mutex_t _field7;
    id _field8;
};

struct OperationCallback;

struct OperationQueue;

struct OperationQueueCallback;

struct POPAsyncSession {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct POPSession *_field4;
    struct OperationQueue *_field5;
    struct POPOperationQueueCallback *_field6;
    struct ConnectionLogger *_field7;
    struct _opaque_pthread_mutex_t _field8;
    struct POPConnectionLogger *_field9;
    struct OperationQueueCallback *_field10;
};

struct POPConnectionLogger;

struct POPMessageInfo {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct String *_field6;
};

struct POPOperation {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct OperationCallback *_field4;
    _Bool _field5;
    _Bool _field6;
    struct _opaque_pthread_mutex_t _field7;
    id _field8;
    CDUnknownFunctionPointerType *_field9;
    struct POPAsyncSession *_field10;
    struct POPOperationCallback *_field11;
    int _field12;
};

struct POPOperationCallback;

struct POPOperationQueueCallback;

struct POPSession;

struct Range;

struct SMTPAsyncSession {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct SMTPSession *_field4;
    struct OperationQueue *_field5;
    struct SMTPOperationQueueCallback *_field6;
    struct ConnectionLogger *_field7;
    struct _opaque_pthread_mutex_t _field8;
    struct SMTPConnectionLogger *_field9;
    struct OperationQueueCallback *_field10;
};

struct SMTPConnectionLogger;

struct SMTPOperationQueueCallback;

struct SMTPSession;

struct Set {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    struct HashMap *_field4;
};

struct String {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    unsigned short *_field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct Value {
    CDUnknownFunctionPointerType *_field1;
    int _field2;
    int _field3;
    int _field4;
    union {
        _Bool _field1;
        char _field2;
        unsigned char _field3;
        short _field4;
        unsigned short _field5;
        int _field6;
        unsigned int _field7;
        long long _field8;
        unsigned long long _field9;
        long long _field10;
        unsigned long long _field11;
        float _field12;
        double _field13;
        void *_field14;
        struct {
            char *_field1;
            int _field2;
        } _field15;
    } _field5;
};

struct _LIBSSH2_SFTP_ATTRIBUTES {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _opaque_pthread_mutex_t {
    long long _field1;
    char _field2[56];
};

struct _xmlDoc {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    int _field10;
    int _field11;
    struct _xmlDtd *_field12;
    struct _xmlDtd *_field13;
    struct _xmlNs *_field14;
    char *_field15;
    char *_field16;
    void *_field17;
    void *_field18;
    char *_field19;
    int _field20;
    struct _xmlDict *_field21;
    void *_field22;
    int _field23;
    int _field24;
};

struct _xmlDtd;

struct _xmlNode {
    void *_field1;
    int _field2;
    char *_field3;
    struct _xmlNode *_field4;
    struct _xmlNode *_field5;
    struct _xmlNode *_field6;
    struct _xmlNode *_field7;
    struct _xmlNode *_field8;
    struct _xmlDoc *_field9;
    struct _xmlNs *_field10;
    char *_field11;
    struct _xmlAttr *_field12;
    struct _xmlNs *_field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
};

struct _xmlNs;

struct _xmlXPathObject {
    int _field1;
    struct _xmlNodeSet *_field2;
    int _field3;
    double _field4;
    char *_field5;
    void *_field6;
    int _field7;
    void *_field8;
    int _field9;
};

struct carray_s;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

