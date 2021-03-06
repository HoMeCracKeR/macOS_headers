//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSKeyedUnarchiver.h"

@class ABAddressBook;

@interface ABKeyedUnarchiver : NSKeyedUnarchiver
{
    ABAddressBook *_addressBook;
}

+ (id)unarchiveObjectWithData:(id)arg1 addressBook:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) ABAddressBook *addressBook; // @synthesize addressBook=_addressBook;
- (void).cxx_destruct;
- (id)initForReadingWithData:(id)arg1 addressBook:(id)arg2 error:(id *)arg3;

@end

