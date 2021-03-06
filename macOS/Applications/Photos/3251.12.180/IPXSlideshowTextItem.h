//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mondrian/MOMediaItem.h>

@class NSIndexPath, NSString;

@interface IPXSlideshowTextItem : MOMediaItem
{
    BOOL _isAttachedToMedia;
    NSString *_string;
    NSIndexPath *_indexPath;
    unsigned long long _indexForDragAnimation;
}

@property(nonatomic) BOOL isAttachedToMedia; // @synthesize isAttachedToMedia=_isAttachedToMedia;
@property(nonatomic) unsigned long long indexForDragAnimation; // @synthesize indexForDragAnimation=_indexForDragAnimation;
@property(retain) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (void)_reloadProperties;
- (id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (id)version;
- (double)aspectRatio;
- (BOOL)isEqual:(id)arg1;
- (id)initWithString:(id)arg1;

@end

