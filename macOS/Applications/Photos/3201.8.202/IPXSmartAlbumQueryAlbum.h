//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXSmartAlbumQueryWithPopup.h"

#import "IPXNestedAlbumMenuControllerDelegate-Protocol.h"

@class IPXNestedAlbumMenuController, NSString, RDAlbum;

@interface IPXSmartAlbumQueryAlbum : IPXSmartAlbumQueryWithPopup <IPXNestedAlbumMenuControllerDelegate>
{
    IPXNestedAlbumMenuController *_nestedAlbumMenuController;
    RDAlbum *_selectedAlbum;
}

+ (id)defaultQuery;
+ (id)nibName;
@property(retain) RDAlbum *selectedAlbum; // @synthesize selectedAlbum=_selectedAlbum;
@property(retain) IPXNestedAlbumMenuController *nestedAlbumMenuController; // @synthesize nestedAlbumMenuController=_nestedAlbumMenuController;
- (void).cxx_destruct;
- (void)extraItemSelected;
- (void)albumSelected:(id)arg1;
- (void)updatePropertiesFromQuery;
- (id)valueForPopupIndex:(long long)arg1;
- (long long)popupIndexForQuery;
- (id)pathPrefix;
- (void)selectedPopupItemChanged;
- (long long)rdQualifierForMenuTag:(long long)arg1 valuePopupIndex:(unsigned long long)arg2;
- (long long)qualifierMenuTagForRDQualifier:(long long)arg1;
- (void)updatePopupValues;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

