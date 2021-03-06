//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class KHMapView, KHPlusMinusFooterView, NSButton, NSMutableArray, NSScrollView, NSString, NSTableView, NSTextField;

@interface KHMapPlacesPickerController : UXViewController <NSTableViewDataSource, NSTableViewDelegate, NSTextFieldDelegate>
{
    KHMapView *_mapView;
    NSTableView *_placesTable;
    NSScrollView *_placesTableContainer;
    NSTextField *_placesTitle;
    NSButton *_addButton;
    NSButton *_removeButton;
    NSButton *_showLabelsButton;
    KHPlusMinusFooterView *_tableFooter;
    NSMutableArray *_observedMarkers;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *observedMarkers; // @synthesize observedMarkers=_observedMarkers;
@property(retain) KHPlusMinusFooterView *tableFooter; // @synthesize tableFooter=_tableFooter;
@property(retain) NSButton *showLabelsButton; // @synthesize showLabelsButton=_showLabelsButton;
@property(retain) NSButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain) NSButton *addButton; // @synthesize addButton=_addButton;
@property(retain) NSTextField *placesTitle; // @synthesize placesTitle=_placesTitle;
@property(retain) NSScrollView *placesTableContainer; // @synthesize placesTableContainer=_placesTableContainer;
@property(retain) NSTableView *placesTable; // @synthesize placesTable=_placesTable;
@property(retain, nonatomic) KHMapView *mapView; // @synthesize mapView=_mapView;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)markerButtonClicked:(id)arg1;
- (void)setMarkersHidden:(id)arg1;
- (void)addMapMarker:(id)arg1;
- (void)removeMapMarker:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)_reloadData;
- (void)unObserveMarkers;
- (void)observeMarkers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

