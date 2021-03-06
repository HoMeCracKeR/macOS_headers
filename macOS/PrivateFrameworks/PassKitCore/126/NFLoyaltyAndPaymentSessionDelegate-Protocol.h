//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NFApplet, NFContactlessPaymentEndEvent, NFContactlessPaymentStartEvent, NFFieldNotification, NFLoyaltyAndPaymentSession, NFTechnologyEvent, NSArray, NSDictionary, NSString;

@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>

@optional
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(NFLoyaltyAndPaymentSession *)arg1 result:(NSString *)arg2;
- (void)loyaltyAndPaymentSessionDidReceiveActivityTimeout:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didFailDeferredAuthorization:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpressModeStateChange:(unsigned int)arg2 withObject:(NSString *)arg3;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpressModeStateChange:(unsigned int)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didFelicaStateChange:(NSDictionary *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didPerformValueAddedServiceTransactions:(NSArray *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didSelectValueAddedService:(BOOL)arg2;
- (void)loyaltyAndPaymentSessionHasPendingServerRequest:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didEndTransaction:(NFContactlessPaymentEndEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didStartTransaction:(NFContactlessPaymentStartEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpireTransactionForApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didReceiveButtonPressForApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didSelectApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSessionDidExitField:(NFLoyaltyAndPaymentSession *)arg1;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didEnterFieldWithNotification:(NFFieldNotification *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didDetectField:(BOOL)arg2;
@end

