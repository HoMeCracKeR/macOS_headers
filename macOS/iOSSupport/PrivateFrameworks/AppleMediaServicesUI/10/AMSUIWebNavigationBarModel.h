//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUIWebModel.h>

@class AMSUIWebButtonModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebNavigationBarModel : AMSUIWebModel
{
    BOOL _hidesBackButton;
    NSString *_backButtonTitle;
    AMSUIWebButtonModel *_leftButton;
    AMSUIWebButtonModel *_rightButton;
    long long _style;
    NSString *_title;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) AMSUIWebButtonModel *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) AMSUIWebButtonModel *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) BOOL hidesBackButton; // @synthesize hidesBackButton=_hidesBackButton;
@property(retain, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;

@end

