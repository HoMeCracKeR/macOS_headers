//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSPreviewHostViewController;

@interface NSPreviewHostView : NSView
{
    struct os_unfair_lock_s _retainReleaseLock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)renewGState;
@property(readonly) NSPreviewHostViewController *previewHostViewController;
- (oneway void)release;
- (void)__vbSuperRelease;
- (id)retain;
- (void)__vbWithLockPerform:(CDUnknownBlockType)arg1;
- (struct os_unfair_lock_s *)retainReleaseLock;

@end

