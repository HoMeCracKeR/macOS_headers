//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "BAObject.h"

@class NSString, SKAlert;

@interface BAAlert : BAObject
{
    SKAlert *_alert;
}

+ (id)attributeKeys;
+ (id)webScriptSelectorMapping;
@property(readonly, nonatomic) SKAlert *alert; // @synthesize alert=_alert;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak NSString *partnerNameDCURI;
@property(readonly, nonatomic) __weak NSString *partnerLogoDCURI;
@property(readonly, nonatomic) __weak NSString *partnerHistoryDCURI;
@property(readonly, nonatomic) __weak NSString *partnerHeaderDCURI;
@property(readonly, nonatomic) __weak NSString *partnerEventDCURI;
@property(readonly, nonatomic) __weak NSString *messageHeaderTitle;
@property(readonly, nonatomic) __weak NSString *messageHeaderSubject;
@property(readonly, nonatomic) __weak NSString *messageHeaderLater;
@property(readonly, nonatomic) __weak NSString *messageHeaderCaption;
@property(readonly, nonatomic) __weak NSString *messageHeaderCancel;
@property(readonly, nonatomic) __weak NSString *messageFooter;
@property(readonly, nonatomic) __weak NSString *messageContent;
@property(readonly, nonatomic) __weak NSString *messageButtonURI;
@property(readonly, nonatomic) __weak NSString *messageButtonCaption;
@property(readonly, nonatomic) unsigned long long partnerID;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) unsigned long long timestamp;
@property(readonly, nonatomic) unsigned long long priority;
@property(readonly, nonatomic) BOOL isUnseen;
- (void)delete;
- (void)markSeen;
- (id)initWithSKAlert:(id)arg1 securityContext:(id)arg2;

@end

