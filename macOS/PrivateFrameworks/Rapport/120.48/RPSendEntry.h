//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RPSendEntry : NSObject
{
    unsigned int _xpcID;
    CDUnknownBlockType _completion;
    NSData *_data;
    NSString *_requestID;
    NSDictionary *_request;
    CDUnknownBlockType _responseHandler;
}

@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;

@end

