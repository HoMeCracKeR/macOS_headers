//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPContainedObject.h"

@class NSMutableDictionary, NSObject, TSKCustomFormatList, TSPLazyReference, TSTMergeRegionMap, TSTTableDataList, TSTTableHeaderStorage, TSTTileIDKeyDict;
@protocol TSDContainerInfo><TSWPStorageParent;

@interface TSTTableDataStore : TSPContainedObject
{
    struct TSTTableRBTreeNode_s *_columnTileIndex;
    struct TSTTableRBTreeNode_s *_rowTileIndex;
    TSTTileIDKeyDict *_tileStorage;
    TSTTableHeaderStorage *_rowHeaderStorage;
    TSPLazyReference *_columnHeaderStorageReference;
    TSPLazyReference *_conditionalStyleSetTableReference;
    TSPLazyReference *_stringTableReference;
    TSTTableDataList *_styleTableList;
    TSPLazyReference *_formulaTableReference;
    TSPLazyReference *_formulaErrorTableReference;
    TSPLazyReference *_richTextPayloadTableReference;
    TSPLazyReference *_formatTableReference;
    TSTTableDataList *_multipleChoiceListFormatTableList;
    TSPLazyReference *_commentStorageTableReference;
    TSPLazyReference *_importWarningSetTableReference;
    NSObject<TSDContainerInfo><TSWPStorageParent> *_richTextParentInfo;
    TSKCustomFormatList *_pasteboardCustomFormatList;
    NSMutableDictionary *_pasteboardCustomFormatMap;
    unsigned short _nextRowStripID;
    unsigned short _nextColumnStripID;
    TSTMergeRegionMap *_mergedCellRanges;
    unsigned int _cellCount;
    BOOL _cellCountValid;
    unsigned char _storageVersion;
    BOOL _upgrading;
}

@property BOOL upgrading; // @synthesize upgrading=_upgrading;
- (void).cxx_destruct;
- (BOOL)auditRowInfoCellCountsReturningResult:(id *)arg1;
- (BOOL)auditDatalistDuplicationReturningResult:(id *)arg1;
- (BOOL)confirmRefCountsReturningResult:(id *)arg1;
- (multimap_fcb6b22c)_makeCellMapFromTiles;
- (void)validate;
- (void)debugDump;
- (void)saveToArchive:(struct DataStore *)arg1 archiver:(id)arg2 isInTheDocument:(BOOL)arg3;
- (void)upgradeDataStoreCellStorage;
- (BOOL)needToUpgradeCellStorage;
- (void)setStorageParentToInfo:(id)arg1;
- (id)initWithArchive:(const struct DataStore *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
- (void)p_updateTileStorageToCurrentVersion;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)replaceConditionalStyleSetsUsingBlock:(CDUnknownBlockType)arg1;
- (void)replaceFormulasUsingBlock:(CDUnknownBlockType)arg1;
- (void)remapPasteboardCustomFormatKeys:(id)arg1;
- (id)setupEmptyPasteboardCustomFormatList;
- (void)makePasteboardCustomFormatList;
- (void)clearPasteboardCustomFormatMap;
- (void)copyPasteboardCustomFormatsFromDataStore:(id)arg1;
- (id)p_pasteboardCustomFormatMap;
- (id)p_pasteboardCustomFormatList;
@property(readonly, nonatomic) BOOL hasPasteboardCustomFormats; // @dynamic hasPasteboardCustomFormats;
- (id)addPasteboardCustomFormat:(id)arg1 toDocument:(id)arg2 updatingPasteboardFormat:(BOOL)arg3;
@property(readonly, nonatomic) TSTTableDataList *importWarningSetDataList;
@property(readonly, nonatomic) TSTTableDataList *commentStorageDataList;
@property(readonly, nonatomic) TSTTableDataList *multipleChoiceListFormatDataList;
- (void)resetAlmostEverything;
- (BOOL)verboseAuditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1;
- (BOOL)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 result:(id *)arg2;
@property(readonly, nonatomic) TSTTableDataList *formatDataList;
@property(readonly, nonatomic) TSTTableDataList *richTextPayloadDataList;
@property(readonly, nonatomic) TSTTableDataList *formulaErrorDataList;
@property(readonly, nonatomic) TSTTableDataList *formulaDataList;
@property(readonly, nonatomic) TSTTableDataList *styleDataList;
@property(readonly, nonatomic) TSTTableDataList *stringDataList;
@property(readonly, nonatomic) TSTTableDataList *conditionalStyleSetDataList;
- (struct TSUCellCoord)cellIDForCellWithRichTextStorage:(id)arg1 inRange:(struct TSUCellRect)arg2;
- (void)gatherReorganizeValuesForColumn:(unsigned char)arg1 rowRange:(struct _NSRange)arg2 outValues:(struct TSTCellReorganizeValue *)arg3;
- (void)reorganizeValueForStorage:(struct TSTCellStorage *)arg1 outValue:(struct TSTCellReorganizeValue *)arg2;
- (BOOL)hasFormulaAtCellID:(struct TSUCellCoord)arg1;
- (void)enumerateCellStoragesRowByRowToMaxID:(struct TSUCellCoord)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateCellStoragesInRange:(struct TSUCellRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)indicesForValueOrCommentCellsInRange:(struct TSUCellRect)arg1;
- (void)enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1 andWaitForAsyncBlocks:(BOOL)arg2;
- (void)enumerateTilesInRowRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTilesAtNode:(struct TSTTableRBTreeNode_s *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setColumnHeaderStorage:(id)arg1;
- (void)setRowHeaderStorage:(id)arg1;
- (void)enumerateColumnHeaderInfosWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateRowHeaderInfosWithBlock:(CDUnknownBlockType)arg1;

@end

