//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KNMacEffectAttribute.h"

@class KNMacEffectMenuController, NSString;

@interface KNMacEffectToFromAttribute : KNMacEffectAttribute
{
    KNMacEffectMenuController *_fromButtonController;
    KNMacEffectMenuController *_toButtonController;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *toToolTip;
@property(copy, nonatomic) NSString *fromToolTip;
- (void)loadView;
- (id)initWithSelectedModelObjectsController:(id)arg1;
- (void)dealloc;

@end

