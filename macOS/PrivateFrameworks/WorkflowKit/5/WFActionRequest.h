//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, WFAction;

@interface WFActionRequest : NSObject
{
    NSString *_actionIdentifier;
    NSDictionary *_serializedParameters;
    WFAction *_result;
}

@property(retain, nonatomic) WFAction *result; // @synthesize result=_result;
@property(readonly, nonatomic) NSDictionary *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(readonly, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithActionIdentifier:(id)arg1 serializedParameters:(id)arg2;

@end

