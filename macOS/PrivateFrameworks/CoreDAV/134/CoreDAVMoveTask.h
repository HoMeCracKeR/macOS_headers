//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@class NSString;

@interface CoreDAVMoveTask : CoreDAVCopyOrMoveTask
{
    NSString *_previousETag;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVMoveTaskDelegate> delegate; // @dynamic delegate;

@end

