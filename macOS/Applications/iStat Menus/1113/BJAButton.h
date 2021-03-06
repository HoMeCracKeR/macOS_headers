//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSAccessibilityButton.h"

@class BJATargetItem, NSAttributedString, NSColor, NSFont, NSImage, NSParagraphStyle, NSString, NSTrackingArea;

@interface BJAButton : NSView <NSAccessibilityButton>
{
    BOOL _isHighlighted;
    BOOL _isMouseInView;
    BOOL _localize;
    BOOL _stretchable;
    BOOL _lineBreakCustom;
    BOOL _enabled;
    BOOL _selected;
    BOOL _selectedDisabledAlternate;
    BOOL _useFullHeight;
    BOOL _alternateKeyPressed;
    float _highlightedOpacity;
    BJATargetItem *_tapaction;
    long long _lines;
    long long _leftSize;
    long long _leftMargin;
    long long _rightMargin;
    long long _fontSize;
    long long _fontWeight;
    long long _textOffsetY;
    NSImage *_image;
    NSImage *_alternateImage;
    NSImage *_selectedImage;
    NSFont *_font;
    NSColor *_textColor;
    NSColor *_alternateTextColor;
    NSString *_title;
    NSString *_localizationFile;
    NSAttributedString *_attributedTitle;
    NSColor *_backgroundColor;
    NSParagraphStyle *_paragraphStyle;
    long long _alignment;
    long long _lineBreak;
    long long _buttonTag;
    NSTrackingArea *_focusTrackingArea;
    long long _keyEquivilentCode;
    NSString *_accessibilityLabelCustom;
    id _representedObject;
    struct CGPoint _textOffset;
    struct CGRect _textRect;
}

@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) BOOL alternateKeyPressed; // @synthesize alternateKeyPressed=_alternateKeyPressed;
@property(nonatomic) BOOL useFullHeight; // @synthesize useFullHeight=_useFullHeight;
@property(nonatomic) struct CGRect textRect; // @synthesize textRect=_textRect;
@property(copy, nonatomic) NSString *accessibilityLabelCustom; // @synthesize accessibilityLabelCustom=_accessibilityLabelCustom;
@property(nonatomic) long long keyEquivilentCode; // @synthesize keyEquivilentCode=_keyEquivilentCode;
@property(retain, nonatomic) NSTrackingArea *focusTrackingArea; // @synthesize focusTrackingArea=_focusTrackingArea;
@property(nonatomic) float highlightedOpacity; // @synthesize highlightedOpacity=_highlightedOpacity;
@property(nonatomic) long long buttonTag; // @synthesize buttonTag=_buttonTag;
@property(nonatomic) struct CGPoint textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) BOOL selectedDisabledAlternate; // @synthesize selectedDisabledAlternate=_selectedDisabledAlternate;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL lineBreakCustom; // @synthesize lineBreakCustom=_lineBreakCustom;
@property(nonatomic) long long lineBreak; // @synthesize lineBreak=_lineBreak;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(copy, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *localizationFile; // @synthesize localizationFile=_localizationFile;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSColor *alternateTextColor; // @synthesize alternateTextColor=_alternateTextColor;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) NSImage *alternateImage; // @synthesize alternateImage=_alternateImage;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(nonatomic) long long textOffsetY; // @synthesize textOffsetY=_textOffsetY;
@property(nonatomic) long long fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) long long leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) long long leftSize; // @synthesize leftSize=_leftSize;
@property(nonatomic) long long lines; // @synthesize lines=_lines;
@property(nonatomic) BOOL stretchable; // @synthesize stretchable=_stretchable;
@property(nonatomic) BOOL localize; // @synthesize localize=_localize;
@property(retain, nonatomic) BJATargetItem *tapaction; // @synthesize tapaction=_tapaction;
@property(nonatomic) BOOL isMouseInView; // @synthesize isMouseInView=_isMouseInView;
@property(nonatomic) BOOL isHighlighted; // @synthesize isHighlighted=_isHighlighted;
- (void).cxx_destruct;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)invalidateText;
- (void)drawTitle:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)commonInit;
- (void)awakeFromNib;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (long long)tag;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

