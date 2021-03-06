//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface BrailleTranslationOptions : NSObject
{
    NSString *_selectedInputMode;
    NSString *_selectedOutputMode;
    NSString *_selectedLanguage;
    NSString *_selectedService;
    NSDictionary *__tablesForLanguageServices;
    NSDictionary *__translationModesForTableIDs;
}

+ (id)defaultBrailleTableIdentifierMatchingCurrentLocale;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *_translationModesForTableIDs; // @synthesize _translationModesForTableIDs=__translationModesForTableIDs;
@property(retain, nonatomic) NSDictionary *_tablesForLanguageServices; // @synthesize _tablesForLanguageServices=__tablesForLanguageServices;
@property(copy, nonatomic) NSString *selectedService; // @synthesize selectedService=_selectedService;
@property(copy, nonatomic) NSString *selectedLanguage; // @synthesize selectedLanguage=_selectedLanguage;
@property(copy, nonatomic) NSString *selectedOutputMode; // @synthesize selectedOutputMode=_selectedOutputMode;
@property(copy, nonatomic) NSString *selectedInputMode; // @synthesize selectedInputMode=_selectedInputMode;
- (id)_preferredLocalizedLanguages;
- (id)_serviceDescriptionsForLanguage:(id)arg1;
- (id)_serviceDescriptionForTable:(id)arg1;
- (void)_updateModeIfNeeded:(BOOL)arg1;
- (void)_selectLanguage:(id)arg1 service:(id)arg2;
- (id)_translationModesForTable:(id)arg1;
- (unsigned long long)_translationModeForLocalizedDescription:(id)arg1;
- (id)_localizedDescriptionForMode:(unsigned long long)arg1;
- (void)_setup;
- (id)tableIdentifierForServiceDescriptionAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *modeDescriptionsForSelectedTable;
@property(readonly, nonatomic) NSArray *serviceDescriptionsForSelectedLanguage;
@property(readonly, nonatomic) NSArray *languageDescriptions;
@property(readonly, copy, nonatomic) NSString *selectedTableIdentifier;
- (void)updateBrailleUserDefaultsForSelectedTranslationMode:(BOOL)arg1;
- (void)selectModeForUserDefaults:(BOOL)arg1;
- (void)selectTableForUserDefaults;
- (id)init;

@end

