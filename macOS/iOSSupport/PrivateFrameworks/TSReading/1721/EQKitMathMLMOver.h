//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitMathMLBinaryNode.h>

#import <TSReading/EQKitLayoutSchemataUnderover-Protocol.h>

@class NSString;

@interface EQKitMathMLMOver : EQKitMathMLBinaryNode <EQKitLayoutSchemataUnderover>
{
}

- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (id)schemataOver;
- (id)schemataUnder;
- (id)schemataBase;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

