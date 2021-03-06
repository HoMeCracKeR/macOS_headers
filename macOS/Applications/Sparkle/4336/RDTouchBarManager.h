//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RDTouchBarDataProtocol.h"
#import "RDTouchBarProtocol.h"
#import "RDTouchBarProviderProtocol.h"

@class NSArray, NSImage, NSMutableArray, NSMutableDictionary, NSObject<RDTouchBarProviderProtocol>, NSResponder<NSTouchBarProvider>, NSString, RDItem;

@interface RDTouchBarManager : NSObject <RDTouchBarProviderProtocol, RDTouchBarProtocol, RDTouchBarDataProtocol>
{
    BOOL _hasTouchBar;
    NSResponder<NSTouchBarProvider> *_touchBarOwner;
    RDItem *_currentItem;
    NSObject<RDTouchBarProviderProtocol> *_touchBarProvider;
    NSMutableDictionary *_touchBarModules;
    NSMutableArray *_touchBarStates;
    NSString *_touchBarStatus;
    NSArray *_touchBarStatusStack;
    NSImage *_closeImage;
}

@property(retain, nonatomic) NSImage *closeImage; // @synthesize closeImage=_closeImage;
@property(retain, nonatomic) NSArray *touchBarStatusStack; // @synthesize touchBarStatusStack=_touchBarStatusStack;
@property(retain, nonatomic) NSString *touchBarStatus; // @synthesize touchBarStatus=_touchBarStatus;
@property(retain, nonatomic) NSMutableArray *touchBarStates; // @synthesize touchBarStates=_touchBarStates;
@property(retain, nonatomic) NSMutableDictionary *touchBarModules; // @synthesize touchBarModules=_touchBarModules;
@property(nonatomic) __weak NSObject<RDTouchBarProviderProtocol> *touchBarProvider; // @synthesize touchBarProvider=_touchBarProvider;
@property(nonatomic) BOOL hasTouchBar; // @synthesize hasTouchBar=_hasTouchBar;
@property(nonatomic) __weak RDItem *currentItem; // @synthesize currentItem=_currentItem;
@property(nonatomic) __weak NSResponder<NSTouchBarProvider> *touchBarOwner; // @synthesize touchBarOwner=_touchBarOwner;
- (void).cxx_destruct;
- (void)updateProperty:(id)arg1 withValue:(id)arg2 refreshTouchBar:(BOOL)arg3;
- (void)updateProperty:(id)arg1 withValue:(id)arg2 notifyTouchBar:(BOOL)arg3;
- (void)updateProperty:(id)arg1 withValue:(id)arg2;
- (id)property:(id)arg1;
- (void)didChangeValueForProperty:(id)arg1;
- (void)willChangeValueForProperty:(id)arg1;
- (void)setTouchBarData:(id)arg1 forKey:(id)arg2;
- (void)refreshInspector;
- (void)closeTouchBar:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBar;
- (id)makeTouchBar;
- (id)principalItemIdentifier;
- (id)customizationAllowedItemIdentifiers;
- (id)customizationRequiredItemIdentifiers;
- (id)defaultItemIdentifiers;
- (void)updateColorTouchBarWithColorIndex:(long long)arg1;
- (void)closeColorTouchBar;
- (void)openColorTouchBarWithColorIndex:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)refreshTouchBar;
- (void)resetTouchBar;
- (id)popTouchBarStatus;
- (void)pushTouchBarStatus:(id)arg1;
- (BOOL)touchBarStatusIsEqualTo:(id)arg1;
- (id)registerTouchBarStatus:(id)arg1;
- (long long)touchBarLevel;
- (id)touchBarIdentifier;
- (id)currentTouchBarModule;
- (id)touchBarModuleWithIdentifier:(id)arg1;
- (void)registerTouchBarModule:(id)arg1;
- (id)initWithTouchBarProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

