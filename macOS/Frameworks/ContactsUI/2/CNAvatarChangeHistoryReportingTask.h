//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CNTask.h"

@class NSArray;

@interface CNAvatarChangeHistoryReportingTask : CNTask
{
    NSArray *_identifiers;
    id <CNAvatarCacheChangeListenerDelegate> _delegate;
}

@property(readonly, nonatomic) id <CNAvatarCacheChangeListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (id)run:(id *)arg1;
- (id)initWithIdentifiers:(id)arg1 delegate:(id)arg2;

@end

