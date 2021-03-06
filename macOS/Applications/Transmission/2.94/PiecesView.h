//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageView.h"

@class NSColor, Torrent;

@interface PiecesView : NSImageView
{
    char *fPieces;
    NSColor *fGreenAvailabilityColor;
    NSColor *fBluePieceColor;
    Torrent *fTorrent;
    long long fNumPieces;
    long long fAcross;
    long long fWidth;
    long long fExtraBorder;
}

- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateView;
- (void)clearView;
- (void)setTorrent:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

