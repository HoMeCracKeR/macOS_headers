//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPStorageSpellChecker.h"

@interface TSWPMacStorageSpellChecker : TSWPStorageSpellChecker
{
}

+ (void)p_inputLanguageDidChangeNotification:(id)arg1;
+ (id)suggestionsForRange:(struct _NSRange)arg1 inStorage:(id)arg2;
+ (id)spellCheckerForStorage:(id)arg1 selectionPath:(id)arg2 orSearchCanvasDelegate:(id)arg3;
- (void)p_addGrammarChecking:(id)arg1 text:(id)arg2 ifValidForRange:(struct _NSRange)arg3 results:(id)arg4;
- (void)i_addSpellingAndGrammarMarksInRange:(struct _NSRange)arg1 spellingResults:(id)arg2 grammarResults:(id)arg3;
- (void)findErrorsInRange:(struct _NSRange)arg1 onHit:(CDUnknownBlockType)arg2 stop:(char *)arg3;
- (id)p_textCheckingResultForWordAtCharIndex:(unsigned long long)arg1 types:(unsigned long long)arg2 outRange:(struct _NSRange *)arg3;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)grammarResultForCharIndex:(unsigned long long)arg1 range:(out struct _NSRange *)arg2;
- (struct _NSRange)firstErrorInRange:(struct _NSRange)arg1;
- (BOOL)hasReplacementForCharIndex:(unsigned long long)arg1 type:(unsigned long long)arg2 outRange:(struct _NSRange *)arg3 outString:(id *)arg4;
- (id)correctionStringForWordAtCharIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfAutocorrectCandidateWordAtCharIndex:(unsigned long long)arg1;
- (id)p_autoCorrectionForWordAtCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange *)arg2;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selectionPath:(id)arg2 orSearchCanvasDelegate:(id)arg3;
- (void)p_resetSpellCheckingForNotification:(id)arg1;

@end

