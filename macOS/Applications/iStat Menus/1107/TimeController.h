//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SectionController.h"

#import "NSTextFieldDelegate.h"

@class BJAButton, BJACheckbox, ClockController, GenericLayoutContainer, HaloTextField, ISMPopUpButton, NSLayoutConstraint, NSMutableArray, NSPopUpButton, NSString, NSView, TimeDrawingMenubarPreview;

@interface TimeController : SectionController <NSTextFieldDelegate>
{
    GenericLayoutContainer *_clockFormatPreview;
    GenericLayoutContainer *_worldClockFormatPreview;
    ClockController *_clockController;
    NSView *_clockFormatEditor;
    NSView *_worldClockFormatEditor;
    HaloTextField *_icon1;
    HaloTextField *_icon2;
    HaloTextField *_icon3;
    HaloTextField *_icon4;
    HaloTextField *_icon5;
    HaloTextField *_icon6;
    HaloTextField *_icon7;
    HaloTextField *_menubar12HourField;
    HaloTextField *_menubar24HourField;
    HaloTextField *_menubarMinuteField;
    HaloTextField *_menubarSecondField;
    HaloTextField *_menubarDayField;
    HaloTextField *_menubarMonthField;
    HaloTextField *_menubarYearField;
    HaloTextField *_menubarTimezoneField;
    HaloTextField *_menubarFuzzyField;
    HaloTextField *_menubarIconsField;
    HaloTextField *_menubarDayOfYearField;
    HaloTextField *_menubarWeekOfYearField;
    HaloTextField *_menubarDayNameField;
    HaloTextField *_menubarSystemOffsetField;
    HaloTextField *_world12HourField;
    HaloTextField *_world24HourField;
    HaloTextField *_worldMinuteField;
    HaloTextField *_worldDayField;
    HaloTextField *_worldMonthField;
    HaloTextField *_worldYearField;
    HaloTextField *_worldTimezoneField;
    HaloTextField *_worldFuzzyField;
    HaloTextField *_worldRelativeField;
    HaloTextField *_worldSystemOffsetField;
    HaloTextField *_fuzzy;
    BJACheckbox *_showWeekNumbers;
    ISMPopUpButton *_firstDay;
    HaloTextField *_worldClockFormatField;
    NSPopUpButton *_weekFormat;
    NSPopUpButton *_cityMode;
    NSPopUpButton *_eventRange;
    NSView *_menubarEditor;
    BJAButton *_editMenubarButton;
    BJAButton *_editWorldClocksButton;
    BJAButton *_menubarEditorSaveButton;
    BJAButton *_menubarEditorCancelButton;
    BJAButton *_worldEditorSaveButton;
    BJAButton *_worldEditorCancelButton;
    NSView *_menubarEditorCityContainer;
    NSMutableArray *_menubarEditorRows;
    TimeDrawingMenubarPreview *_menubarEditorPreview;
    NSLayoutConstraint *_menubarEditorCityHeightConstraint;
    long long _menubarEditorBaseHeight;
}

