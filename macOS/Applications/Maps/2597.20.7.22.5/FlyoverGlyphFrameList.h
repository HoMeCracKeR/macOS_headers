//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FlyoverGlyphFrameList : NSObject
{
    const struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned short _field4;
        unsigned short _field5;
        unsigned short _field6;
        _Bool _field7;
    } *_frames;
    double _inverseScaleFactor;
    double _horizontalScale;
    double _verticalScale;
    unsigned long long _frameCount;
    double _frameDuration;
    struct CGImage *_atlasImage;
    struct _NSRange _introFrameRange;
    struct _NSRange _loopFrameRange;
    struct _NSRange _outroFrameRange;
}

@property(readonly, nonatomic) struct CGImage *atlasImage; // @synthesize atlasImage=_atlasImage;
@property(readonly, nonatomic) struct _NSRange outroFrameRange; // @synthesize outroFrameRange=_outroFrameRange;
@property(readonly, nonatomic) struct _NSRange loopFrameRange; // @synthesize loopFrameRange=_loopFrameRange;
@property(readonly, nonatomic) struct _NSRange introFrameRange; // @synthesize introFrameRange=_introFrameRange;
@property(readonly, nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
- (CDStruct_660f747d)frameAtIndex:(unsigned long long)arg1;
- (id)init;

@end

