//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol INMoveFileIntentResponseExport <NSObject, JSExport>
@property(copy) NSString *destinationName;
@property(copy) NSString *sourceName;
@property(copy) NSArray *entityNames;
@property unsigned long long entityTypes;
@property(copy) NSNumber *success;
@property(copy) NSNumber *overwrite;
@property(readonly) long long code;
@end

