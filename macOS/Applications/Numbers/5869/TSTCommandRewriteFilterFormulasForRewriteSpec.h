//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

@class TSCEFormulaRewriteSpec, TSTTableFilterSet;

@interface TSTCommandRewriteFilterFormulasForRewriteSpec : TSTTableCommand
{
    TSCEFormulaRewriteSpec *_rewriteSpec;
    TSTTableFilterSet *_originalFilterSet;
}

- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)rollbackWork;
- (void)redoWork;
- (void)undoWork;
- (void)commit;
- (BOOL)shouldUpdateTimestamp;
- (id)initWithTableInfo:(id)arg1 rewriteSpec:(id)arg2;

@end

