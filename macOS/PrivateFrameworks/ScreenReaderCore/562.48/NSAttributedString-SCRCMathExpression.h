//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (SCRCMathExpression)
+ (id)scrcSpaceString;
+ (id)scrcPauseString;
+ (id)scrcString;
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithLiteralString:(id)arg1;
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithString:(id)arg1;
+ (id)scrcStringWithFormat:(id)arg1;
+ (id)_scrcStringWithFormat:(id)arg1 args:(struct __va_list_tag [1])arg2;
- (BOOL)scrcContainsPause;
- (BOOL)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (id)scrcStringByAppendingAttributedString:(id)arg1;
- (struct _NSRange)_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;
- (struct _NSRange)_scrcRangeOfVanillaFormatSpecifier;
@end

