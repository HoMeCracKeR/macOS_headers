//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class KNSlideNode;

@interface KNPlaybackThumbnailCacheKey : NSObject <NSCopying>
{
    KNSlideNode *_slideNode;
    unsigned long long _eventIndex;
}

@property(readonly, nonatomic) unsigned long long eventIndex; // @synthesize eventIndex=_eventIndex;
@property(readonly, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=_slideNode;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSlideNode:(id)arg1 eventIndex:(unsigned long long)arg2;

@end

