//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SidecarCore/SidecarPresenterDelegate-Protocol.h>

@class NSMapTable;
@protocol SidecarServicePresenterDelegate;

__attribute__((visibility("hidden")))
@interface SidecarPresenterProxy : NSObject <SidecarPresenterDelegate>
{
    id <SidecarServicePresenterDelegate> _delegate;
    NSMapTable *_responses;
}

+ (id)defaultProxy;
@property(nonatomic) __weak id <SidecarServicePresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presenterLaunchService:(id)arg1 results:(CDUnknownBlockType)arg2;
- (id)init;

@end

