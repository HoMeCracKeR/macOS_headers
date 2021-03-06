//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import <AppKit/NSAccessibility-Protocol.h>
#import <AppKit/NSAccessibilityElement-Protocol.h>

@class NSArray, NSLock, NSString, NSURL, NSView, NSWindow;
@protocol NSDrawerDelegate;

@interface NSDrawer : NSResponder <NSAccessibilityElement, NSAccessibility>
{
    unsigned long long _drawerState;
    unsigned long long _drawerNextState;
    unsigned long long _drawerEdge;
    unsigned long long _drawerNextEdge;
    unsigned long long _drawerPreferredEdge;
    float _drawerPercent;
    float _drawerPercentSaved;
    double _drawerLeadingOffset;
    double _drawerTrailingOffset;
    NSLock *_drawerLock;
    NSWindow *_drawerWindow;
    NSWindow *_drawerParentWindow;
    NSWindow *_drawerNextParentWindow;
    NSString *_drawerSaveName;
    double _drawerStartTime;
    double _drawerTotalTime;
    struct __CFRunLoop *_drawerLoop;
    struct __CFRunLoopTimer *_drawerTimer;
    id _drawerDelegate;
    unsigned int _drawerFlags;
    struct __CFRunLoopObserver *_drawerObserver;
}

+ (BOOL)_usesCorrectContentSize;
+ (void)initialize;
+ (unsigned long long)_drawerTransform;
+ (void)_setDrawerTransform:(unsigned long long)arg1;
+ (double)_drawerVelocity;
+ (void)_setDrawerVelocity:(double)arg1;
@property __weak id accessibilityParent; // @dynamic accessibilityParent;
@property struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property id <NSDrawerDelegate> delegate;
- (id)autosaveName;
- (void)setAutosaveName:(id)arg1;
@property double trailingOffset;
@property double leadingOffset;
@property struct CGSize maxContentSize;
@property struct CGSize minContentSize;
@property struct CGSize contentSize;
@property(readonly) unsigned long long edge;
@property(readonly) long long state;
- (BOOL)isOpen;
- (void)removeImmediately:(BOOL)arg1;
- (void)toggle:(id)arg1;
- (void)close:(id)arg1;
- (void)open:(id)arg1;
- (void)close;
- (void)openOnEdge:(unsigned long long)arg1;
- (void)open;
@property unsigned long long preferredEdge;
@property(retain) NSView *contentView;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
@property NSWindow *parentWindow;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentSize:(struct CGSize)arg1 preferredEdge:(unsigned long long)arg2;
- (void)_setVisibleWithoutLogin;
- (void)_setLevel;
- (void)_endLiveResize;
- (void)_startLiveResize;
- (void)_resetPostingCounts;
- (void)_resetDisableCounts;
- (id)_registerDragTypesIfNeeded;
- (void)_resizeWithDelta:(struct CGPoint)arg1 fromFrame:(struct CGRect)arg2 beginOperation:(BOOL)arg3 endOperation:(BOOL)arg4;
- (void)_slideWithDelta:(struct CGPoint)arg1 beginOperation:(BOOL)arg2 endOperation:(BOOL)arg3;
- (struct CGSize)_minParentWindowContentSize;
- (void)_takeFocus;
- (void)_changeFirstResponderToParentsFirstResponder;
- (void)_changeMainState;
- (void)_changeKeyState;
- (void)_sizeWithRect:(struct CGRect)arg1;
- (void)_size;
- (void)_position;
- (void)_displayIfNeeded;
- (void)_unhide;
- (void)_hide;
- (void)_setDrawerEdge:(unsigned long long)arg1;
- (unsigned long long)_edge;
- (id)_initWithContentSize:(struct CGSize)arg1 preferredEdge:(unsigned long long)arg2;
- (id)_drawerWindow;
- (void)_doAutoselectEdge;
- (void)_doSetParentWindow:(id)arg1;
- (void)_doRemoveDrawer;
- (void)_doCloseDrawer;
- (void)_doOpenDrawer;
- (void)_doResizeDrawerWithDelta:(struct CGPoint)arg1 fromFrame:(struct CGRect)arg2;
- (void)_doSlideDrawerWithDelta:(struct CGPoint)arg1;
- (void)_doPositionDrawerAndSize:(struct CGSize)arg1 parentFrame:(struct CGRect)arg2 stashSize:(BOOL)arg3;
- (void)_doPositionDrawerAndSize:(struct CGSize)arg1 parentFrame:(struct CGRect)arg2;
- (void)_doPositionDrawer;
- (void)_doStopDrawer;
- (void)_doStartDrawer;
- (void)_doDetachDrawer;
- (void)_doAttachDrawer;
- (void)_doAttachDrawerIgnoreHidden:(BOOL)arg1;
- (id)undoManager;
- (void)doCommandBySelector:(SEL)arg1;
- (void)helpRequested:(id)arg1;
- (id)menu;
- (void)setMenu:(id)arg1;
- (void)flushBufferedKeyEvents;
- (void)interpretKeyEvents:(id)arg1;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
- (id)accessibilitySectionsAttribute;
- (id)accessibilityAuditIssuesAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityAttributeNames;

