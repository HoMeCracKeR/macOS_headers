//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "__KNSlideTreeEditorAccessibility_super.h"

@class KNDocumentRootAccessibility, NSArray;

@interface KNSlideTreeEditorAccessibility : __KNSlideTreeEditorAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
+ (id)tsaxCastFrom:(id)arg1;
- (void)p_deleteSlideNodes:(id)arg1 ignoreCollapsedState:(BOOL)arg2 preferExistingSelection:(BOOL)arg3;
@property(readonly, nonatomic) KNDocumentRootAccessibility *tsaxDocumentRoot;
@property(readonly, nonatomic) NSArray *tsaxOrderedSelectedSlideNodes;
- (id)tsaxTarget;

@end

