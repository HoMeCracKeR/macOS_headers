//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NURenderResult.h"

@class NSString;

@interface _NURenderResult : NSObject <NURenderResult>
{
    id <NURenderStatistics> _statistics;
}

- (void).cxx_destruct;
@property(retain) id <NURenderStatistics> statistics; // @synthesize statistics=_statistics;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

