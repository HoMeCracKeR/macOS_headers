//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSScriptRecordTypeDescription.h>

@class NSScriptClassDescription;

__attribute__((visibility("hidden")))
@interface NSScriptPropertiesRecordTypeDescription : NSScriptRecordTypeDescription
{
    NSScriptClassDescription *_containerClassDescription;
}

- (id)fieldDescriptionForKey:(id)arg1;
- (id)fieldDescriptionForAppleEventCode:(unsigned int)arg1;
- (id)errorExpectedTypeDescriptor;
- (unsigned int)appleEventCode;
- (id)name;
- (void)dealloc;
- (id)initWithContainerClassDescription:(id)arg1;
- (id)_descriptionWithTabCount:(unsigned long long)arg1;

@end

