//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase
{
    NSString *_statusIdentifier;
    NSString *_statusExtensionPoint;
    NSString *_statusDisplayName;
    NSString *_statusContainerDisplayName;
    NSString *_statusContainerIdentifier;
    NSString *_statusPath;
    NSString *_statusVersion;
    NSString *_statusUserElection;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withPath:(id)arg4 withVersion:(id)arg5 withUserElection:(id)arg6;
+ (id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withContainerDisplayName:(id)arg4 withContainerIdentifier:(id)arg5 withPath:(id)arg6 withVersion:(id)arg7 withUserElection:(id)arg8;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSString *statusUserElection; // @synthesize statusUserElection=_statusUserElection;
@property(copy, nonatomic) NSString *statusVersion; // @synthesize statusVersion=_statusVersion;
@property(copy, nonatomic) NSString *statusPath; // @synthesize statusPath=_statusPath;
@property(copy, nonatomic) NSString *statusContainerIdentifier; // @synthesize statusContainerIdentifier=_statusContainerIdentifier;
@property(copy, nonatomic) NSString *statusContainerDisplayName; // @synthesize statusContainerDisplayName=_statusContainerDisplayName;
@property(copy, nonatomic) NSString *statusDisplayName; // @synthesize statusDisplayName=_statusDisplayName;
@property(copy, nonatomic) NSString *statusExtensionPoint; // @synthesize statusExtensionPoint=_statusExtensionPoint;
@property(copy, nonatomic) NSString *statusIdentifier; // @synthesize statusIdentifier=_statusIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

