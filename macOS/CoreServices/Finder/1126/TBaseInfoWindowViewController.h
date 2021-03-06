//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class NSArray;

@interface TBaseInfoWindowViewController : TViewController
{
    struct TFENodeVector _targetNodes;
    struct TNSRef<NSArray<IPropertyValueControllers *>, void> _valueControllers;
    struct TRef<NSObject<OS_dispatch_queue>*, TRetainReleasePolicy<dispatch_queue_t>> _prefetchValuesQueue;
}

+ (id)controller;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nodeMDAttributeChanged:(const struct TFENode *)arg1 attributes:(id)arg2 isDisplayAttributes:(_Bool)arg3;
- (void)nodesGoingAway:(const struct TFENodeVector *)arg1;
- (void)bulkNodesDeleted:(const map_27534541 *)arg1;
- (void)bulkNodesChanged:(const map_253f12d2 *)arg1;
- (unsigned int)notificationOptionsForNodes:(const struct TFENodeVector *)arg1;
- (void)refresh;
- (void)prefetchValues:(const struct TFENodeVector *)arg1;
- (void)targetNodesChanged;
- (void)targetNodesChanging;
- (void)setTargetNodes:(const struct TFENodeVector *)arg1;
- (const struct TFENodeVector *)targetNodes;
@property(retain, nonatomic) NSArray *valueControllers; // @dynamic valueControllers;
- (void)loadValueControllers;
- (void)aboutToTearDown;
- (void)viewLoaded;

@end

