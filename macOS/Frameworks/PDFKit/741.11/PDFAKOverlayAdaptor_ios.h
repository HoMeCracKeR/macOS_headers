//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PDFKit/PDFAKOverlayAdaptor.h>

@class PDFAKOverlayAdaptorPrivate_ios;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptor_ios : PDFAKOverlayAdaptor
{
    PDFAKOverlayAdaptorPrivate_ios *_privateIOS;
}

- (void).cxx_destruct;
- (void)adjustScrollViewForKeyboardNotification:(id)arg1;
- (unsigned long long)pageIndexForAnnotation:(id)arg1;
- (void)annotationDidEndEditing:(id)arg1;
- (void)annotationWillBeginEditing:(id)arg1;
- (id)_scrollViewRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)updateDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2 withPriority:(BOOL)arg3;
- (void)removeDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)addDrawingGestureRecognizer:(id)arg1 forPageAtIndex:(unsigned long long)arg2;
- (void)_teardownGestureRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_setupGestureRecognizersForPageAtIndex:(unsigned long long)arg1;
- (void)_teardownGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
- (void)_setupGestureRecognizersForView:(id)arg1 andDocument:(id)arg2;
@property _Bool singleFingerScrollingDisabled;
- (void)_uninstallOverlayAtIndex:(unsigned long long)arg1;
- (void)_installOverlayForPageView:(id)arg1 ofPage:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithPDFView:(id)arg1;

@end

