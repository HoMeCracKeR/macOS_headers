//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SURAIDAssistantPaneController.h"

@class NSButton;

@interface SUChooseRAIDTypeController : SURAIDAssistantPaneController
{
    int _selectedType;
    NSButton *_stripedButton;
    NSButton *_mirroredButton;
    NSButton *_jbodButton;
}

- (void).cxx_destruct;
@property __weak NSButton *jbodButton; // @synthesize jbodButton=_jbodButton;
@property __weak NSButton *mirroredButton; // @synthesize mirroredButton=_mirroredButton;
@property __weak NSButton *stripedButton; // @synthesize stripedButton=_stripedButton;
@property int selectedType; // @synthesize selectedType=_selectedType;
- (void)jbodButtonClicked:(id)arg1;
- (void)mirroredButtonClicked:(id)arg1;
- (void)stripedButtonClicked:(id)arg1;
- (id)paneIdentifier;
- (id)title;
- (void)viewDidLoad;
- (id)init;

@end

