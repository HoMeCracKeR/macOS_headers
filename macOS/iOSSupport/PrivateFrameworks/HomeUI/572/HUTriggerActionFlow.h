//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUTriggerActionFlow : NSObject
{
    BOOL _hasChangedState;
    unsigned long long _flowState;
}

+ (id)selectFlowForState:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL hasChangedState; // @synthesize hasChangedState=_hasChangedState;
@property(readonly, nonatomic) unsigned long long flowState; // @synthesize flowState=_flowState;
@property(readonly, nonatomic) BOOL isLastState;
@property(readonly, nonatomic) BOOL isSingleFlow;
@property(readonly, nonatomic) BOOL isFinished;
@property(readonly, nonatomic) BOOL isStandalone;
- (id)getNextState;
- (unsigned long long)_nextState;
- (id)initWithFlowState:(unsigned long long)arg1 hasChangedState:(BOOL)arg2;
- (id)initWithFlowState:(unsigned long long)arg1;
- (id)initWithEditorMode:(unsigned long long)arg1;

@end

