//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface FMFWildcardGestureRecognizer : NSGestureRecognizer
{
    CDUnknownBlockType _pressureCallback;
    CDUnknownBlockType _touchesBeganCallback;
    CDUnknownBlockType _touchesEndedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType touchesEndedCallback; // @synthesize touchesEndedCallback=_touchesEndedCallback;
@property(copy, nonatomic) CDUnknownBlockType touchesBeganCallback; // @synthesize touchesBeganCallback=_touchesBeganCallback;
@property(copy, nonatomic) CDUnknownBlockType pressureCallback; // @synthesize pressureCallback=_pressureCallback;
- (void).cxx_destruct;
- (void)pressureChangeWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (id)init;

@end

