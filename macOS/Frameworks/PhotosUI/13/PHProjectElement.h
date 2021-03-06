//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PHProjectElement : NSObject <NSSecureCoding>
{
    double _weight;
    struct CGRect _placement;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) struct CGRect placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) double weight; // @synthesize weight=_weight;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)description:(BOOL)arg1;
- (id)descriptionStart:(BOOL)arg1;
- (id)initWithWeight:(id)arg1 placement:(struct CGRect)arg2;

@end

