//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADShapeProperties, OADTextBodyProperties, OADTextListStyle;

@interface OADDrawableCategoryDefaults : NSObject
{
    OADShapeProperties *mShapeProperties;
    OADTextBodyProperties *mTextBodyProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)description;
- (id)textListStyle;
- (void)setTextListStyle:(id)arg1;
- (id)textBodyProperties;
- (void)setTextBodyProperties:(id)arg1;
- (id)shapeProperties;
- (void)setShapeProperties:(id)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (id)init;

@end

