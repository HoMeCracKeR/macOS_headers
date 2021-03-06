//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BAHCodec.h"

@class NSURL;

@interface BAHDecompressor : BAHCodec
{
    NSURL *_finalTargetURL;
    struct _qtn_file *_qtInfo;
}

+ (BOOL)hasEmbeddedTarExtension:(id)arg1;
+ (id)reconcileClassName:(id)arg1 forURL:(id)arg2 withMagic:(id)arg3 isIntermediateItem:(BOOL)arg4;
+ (BOOL)isInvalidBomZip64Archive:(id)arg1;
+ (id)classNameForURL:(id)arg1 checkMagic:(BOOL)arg2 isIntermediateItem:(BOOL)arg3;
+ (long long)magicTypeForString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *finalTargetURL; // @synthesize finalTargetURL=_finalTargetURL;
- (void)startThread;
- (void)dealloc;
- (id)initWithURL:(id)arg1 andOptions:(id)arg2;
- (BOOL)_decompressPerformCopy;
- (void)_decompressRevealUncompressedInWindow;
- (BOOL)_decompressMoveCopyResults;
- (void)_propagateQuarantineInformation;
- (void)_decompressDealWithArchive;
- (BOOL)_decompressSetupTarget;
- (void)_decompressCheckSourceLocation;
- (void)_decompressFileThread:(id)arg1;

@end

