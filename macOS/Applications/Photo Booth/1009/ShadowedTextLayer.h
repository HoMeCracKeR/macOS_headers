//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@interface ShadowedTextLayer : CATextLayer
{
    struct CGColor *_shadowColor;
    struct CGSize _shadowOffset;
    float _shadowOpacity;
    double _shadowRadius;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)setShadowColor:(struct CGColor *)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)_setShadowColor:(struct CGColor *)arg1 withAlpha:(float)arg2;
- (void)dealloc;
- (void)setContentsScale:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

