//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMXPCToken.h>

@class NSString;

@interface AMUnknownXPCToken : AMXPCToken
{
    NSString *_objectDescription;
    NSString *_classDescription;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSString *classDescription; // @synthesize classDescription=_classDescription;
@property(retain) NSString *objectDescription; // @synthesize objectDescription=_objectDescription;
- (void).cxx_destruct;
- (id)description;
- (id)_am_convertFromXPCWithWorkflow:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

