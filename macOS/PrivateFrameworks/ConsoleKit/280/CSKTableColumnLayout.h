//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSSortDescriptor;

@interface CSKTableColumnLayout : NSObject <NSSecureCoding>
{
    BOOL _layoutColumnsCanBeReordered;
    NSArray *_layoutColumnIdentifiers;
    NSDictionary *_layoutColumnInitialWidths;
    NSSortDescriptor *_layoutDefaultSortDescriptor;
}

+ (BOOL)supportsSecureCoding;
+ (id)updatedTableColumnIdentifiersFromLayout:(id)arg1 tableColumnIdentifier:(id)arg2;
@property(retain, nonatomic) NSSortDescriptor *layoutDefaultSortDescriptor; // @synthesize layoutDefaultSortDescriptor=_layoutDefaultSortDescriptor;
@property(retain, nonatomic) NSDictionary *layoutColumnInitialWidths; // @synthesize layoutColumnInitialWidths=_layoutColumnInitialWidths;
@property(nonatomic) BOOL layoutColumnsCanBeReordered; // @synthesize layoutColumnsCanBeReordered=_layoutColumnsCanBeReordered;
@property(retain, nonatomic) NSArray *layoutColumnIdentifiers; // @synthesize layoutColumnIdentifiers=_layoutColumnIdentifiers;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fillTableColumnsMenu:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)layoutColumnSortDescriptorForColumnWithIdentifier:(id)arg1;
- (double)layoutColumnInitialWidthWithIdentifier:(id)arg1;
- (double)layoutColumnMaxWidthWithIdentifier:(id)arg1;
- (double)layoutColumnMinWidthWithIdentifier:(id)arg1;
- (BOOL)layoutColumnCanBeResizedWithIdentifier:(id)arg1;
- (id)layoutColumnLocalizedTitleForIdentifier:(id)arg1;
- (id)eligibleLayoutColumnIdentifiers;
- (id)init;

@end

