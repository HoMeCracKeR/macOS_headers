//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SCTMenuBarVisibilityManager : NSObject
{
    id delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate;
- (void)makeMenuBarVisible;
- (void)_showMenu;
- (void)_showMenuFail;
- (void)_showMenuNow;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

