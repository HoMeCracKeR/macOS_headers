//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray;

@interface PXSiriSearchRequest : NSObject <NSSecureCoding>
{
    NSArray *_queryTokens;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_useNLDateSearch;
- (id)_queryTokensForGeographicalFeatures:(id)arg1;
- (id)_queryTokensForActivities:(id)arg1;
- (id)_queryTokensForPlaces:(id)arg1;
- (id)_queryTokensForEvents:(id)arg1;
- (id)_queryTokensForDateCreated:(id)arg1;
- (id)_queryTokensForPeopleInPhoto:(id)arg1 peopleInPhotoOperator:(long long)arg2;
- (id)_queryTokensForLocationCreated:(id)arg1;
- (id)_queryTokensForSearchTerms:(id)arg1 searchTermsOperator:(long long)arg2;
- (id)_queryTokensForAlbumName:(id)arg1;
- (id)_queryTokensForPhotoAttributeOptions:(unsigned long long)arg1;
- (id)initWithStartPhotoPlaybackIntent:(id)arg1;
- (id)initWithSearchForPhotosIntent:(id)arg1;

@end

