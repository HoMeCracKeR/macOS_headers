//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermEventTapRemappingDelegate.h"

@class NSString, iTermEventTap;

@interface iTermModifierRemapper : NSObject <iTermEventTapRemappingDelegate>
{
    iTermEventTap *_keyDown;
}

+ (id)sharedInstance;
- (int)boundActionForEvent:(id)arg1;
- (struct __CGEvent *)eventByRemappingEvent:(struct __CGEvent *)arg1;
- (struct __CGEvent *)remappedEventFromEventTappedWithType:(unsigned int)arg1 event:(struct __CGEvent *)arg2;
- (id)accessibilityActionMessage;
- (id)accessibilityMessageForModifier;
- (void)requestAccessibilityPermission;
- (void)stopRemappingModifiers;
- (void)beginRemappingModifiers;
- (id)keyDown;
@property(readonly, nonatomic) BOOL isAnyModifierRemapped;
@property(readonly, nonatomic) int rightCommandRemapping;
@property(readonly, nonatomic) int leftCommandRemapping;
@property(readonly, nonatomic) int rightOptionRemapping;
@property(readonly, nonatomic) int leftOptionRemapping;
@property(readonly, nonatomic) int controlRemapping;
@property(nonatomic, getter=isRemappingModifiers) BOOL remapModifiers;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

