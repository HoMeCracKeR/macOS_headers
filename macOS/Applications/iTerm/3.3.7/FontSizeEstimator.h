//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FontSizeEstimator : NSObject
{
    struct CGSize size;
    double baseline;
}

+ (id)fontSizeEstimatorForFont:(id)arg1;
+ (id)textContainer;
+ (id)layoutManagerForFont:(id)arg1 textContainer:(id)arg2;
@property(nonatomic) struct CGSize size; // @synthesize size;
- (id)initWithSize:(struct CGSize)arg1 baseline:(double)arg2;

@end

