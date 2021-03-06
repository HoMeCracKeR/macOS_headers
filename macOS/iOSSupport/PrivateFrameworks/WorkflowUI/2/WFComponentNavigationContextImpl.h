//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFComponentNavigationContext-Protocol.h>

@class NSHashTable, NSString, UIViewController;

@interface WFComponentNavigationContextImpl : NSObject <WFComponentNavigationContext>
{
    UIViewController *_componentHostingViewController;
    NSHashTable *_componentEditingSessions;
}

@property(readonly, nonatomic) NSHashTable *componentEditingSessions; // @synthesize componentEditingSessions=_componentEditingSessions;
@property(readonly, nonatomic) __weak UIViewController *componentHostingViewController; // @synthesize componentHostingViewController=_componentHostingViewController;
- (void).cxx_destruct;
- (void)cancelEditingSessionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)componentDidEndEditingSession:(id)arg1;
- (void)componentWillBeginEditingSession:(id)arg1;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

