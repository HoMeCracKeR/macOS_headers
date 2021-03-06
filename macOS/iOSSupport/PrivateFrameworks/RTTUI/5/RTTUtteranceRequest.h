//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, TUCall;

@interface RTTUtteranceRequest : NSObject
{
    unsigned long long _index;
    NSString *_string;
    NSIndexPath *_cellIndexPath;
    TUCall *_call;
}

+ (id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3 call:(id)arg4;
@property(retain, nonatomic) TUCall *call; // @synthesize call=_call;
@property(nonatomic) __weak NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;

@end

