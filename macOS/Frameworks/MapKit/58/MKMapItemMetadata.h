//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOBusiness, NSMutableDictionary;

@interface MKMapItemMetadata : NSObject
{
    GEOBusiness *_business;
    NSMutableDictionary *_imageCache;
}

@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly, nonatomic) GEOBusiness *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (id)imageForURL:(id)arg1;
- (void)addImage:(id)arg1 forURL:(id)arg2;
- (id)description;
- (id)initWithBusiness:(id)arg1;

@end

