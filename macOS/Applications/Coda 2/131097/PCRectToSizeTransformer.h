//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSValueTransformer.h"

__attribute__((visibility("hidden")))
@interface PCRectToSizeTransformer : NSValueTransformer
{
    double iTransformHeightDelta;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
@property double transformHeightDelta; // @synthesize transformHeightDelta=iTransformHeightDelta;
- (id)transformedValue:(id)arg1;

@end

