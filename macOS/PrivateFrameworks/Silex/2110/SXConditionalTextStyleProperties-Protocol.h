//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>
#import <Silex/SXTextStyleFontDescribing-Protocol.h>

@class SXJSONArray, SXShadow, SXTextDecoration, SXTextStroke, UIColor;

@protocol SXConditionalTextStyleProperties <NSObject, SXTextStyleFontDescribing>
@property(readonly, nonatomic) SXTextStroke *stroke;
@property(readonly, nonatomic) int verticalAlignment;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) SXJSONArray *listStyle;
@property(readonly, nonatomic) SXTextDecoration *strikethrough;
@property(readonly, nonatomic) SXTextDecoration *underline;
@property(readonly, nonatomic) double tracking;
@property(readonly, nonatomic) long long textTransform;
@property(readonly, nonatomic) SXShadow *textShadow;
@property(readonly, nonatomic) UIColor *textColor;
@property(readonly, nonatomic) long long fontSize;
@end

