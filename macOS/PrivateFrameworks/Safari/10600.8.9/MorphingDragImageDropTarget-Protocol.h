//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class MorphingDragImageController;
@protocol NSDraggingInfo;

@protocol MorphingDragImageDropTarget <NSObject>
- (BOOL)morphingDragImage:(MorphingDragImageController *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
- (void)morphingDragImage:(MorphingDragImageController *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (unsigned long long)morphingDragImage:(MorphingDragImageController *)arg1 draggingUpdated:(id <NSDraggingInfo>)arg2;
- (unsigned long long)morphingDragImage:(MorphingDragImageController *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;

@optional
- (BOOL)wantsPeriodicDraggingUpdatesForMorphingDragImage:(MorphingDragImageController *)arg1;
@end

