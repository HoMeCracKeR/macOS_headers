//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<NSSecureCoding>, WKWebView;

@protocol _WKInputDelegate <NSObject>

@optional
- (void)_webView:(WKWebView *)arg1 willSubmitFormValues:(NSDictionary *)arg2 userObject:(NSObject<NSSecureCoding> *)arg3 submissionHandler:(void (^)(void))arg4;
- (void)_webView:(WKWebView *)arg1 didStartInputSession:(id <_WKFormInputSession>)arg2;
@end

