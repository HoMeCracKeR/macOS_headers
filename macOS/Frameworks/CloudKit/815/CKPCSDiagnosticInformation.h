//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    NSString *_identityInfo;
    NSString *_serviceIdentityInfo;
    NSMutableDictionary *_pcsInfoByZoneID;
    NSMutableArray *_notFoundZoneIDs;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *notFoundZoneIDs; // @synthesize notFoundZoneIDs=_notFoundZoneIDs;
@property(retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID; // @synthesize pcsInfoByZoneID=_pcsInfoByZoneID;
@property(retain, nonatomic) NSString *serviceIdentityInfo; // @synthesize serviceIdentityInfo=_serviceIdentityInfo;
@property(retain, nonatomic) NSString *identityInfo; // @synthesize identityInfo=_identityInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

