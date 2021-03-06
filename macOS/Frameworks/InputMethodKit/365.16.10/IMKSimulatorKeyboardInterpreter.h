//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IMKSimulatorKeyboardInterpreter : NSObject
{
    NSData *_keyboardLayoutData;
    NSString *_keyboardLayoutIdentifier;
}

+ (id)sharedKeyboardInterpreter;
@property(retain, nonatomic) NSString *keyboardLayoutIdentifier; // @synthesize keyboardLayoutIdentifier=_keyboardLayoutIdentifier;
@property(retain, nonatomic) NSData *keyboardLayoutData; // @synthesize keyboardLayoutData=_keyboardLayoutData;
- (id)modifiedEvent:(id)arg1;
- (void)rebuildKeyboardCache;
- (void)dealloc;

@end

