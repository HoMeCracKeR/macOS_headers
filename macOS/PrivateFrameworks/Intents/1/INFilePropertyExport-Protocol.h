//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@protocol INFilePropertyExport <NSObject, JSExport>
@property(copy) NSNumber *quantity;
@property(copy) NSString *value;
@property(copy) INPerson *person;
@property(copy) INDateComponentsRange *dateComponentsRange;
@property(copy) NSString *type;
@property(copy) NSString *qualifier;
@property(copy) NSString *name;
- (id)init;
@end

