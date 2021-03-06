//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXPeopleUISettings : PXSettings
{
    BOOL _alwaysShowBootstrap;
    BOOL _alwaysShowCandidateWidget;
    BOOL _alwaysShowMe;
    BOOL _displayBootstrapSuggestionType;
    BOOL _displayConfirmAdditionalSuggestionType;
    BOOL _displayConfirmationPhotoDate;
    BOOL _debugBlurredCells;
    BOOL _showContactSuggestions;
    BOOL _showMaybeContact;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic, getter=shouldShowMaybeContact) BOOL showMaybeContact; // @synthesize showMaybeContact=_showMaybeContact;
@property(nonatomic, getter=shouldShowContactSuggestions) BOOL showContactSuggestions; // @synthesize showContactSuggestions=_showContactSuggestions;
@property(nonatomic, getter=shouldDebugBlurredCells) BOOL debugBlurredCells; // @synthesize debugBlurredCells=_debugBlurredCells;
@property(nonatomic, getter=shouldDisplayConfirmationPhotoDate) BOOL displayConfirmationPhotoDate; // @synthesize displayConfirmationPhotoDate=_displayConfirmationPhotoDate;
@property(nonatomic, getter=shouldDisplayConfirmAdditionalSuggestionType) BOOL displayConfirmAdditionalSuggestionType; // @synthesize displayConfirmAdditionalSuggestionType=_displayConfirmAdditionalSuggestionType;
@property(nonatomic, getter=shouldDisplayBootstrapSuggestionType) BOOL displayBootstrapSuggestionType; // @synthesize displayBootstrapSuggestionType=_displayBootstrapSuggestionType;
@property(nonatomic, getter=shouldAlwaysShowMe) BOOL alwaysShowMe; // @synthesize alwaysShowMe=_alwaysShowMe;
@property(nonatomic, getter=shouldAlwaysShowCandidateWidget) BOOL alwaysShowCandidateWidget; // @synthesize alwaysShowCandidateWidget=_alwaysShowCandidateWidget;
@property(nonatomic, getter=shouldAlwaysShowBootstrap) BOOL alwaysShowBootstrap; // @synthesize alwaysShowBootstrap=_alwaysShowBootstrap;
- (void)setDefaultValues;
- (id)parentSettings;

@end

