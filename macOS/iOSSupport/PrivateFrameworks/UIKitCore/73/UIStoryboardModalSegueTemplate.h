//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStoryboardSegueTemplate.h>

__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate
{
    BOOL _useDefaultModalPresentationStyle;
    BOOL _useDefaultModalTransitionStyle;
    long long _modalPresentationStyle;
    long long _modalTransitionStyle;
}

@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle=_modalTransitionStyle;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(nonatomic) BOOL useDefaultModalTransitionStyle; // @synthesize useDefaultModalTransitionStyle=_useDefaultModalTransitionStyle;
@property(nonatomic) BOOL useDefaultModalPresentationStyle; // @synthesize useDefaultModalPresentationStyle=_useDefaultModalPresentationStyle;
- (CDUnknownBlockType)newDefaultPerformHandlerForSegue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

