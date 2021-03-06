//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNKPFAnimation.h"

@class NSString, NSValue;

@interface KNKPFBasicAnimation : KNKPFAnimation
{
    NSValue *_fromValue;
    NSValue *_toValue;
    NSString *_fromTexture;
    NSString *_toTexture;
}

@property(copy, nonatomic) NSString *toTexture; // @synthesize toTexture=_toTexture;
@property(copy, nonatomic) NSString *fromTexture; // @synthesize fromTexture=_fromTexture;
@property(retain, nonatomic) NSValue *toValue; // @synthesize toValue=_toValue;
@property(retain, nonatomic) NSValue *fromValue; // @synthesize fromValue=_fromValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFromKPFDictionary:(id)arg1 error:(out id *)arg2;

@end

