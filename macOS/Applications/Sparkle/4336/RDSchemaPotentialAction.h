//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDSchemaContent.h"

@class NSMutableArray, NSSet, NSString;

@interface RDSchemaPotentialAction : RDSchemaContent
{
    BOOL _deliveryMethodPickUp;
    BOOL _deliveryMethodOwnFleet;
    int _actionType;
    NSString *_targetURL;
    NSString *_language;
    NSSet *_platforms;
    NSMutableArray *_deliveryCharges;
    NSString *_reservationResultName;
    NSString *_reservationProviderName;
}

@property(retain, nonatomic) NSString *reservationProviderName; // @synthesize reservationProviderName=_reservationProviderName;
@property(retain, nonatomic) NSString *reservationResultName; // @synthesize reservationResultName=_reservationResultName;
@property(retain, nonatomic) NSMutableArray *deliveryCharges; // @synthesize deliveryCharges=_deliveryCharges;
@property(nonatomic) BOOL deliveryMethodOwnFleet; // @synthesize deliveryMethodOwnFleet=_deliveryMethodOwnFleet;
@property(nonatomic) BOOL deliveryMethodPickUp; // @synthesize deliveryMethodPickUp=_deliveryMethodPickUp;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSSet *platforms; // @synthesize platforms=_platforms;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)jsonObject;
- (void)removeDeliveryChargeIndex:(long long)arg1;
- (void)addDeliveryCharge:(id)arg1;
- (id)details;
- (void)clear;
- (id)initWithTargetURL:(id)arg1 language:(id)arg2 platforms:(id)arg3 reservationResultName:(id)arg4 reservationProviderName:(id)arg5;
- (id)initWithTargetURL:(id)arg1 language:(id)arg2 platforms:(id)arg3 deliveryMethodPickUp:(BOOL)arg4 deliveryMethodOwnFleet:(BOOL)arg5;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

