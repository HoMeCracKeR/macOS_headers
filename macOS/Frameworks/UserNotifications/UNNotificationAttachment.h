//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSURL *_URL;
    NSString *_type;
    unsigned long long _family;
    UNNotificationAttachmentOptions *_options;
}

+ (BOOL)supportsSecureCoding;
+ (id)attachmentWithIdentifier:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id *)arg4;
+ (unsigned long long)stagingActionForAttachmentURL:(id)arg1 bundleProxy:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) UNNotificationAttachmentOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned long long family; // @synthesize family=_family;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1 family:(unsigned long long)arg2 URL:(id)arg3 type:(id)arg4 options:(id)arg5;
- (id)init;

@end

