//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@interface FTransformedEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _transform;
}

@property(copy, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
@property(retain, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 andTransform:(CDUnknownBlockType)arg2;

@end

