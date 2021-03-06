//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSTCell;

@protocol TSTCellIteratorData <NSObject>
@property(readonly, nonatomic) BOOL cellHasCommentStorage;
@property(readonly, nonatomic) BOOL cellHasCustomFormat;
@property(readonly, nonatomic) BOOL cellHasConditionalStyle;
@property(readonly, nonatomic) BOOL cellHasFormula;
@property(readonly, nonatomic) int cellValueType;
@property(readonly, nonatomic) BOOL columnHidden;
@property(readonly, nonatomic) BOOL rowHidden;
@property(readonly, nonatomic) BOOL hidden;
@property(readonly, nonatomic) BOOL commentStorageOnly;
@property(readonly, nonatomic) BOOL styleOnly;
@property(readonly, nonatomic) struct TSUCellRect mergeRange;
@property(readonly, nonatomic) struct TSTCellStorage *cellRef;
@property(readonly, nonatomic) TSTCell *cell;
@property(readonly, nonatomic) struct TSUCellCoord cellID;
- (void)expandCell;
- (void)expandCellSuppressingFormulaInflation:(BOOL)arg1;
@end