// Remaining properties
@property struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(copy) NSArray *accessibilityAllowedValues; // @dynamic accessibilityAllowedValues;
@property(getter=isAccessibilityAlternateUIVisible) BOOL accessibilityAlternateUIVisible; // @dynamic accessibilityAlternateUIVisible;
@property(retain) id accessibilityApplicationFocusedUIElement; // @dynamic accessibilityApplicationFocusedUIElement;
@property(retain) id accessibilityCancelButton; // @dynamic accessibilityCancelButton;
@property(copy) NSArray *accessibilityChildren; // @dynamic accessibilityChildren;
@property(copy) NSArray *accessibilityChildrenInNavigationOrder; // @dynamic accessibilityChildrenInNavigationOrder;
@property(retain) id accessibilityClearButton; // @dynamic accessibilityClearButton;
@property(retain) id accessibilityCloseButton; // @dynamic accessibilityCloseButton;
@property long long accessibilityColumnCount; // @dynamic accessibilityColumnCount;
@property(copy) NSArray *accessibilityColumnHeaderUIElements; // @dynamic accessibilityColumnHeaderUIElements;
@property struct _NSRange accessibilityColumnIndexRange; // @dynamic accessibilityColumnIndexRange;
@property(copy) NSArray *accessibilityColumnTitles; // @dynamic accessibilityColumnTitles;
@property(copy) NSArray *accessibilityColumns; // @dynamic accessibilityColumns;
@property(copy) NSArray *accessibilityContents; // @dynamic accessibilityContents;
@property(retain) id accessibilityCriticalValue; // @dynamic accessibilityCriticalValue;
@property(copy) NSArray *accessibilityCustomActions; // @dynamic accessibilityCustomActions;
@property(copy) NSArray *accessibilityCustomRotors; // @dynamic accessibilityCustomRotors;
@property(retain) id accessibilityDecrementButton; // @dynamic accessibilityDecrementButton;
@property(retain) id accessibilityDefaultButton; // @dynamic accessibilityDefaultButton;
@property(getter=isAccessibilityDisclosed) BOOL accessibilityDisclosed; // @dynamic accessibilityDisclosed;
@property __weak id accessibilityDisclosedByRow; // @dynamic accessibilityDisclosedByRow;
@property(retain) id accessibilityDisclosedRows; // @dynamic accessibilityDisclosedRows;
@property long long accessibilityDisclosureLevel; // @dynamic accessibilityDisclosureLevel;
@property(copy) NSString *accessibilityDocument; // @dynamic accessibilityDocument;
@property(getter=isAccessibilityEdited) BOOL accessibilityEdited; // @dynamic accessibilityEdited;
@property(getter=isAccessibilityElement) BOOL accessibilityElement; // @dynamic accessibilityElement;
@property(getter=isAccessibilityEnabled) BOOL accessibilityEnabled; // @dynamic accessibilityEnabled;
@property(getter=isAccessibilityExpanded) BOOL accessibilityExpanded; // @dynamic accessibilityExpanded;
@property __weak id accessibilityExtrasMenuBar; // @dynamic accessibilityExtrasMenuBar;
@property(copy) NSString *accessibilityFilename; // @dynamic accessibilityFilename;
@property(getter=isAccessibilityFocused) BOOL accessibilityFocused; // @dynamic accessibilityFocused;
@property(retain) id accessibilityFocusedWindow; // @dynamic accessibilityFocusedWindow;
@property(getter=isAccessibilityFrontmost) BOOL accessibilityFrontmost; // @dynamic accessibilityFrontmost;
@property(retain) id accessibilityFullScreenButton; // @dynamic accessibilityFullScreenButton;
@property(retain) id accessibilityGrowArea; // @dynamic accessibilityGrowArea;
@property(copy) NSArray *accessibilityHandles; // @dynamic accessibilityHandles;
@property(retain) id accessibilityHeader; // @dynamic accessibilityHeader;
@property(copy) NSString *accessibilityHelp; // @dynamic accessibilityHelp;
@property(getter=isAccessibilityHidden) BOOL accessibilityHidden; // @dynamic accessibilityHidden;
@property(retain) id accessibilityHorizontalScrollBar; // @dynamic accessibilityHorizontalScrollBar;
@property(copy) NSString *accessibilityHorizontalUnitDescription; // @dynamic accessibilityHorizontalUnitDescription;
@property long long accessibilityHorizontalUnits; // @dynamic accessibilityHorizontalUnits;
@property(copy) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property(retain) id accessibilityIncrementButton; // @dynamic accessibilityIncrementButton;
@property long long accessibilityIndex; // @dynamic accessibilityIndex;
@property long long accessibilityInsertionPointLineNumber; // @dynamic accessibilityInsertionPointLineNumber;
@property(copy) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
@property(copy) NSArray *accessibilityLabelUIElements; // @dynamic accessibilityLabelUIElements;
@property float accessibilityLabelValue; // @dynamic accessibilityLabelValue;
@property(copy) NSArray *accessibilityLinkedUIElements; // @dynamic accessibilityLinkedUIElements;
@property(getter=isAccessibilityMain) BOOL accessibilityMain; // @dynamic accessibilityMain;
@property(retain) id accessibilityMainWindow; // @dynamic accessibilityMainWindow;
@property(retain) id accessibilityMarkerGroupUIElement; // @dynamic accessibilityMarkerGroupUIElement;
@property(copy) NSString *accessibilityMarkerTypeDescription; // @dynamic accessibilityMarkerTypeDescription;
@property(copy) NSArray *accessibilityMarkerUIElements; // @dynamic accessibilityMarkerUIElements;
@property(retain) id accessibilityMarkerValues; // @dynamic accessibilityMarkerValues;
@property(retain) id accessibilityMaxValue; // @dynamic accessibilityMaxValue;
@property __weak id accessibilityMenuBar; // @dynamic accessibilityMenuBar;
@property(retain) id accessibilityMinValue; // @dynamic accessibilityMinValue;
@property(retain) id accessibilityMinimizeButton; // @dynamic accessibilityMinimizeButton;
@property(getter=isAccessibilityMinimized) BOOL accessibilityMinimized; // @dynamic accessibilityMinimized;
@property(getter=isAccessibilityModal) BOOL accessibilityModal; // @dynamic accessibilityModal;
@property(copy) NSArray *accessibilityNextContents; // @dynamic accessibilityNextContents;
@property long long accessibilityNumberOfCharacters; // @dynamic accessibilityNumberOfCharacters;
@property(getter=isAccessibilityOrderedByRow) BOOL accessibilityOrderedByRow; // @dynamic accessibilityOrderedByRow;
@property long long accessibilityOrientation; // @dynamic accessibilityOrientation;
@property(retain) id accessibilityOverflowButton; // @dynamic accessibilityOverflowButton;
@property(copy) NSString *accessibilityPlaceholderValue; // @dynamic accessibilityPlaceholderValue;
@property(copy) NSArray *accessibilityPreviousContents; // @dynamic accessibilityPreviousContents;
@property(getter=isAccessibilityProtectedContent) BOOL accessibilityProtectedContent; // @dynamic accessibilityProtectedContent;
@property(retain) id accessibilityProxy; // @dynamic accessibilityProxy;
@property(getter=isAccessibilityRequired) BOOL accessibilityRequired; // @dynamic accessibilityRequired;
@property(copy) NSString *accessibilityRole; // @dynamic accessibilityRole;
@property(copy) NSString *accessibilityRoleDescription; // @dynamic accessibilityRoleDescription;
@property long long accessibilityRowCount; // @dynamic accessibilityRowCount;
@property(copy) NSArray *accessibilityRowHeaderUIElements; // @dynamic accessibilityRowHeaderUIElements;
@property struct _NSRange accessibilityRowIndexRange; // @dynamic accessibilityRowIndexRange;
@property(copy) NSArray *accessibilityRows; // @dynamic accessibilityRows;
@property long long accessibilityRulerMarkerType; // @dynamic accessibilityRulerMarkerType;
@property(retain) id accessibilitySearchButton; // @dynamic accessibilitySearchButton;
@property(retain) id accessibilitySearchMenu; // @dynamic accessibilitySearchMenu;
@property(getter=isAccessibilitySelected) BOOL accessibilitySelected; // @dynamic accessibilitySelected;
@property(copy) NSArray *accessibilitySelectedCells; // @dynamic accessibilitySelectedCells;
@property(copy) NSArray *accessibilitySelectedChildren; // @dynamic accessibilitySelectedChildren;
@property(copy) NSArray *accessibilitySelectedColumns; // @dynamic accessibilitySelectedColumns;
@property(copy) NSArray *accessibilitySelectedRows; // @dynamic accessibilitySelectedRows;
@property(copy) NSString *accessibilitySelectedText; // @dynamic accessibilitySelectedText;
@property struct _NSRange accessibilitySelectedTextRange; // @dynamic accessibilitySelectedTextRange;
@property(copy) NSArray *accessibilitySelectedTextRanges; // @dynamic accessibilitySelectedTextRanges;
@property(copy) NSArray *accessibilityServesAsTitleForUIElements; // @dynamic accessibilityServesAsTitleForUIElements;
@property struct _NSRange accessibilitySharedCharacterRange; // @dynamic accessibilitySharedCharacterRange;
@property(copy) NSArray *accessibilitySharedFocusElements; // @dynamic accessibilitySharedFocusElements;
@property(copy) NSArray *accessibilitySharedTextUIElements; // @dynamic accessibilitySharedTextUIElements;
@property(retain) id accessibilityShownMenu; // @dynamic accessibilityShownMenu;
@property long long accessibilitySortDirection; // @dynamic accessibilitySortDirection;
@property(copy) NSArray *accessibilitySplitters; // @dynamic accessibilitySplitters;
@property(copy) NSString *accessibilitySubrole; // @dynamic accessibilitySubrole;
@property(copy) NSArray *accessibilityTabs; // @dynamic accessibilityTabs;
@property(copy) NSString *accessibilityTitle; // @dynamic accessibilityTitle;
@property __weak id accessibilityTitleUIElement; // @dynamic accessibilityTitleUIElement;
@property(retain) id accessibilityToolbarButton; // @dynamic accessibilityToolbarButton;
@property __weak id accessibilityTopLevelUIElement; // @dynamic accessibilityTopLevelUIElement;
@property(copy) NSURL *accessibilityURL; // @dynamic accessibilityURL;
@property(copy) NSString *accessibilityUnitDescription; // @dynamic accessibilityUnitDescription;
@property long long accessibilityUnits; // @dynamic accessibilityUnits;
@property(retain) id accessibilityValue; // @dynamic accessibilityValue;
@property(copy) NSString *accessibilityValueDescription; // @dynamic accessibilityValueDescription;
@property(retain) id accessibilityVerticalScrollBar; // @dynamic accessibilityVerticalScrollBar;
@property(copy) NSString *accessibilityVerticalUnitDescription; // @dynamic accessibilityVerticalUnitDescription;
@property long long accessibilityVerticalUnits; // @dynamic accessibilityVerticalUnits;
@property(copy) NSArray *accessibilityVisibleCells; // @dynamic accessibilityVisibleCells;
@property struct _NSRange accessibilityVisibleCharacterRange; // @dynamic accessibilityVisibleCharacterRange;
@property(copy) NSArray *accessibilityVisibleChildren; // @dynamic accessibilityVisibleChildren;
@property(copy) NSArray *accessibilityVisibleColumns; // @dynamic accessibilityVisibleColumns;
@property(copy) NSArray *accessibilityVisibleRows; // @dynamic accessibilityVisibleRows;
@property(retain) id accessibilityWarningValue; // @dynamic accessibilityWarningValue;
@property __weak id accessibilityWindow; // @dynamic accessibilityWindow;
@property(copy) NSArray *accessibilityWindows; // @dynamic accessibilityWindows;
@property(retain) id accessibilityZoomButton; // @dynamic accessibilityZoomButton;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