@property(nonatomic) long long menubarEditorBaseHeight; // @synthesize menubarEditorBaseHeight=_menubarEditorBaseHeight;
@property(retain, nonatomic) NSLayoutConstraint *menubarEditorCityHeightConstraint; // @synthesize menubarEditorCityHeightConstraint=_menubarEditorCityHeightConstraint;
@property(retain, nonatomic) TimeDrawingMenubarPreview *menubarEditorPreview; // @synthesize menubarEditorPreview=_menubarEditorPreview;
@property(retain, nonatomic) NSMutableArray *menubarEditorRows; // @synthesize menubarEditorRows=_menubarEditorRows;
@property(retain, nonatomic) NSView *menubarEditorCityContainer; // @synthesize menubarEditorCityContainer=_menubarEditorCityContainer;
@property(retain, nonatomic) BJAButton *worldEditorCancelButton; // @synthesize worldEditorCancelButton=_worldEditorCancelButton;
@property(retain, nonatomic) BJAButton *worldEditorSaveButton; // @synthesize worldEditorSaveButton=_worldEditorSaveButton;
@property(retain, nonatomic) BJAButton *menubarEditorCancelButton; // @synthesize menubarEditorCancelButton=_menubarEditorCancelButton;
@property(retain, nonatomic) BJAButton *menubarEditorSaveButton; // @synthesize menubarEditorSaveButton=_menubarEditorSaveButton;
@property(retain, nonatomic) BJAButton *editWorldClocksButton; // @synthesize editWorldClocksButton=_editWorldClocksButton;
@property(retain, nonatomic) BJAButton *editMenubarButton; // @synthesize editMenubarButton=_editMenubarButton;
@property(retain, nonatomic) NSView *menubarEditor; // @synthesize menubarEditor=_menubarEditor;
@property(retain, nonatomic) NSPopUpButton *eventRange; // @synthesize eventRange=_eventRange;
@property(retain, nonatomic) NSPopUpButton *cityMode; // @synthesize cityMode=_cityMode;
@property(retain, nonatomic) NSPopUpButton *weekFormat; // @synthesize weekFormat=_weekFormat;
@property(retain, nonatomic) HaloTextField *worldClockFormatField; // @synthesize worldClockFormatField=_worldClockFormatField;
@property(retain, nonatomic) ISMPopUpButton *firstDay; // @synthesize firstDay=_firstDay;
@property(retain, nonatomic) BJACheckbox *showWeekNumbers; // @synthesize showWeekNumbers=_showWeekNumbers;
@property(retain, nonatomic) HaloTextField *fuzzy; // @synthesize fuzzy=_fuzzy;
@property(retain, nonatomic) HaloTextField *worldSystemOffsetField; // @synthesize worldSystemOffsetField=_worldSystemOffsetField;
@property(retain, nonatomic) HaloTextField *worldRelativeField; // @synthesize worldRelativeField=_worldRelativeField;
@property(retain, nonatomic) HaloTextField *worldFuzzyField; // @synthesize worldFuzzyField=_worldFuzzyField;
@property(retain, nonatomic) HaloTextField *worldTimezoneField; // @synthesize worldTimezoneField=_worldTimezoneField;
@property(retain, nonatomic) HaloTextField *worldYearField; // @synthesize worldYearField=_worldYearField;
@property(retain, nonatomic) HaloTextField *worldMonthField; // @synthesize worldMonthField=_worldMonthField;
@property(retain, nonatomic) HaloTextField *worldDayField; // @synthesize worldDayField=_worldDayField;
@property(retain, nonatomic) HaloTextField *worldMinuteField; // @synthesize worldMinuteField=_worldMinuteField;
@property(retain, nonatomic) HaloTextField *world24HourField; // @synthesize world24HourField=_world24HourField;
@property(retain, nonatomic) HaloTextField *world12HourField; // @synthesize world12HourField=_world12HourField;
@property(retain, nonatomic) HaloTextField *menubarSystemOffsetField; // @synthesize menubarSystemOffsetField=_menubarSystemOffsetField;
@property(retain, nonatomic) HaloTextField *menubarDayNameField; // @synthesize menubarDayNameField=_menubarDayNameField;
@property(retain, nonatomic) HaloTextField *menubarWeekOfYearField; // @synthesize menubarWeekOfYearField=_menubarWeekOfYearField;
@property(retain, nonatomic) HaloTextField *menubarDayOfYearField; // @synthesize menubarDayOfYearField=_menubarDayOfYearField;
@property(retain, nonatomic) HaloTextField *menubarIconsField; // @synthesize menubarIconsField=_menubarIconsField;
@property(retain, nonatomic) HaloTextField *menubarFuzzyField; // @synthesize menubarFuzzyField=_menubarFuzzyField;
@property(retain, nonatomic) HaloTextField *menubarTimezoneField; // @synthesize menubarTimezoneField=_menubarTimezoneField;
@property(retain, nonatomic) HaloTextField *menubarYearField; // @synthesize menubarYearField=_menubarYearField;
@property(retain, nonatomic) HaloTextField *menubarMonthField; // @synthesize menubarMonthField=_menubarMonthField;
@property(retain, nonatomic) HaloTextField *menubarDayField; // @synthesize menubarDayField=_menubarDayField;
@property(retain, nonatomic) HaloTextField *menubarSecondField; // @synthesize menubarSecondField=_menubarSecondField;
@property(retain, nonatomic) HaloTextField *menubarMinuteField; // @synthesize menubarMinuteField=_menubarMinuteField;
@property(retain, nonatomic) HaloTextField *menubar24HourField; // @synthesize menubar24HourField=_menubar24HourField;
@property(retain, nonatomic) HaloTextField *menubar12HourField; // @synthesize menubar12HourField=_menubar12HourField;
@property(retain, nonatomic) HaloTextField *icon7; // @synthesize icon7=_icon7;
@property(retain, nonatomic) HaloTextField *icon6; // @synthesize icon6=_icon6;
@property(retain, nonatomic) HaloTextField *icon5; // @synthesize icon5=_icon5;
@property(retain, nonatomic) HaloTextField *icon4; // @synthesize icon4=_icon4;
@property(retain, nonatomic) HaloTextField *icon3; // @synthesize icon3=_icon3;
@property(retain, nonatomic) HaloTextField *icon2; // @synthesize icon2=_icon2;
@property(retain, nonatomic) HaloTextField *icon1; // @synthesize icon1=_icon1;
@property(retain, nonatomic) NSView *worldClockFormatEditor; // @synthesize worldClockFormatEditor=_worldClockFormatEditor;
@property(retain, nonatomic) NSView *clockFormatEditor; // @synthesize clockFormatEditor=_clockFormatEditor;
@property(retain, nonatomic) ClockController *clockController; // @synthesize clockController=_clockController;
@property(retain, nonatomic) GenericLayoutContainer *worldClockFormatPreview; // @synthesize worldClockFormatPreview=_worldClockFormatPreview;
@property(retain, nonatomic) GenericLayoutContainer *clockFormatPreview; // @synthesize clockFormatPreview=_clockFormatPreview;
- (void).cxx_destruct;
- (id)haloField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)haloField:(id)arg1 attributedDisplayStringForRepresentedObject:(id)arg2;
- (id)haloField:(id)arg1 tooltipForRepresentedObject:(id)arg2;
- (BOOL)isComponentSupported:(id)arg1;
- (void)updateView;
- (void)setupTokens;
- (id)iconForImage:(id)arg1;
- (id)haloImageForRepresentedObject:(id)arg1;
- (void)setupImageToken:(id)arg1 width:(int)arg2 image:(id)arg3 delegate:(id)arg4;
- (void)setupToken:(id)arg1 width:(int)arg2 delegate:(id)arg3;
- (void)cancelWorldClockFormatEditor:(id)arg1;
- (void)saveWorldClockFormat:(id)arg1;
- (void)editWorldClockFormat;
- (void)cancelMenubarFormatEditor:(id)arg1;
- (void)saveMenubarFormat:(id)arg1;
- (void)editMenubarFormat;
- (void)layoutContainer:(id)arg1 highlightItem:(id)arg2;
- (void)importedPreferences;
- (void)setup;
- (void)setupIcon;
- (void)loadMenubarEditorRows;
- (void)menubarRowValueChanged:(id)arg1;
- (void)removeMenubarRow:(id)arg1;
- (void)addMenubarRow;
- (void)layoutMenubarEditorRows;
- (void)prepareToShow;
- (void)addPrefKey:(id)arg1 notificationKey:(id)arg2 toObject:(id)arg3 text:(BOOL)arg4 layout:(BOOL)arg5 selector:(SEL)arg6;
- (void)updateLayoutSelectors;
- (void)prepareDropdownOrderView;
- (void)resetTextAttributes;
- (id)hotkeyPreferenceKey;
- (id)stateNotificationKey;
- (id)sectionName;
- (id)bundleFile;
- (id)bundleName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

