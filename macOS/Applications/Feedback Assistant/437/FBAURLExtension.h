//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBAURLExtension : NSObject
{
    NSString *_extensionIdentifier;
    NSDictionary *_parameters;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *extensionIdentifier; // @synthesize extensionIdentifier=_extensionIdentifier;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithExtensionIdentifier:(id)arg1 parameters:(id)arg2;

@end

