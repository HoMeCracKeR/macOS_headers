//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/WebItemProviderRegistrar-Protocol.h>

@class NSData, NSString;
@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar>
{
    struct RetainPtr<NSString> _typeIdentifier;
    struct BlockPtr<void (void (^)(NSURL *, NSError *))> _callback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *typeIdentifier;
- (void)registerItemProvider:(id)arg1;
- (id)initWithType:(id)arg1 callback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;

@end

