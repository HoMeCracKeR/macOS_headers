//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUButton.h"

@class FLUMedia, NSString;

@interface FLUMediaButton : FLUButton
{
    BOOL _useThumbnailDragImage;
    BOOL _disablePointingHandCursor;
    BOOL _copyOnDownloadCompletion;
    FLUMedia *_media;
    NSString *_sourceFilePath;
    NSString *_destinationFilePath;
}

@property(retain, nonatomic) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain, nonatomic) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(nonatomic) BOOL copyOnDownloadCompletion; // @synthesize copyOnDownloadCompletion=_copyOnDownloadCompletion;
@property(nonatomic) BOOL disablePointingHandCursor; // @synthesize disablePointingHandCursor=_disablePointingHandCursor;
@property(nonatomic) BOOL useThumbnailDragImage; // @synthesize useThumbnailDragImage=_useThumbnailDragImage;
@property(retain, nonatomic) FLUMedia *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)endPasteboardDragging:(unsigned long long)arg1;
- (void)startPasteboardDragging;
- (id)imageForPasteboardDragView;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (id)pasteboardForDragObject;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateFrames;
- (void)setFrame:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (void)setupButton;
- (BOOL)accessibilityPerformPress;

@end

