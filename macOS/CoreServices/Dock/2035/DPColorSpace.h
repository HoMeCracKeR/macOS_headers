//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DPColorSpace : NSObject
{
    struct CGColorSpace *_colorSpace;
    NSString *_md5;
}

@property(readonly, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(readonly, nonatomic) struct CGColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDisplay:(unsigned int)arg1;

@end

