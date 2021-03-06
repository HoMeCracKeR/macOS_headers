//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (iTerm)
+ (id)it_formatBytes:(double)arg1;
+ (id)uuid;
+ (id)stringForModifiersWithMask:(unsigned long long)arg1;
+ (id)stringWithHexEncodedString:(id)arg1;
+ (id)stringWithHumanReadableSize:(unsigned long long)arg1;
+ (id)shellEscapableCharacters;
+ (id)stringFromPasteboard;
+ (id)stringWithLongCharacter:(unsigned int)arg1;
+ (BOOL)isDoubleWidthCharacter:(int)arg1 ambiguousIsDoubleWidth:(BOOL)arg2 unicodeVersion:(long long)arg3;
+ (id)stringWithInt:(int)arg1;
@property(readonly, nonatomic) NSString *jsonEncodedString;
- (BOOL)startsWithEmoji;
- (void)it_drawInRect:(struct CGRect)arg1 attributes:(id)arg2;
- (struct CGRect)it_boundingRectWithSize:(struct CGSize)arg1 attributes:(id)arg2 truncated:(char *)arg3;
- (id)stringByMakingControlCharactersToPrintable;
- (struct _NSRange)makeRangeSafe:(struct _NSRange)arg1;
- (BOOL)isNumeric;
- (id)surname;
- (id)codePoints;
- (id)stringByEscapingForXML;
- (id)stringByEscapingForJSON;
- (id)stringByInsertingTerminalPunctuation:(id)arg1;
- (BOOL)isInQuotationMarks;
- (BOOL)endsWithQuotationMark;
- (BOOL)startsWithQuotationMark;
- (unsigned long long)firstCharacter;
- (unsigned long long)hashWithDJB2;
- (id)stringByCompactingFloatingPointString;
- (id)attributesUsingFont:(id)arg1 fittingSize:(struct CGSize)arg2 attributes:(id)arg3;
- (unsigned long long)iterm_unsignedIntegerValue;
- (void)reverseEnumerateSubstringsEqualTo:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateComposedCharacters:(CDUnknownBlockType)arg1;
- (BOOL)stringMatchesGlobPattern:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)doubleDollarVariables;
- (id)stringByReplacingControlCharsWithQuestionMark;
- (id)stringWithFirstLetterCapitalized;
- (id)ellipsizedDescriptionNoLongerThan:(int)arg1;
- (unsigned long long)numberOfLines;
- (id)stringRepeatedTimes:(int)arg1;
- (id)stringByReplacingVariableReferencesWithVariables:(id)arg1;
- (id)stringByPerformingSubstitutions:(id)arg1;
- (id)keyValuePair;
- (double)heightWithAttributes:(id)arg1 constrainedToWidth:(double)arg2;
- (id)stringByExpandingVimSpecialCharacters;
- (id)metaCharacter;
- (id)controlCharacter;
- (id)hexCharacter;
- (id)octalCharacter;
- (unsigned long long)indexOfSubstring:(id)arg1 fromIndex:(unsigned long long)arg2;
- (id)decomposedStringWithHFSPlusMapping;
- (id)precomposedStringWithHFSPlusMapping;
- (id)_convertBetweenUTF8AndHFSPlusAsPrecomposition:(BOOL)arg1;
- (id)hexEncodedString;
- (id)fontValue;
- (BOOL)stringIsUrlLike;
- (id)hexOrDecimalConversionHelp;
- (id)dateValueFromUTC;
- (id)dateValueFromUnix;
- (id)timestampConversionHelp;
- (id)utf8Help;
- (id)helpfulSynonyms;
- (id)stringByCapitalizingFirstLetter;
- (id)stringByRemovingTerminatingPunctuation;
- (id)stringByRemovingEnclosingBrackets;
- (struct _NSRange)rangeOfURLInString;
- (id)stringByRemovingEnclosingPunctuationMarks;
- (id)substringIncludingOffset:(int)arg1 fromCharacterSet:(id)arg2 charsTakenFromPrefix:(int *)arg3;
- (id)stringByTrimmingTrailingCharactersFromCharacterSet:(id)arg1;
- (id)stringByTrimmingTrailingWhitespace;
- (id)stringByBase64DecodingStringWithEncoding:(unsigned long long)arg1;
- (id)stringByTrimmingLeadingWhitespace;
- (id)stringWithOnlyDigits;
- (id)initWithUTF8DataIgnoringErrors:(id)arg1;
- (id)stringByEscapingQuotes;
- (id)stringByReplacingEscapedChar:(unsigned short)arg1 withString:(id)arg2;
- (id)stringByReplacingEscapedHexValuesWithChars;
- (id)dataFromHexValues;
- (id)stringByReplacingBackreference:(int)arg1 withString:(id)arg2;
- (id)componentsBySplittingStringWithQuotesAndBackslashEscaping:(id)arg1;
- (id)componentsInShellCommand;
- (id)componentsBySplittingProfileListQuery;
- (id)stringWithLinefeedNewlines;
- (id)stringWithPercentEscape;
- (id)stringByEscapingForURL;
- (id)stringWithShellEscapedTabs;
- (id)stringWithEscapedShellCharactersExceptTabAndNewline;
- (id)stringWithEscapedShellCharactersIncludingNewlines:(BOOL)arg1;
@end

