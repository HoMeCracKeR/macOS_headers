//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface RDFaceSuggestionReply : NSObject <NSSecureCoding>
{
    BOOL _confirmed;
    NSString *_faceLocalIdentifier;
    NSArray *_matchingFaceLocalIdentifiers;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(copy, nonatomic) NSArray *matchingFaceLocalIdentifiers; // @synthesize matchingFaceLocalIdentifiers=_matchingFaceLocalIdentifiers;
@property(copy, nonatomic) NSString *faceLocalIdentifier; // @synthesize faceLocalIdentifier=_faceLocalIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

