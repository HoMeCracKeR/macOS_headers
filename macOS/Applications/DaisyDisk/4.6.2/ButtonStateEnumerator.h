//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class ButtonStateStyles;

@interface ButtonStateEnumerator : NSEnumerator
{
    ButtonStateStyles *_styles;
    unsigned long long _currIndex;
    BOOL _isDone;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithStyles:(id)arg1;

@end

