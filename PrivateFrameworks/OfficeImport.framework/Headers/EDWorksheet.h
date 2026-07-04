/* Runtime dump - EDWorksheet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDWorksheet : EDSheet
{
    EDRowBlocks * mRowBlocks;
    EDColumnInfoCollection * mColumnInfos;
    EDCollection * mConditionalFormattings;
    EDCollection * mHyperlinks;
    EDCollection * mTables;
    EDCollection * mPivotTables;
    EDMergedCellCollection * mMergedCells;
    EDPane * mPane;
    EDWarnings * mWorksheetWarnings;
    double mDefaultColumnWidth;
    unsigned short mDefaultRowHeight;
    unsigned long mMaxRowOutlineLevel;
    unsigned long mMaxColumnOutlineLevel;
    BOOL mFitToPage;
    EDReference * mMaxCellReferencedInFormulas;
    OITSUPointerKeyDictionary * mMergedRows;
    OITSUPointerKeyDictionary * mMergedCols;
    EDReference * mImplicitCellArea;
}

- (id)mergedCells;
- (id)rowBlocks;
- (double)defaultColumnWidth;
- (unsigned short)defaultRowHeight;
- (id)columnInfos;
- (id)maxCellReferencedInFormulas;
- (void)setup;
- (void)teardown;
- (id)conditionalFormattings;
- (id)hyperlinks;
- (void)setPane:(PSEditingPane *)arg0;
- (id)worksheetWarnings;
- (void)setDefaultColumnWidth:(double)arg0;
- (void)setDefaultRowHeight:(unsigned short)arg0;
- (void)setFitToPage:(BOOL)arg0;
- (void)setMaxRowOutlineLevel:(unsigned long)arg0;
- (void)setMaxColumnOutlineLevel:(unsigned long)arg0;
- (void)reduceMemoryIfPossible;
- (BOOL)fitToPage;
- (BOOL)hasMergedCells;
- (unsigned long)maxRowOutlineLevel;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long)arg0;
- (unsigned long)maxColumnOutlineLevel;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long)arg0;
- (void)setMergedRowsRef:(id)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)setMergedColsRef:(id)arg0 from:(unsigned int)arg1 to:(unsigned int)arg2;
- (char)hasMergedRow;
- (char)isRowMerged:(unsigned int)arg0;
- (id)mergedRowRef:(unsigned int)arg0;
- (char)hasMergedCol;
- (char)isColMerged:(unsigned int)arg0;
- (id)mergedColRef:(unsigned int)arg0;
- (id)implicitCellArea;
- (void)setImplicitCellArea:(id)arg0;
- (id)pivotTables;
- (NSMutableArray *)tables;
- (PSEditingPane *)pane;

@end
