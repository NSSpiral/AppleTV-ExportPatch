/* Runtime dump - OADTableStyleFlattener
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableStyleFlattener : NSObject
{
    OADTable * mTable;
    OADTableProperties * mTableProperties;
    OADTableStyle * mTableStyle;
    int mColumnCount;
    int mRowCount;
    struct OADTFTemplateMatrix<OADTableCell *> * mCellMatrix;
    struct OADTFTemplateMatrix<OADTablePartStyle *> * mCellStyles;
    id mStrokes;
}

- (void)dealloc;
- (OADTableStyleFlattener *)initWithTable:(GKTable *)arg0;
- (void)applyCellStyleFromPart:(int)arg0 dir1:(int)arg1 fromI1:(int)arg2 fromI2:(int)arg3 dir1Span:(int)arg4 dir2Span:(int)arg5;
- (int)cellCountAlongDir:(int)arg0;
- (void)applyCellStyleOfBandsNormalToDir:(int)arg0 parity:(int)arg1 part:(int)arg2;
- (void)applyCellStyleOfExtremeVectorNormalToDir:(int)arg0 atExtremePos:(int)arg1 part:(int)arg2;
- (void)applyCornerCellStyleWithRowPos:(int)arg0 columnPos:(int)arg1 part:(int)arg2;
- (void)applyWholeTableCellStyle;
- (void)applyBandCellStyles;
- (void)applyExtremeVectorCellStyles;
- (void)applyCornerCellStyles;
- (void)setStroke:(TSDStroke *)arg0 ofSegmentNormalToDir1:(int)arg1 i1:(int)arg2 fromI2:(int)arg3;
- (void)applyStroke:(int)arg0 fromPart:(int)arg1 normalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4 dir2Span:(int)arg5;
- (void)applyStroke:(int)arg0 fromPart:(int)arg1 normalToDir1:(int)arg2 i1:(int)arg3 fromI2:(int)arg4 toI2:(int)arg5;
- (void)applyStrokesFromPart:(int)arg0 fromPos:(struct OADTMatrixPos)arg1 toPos:(struct OADTMatrixPos)arg2;
- (id)sourceCellAtI1:(int)arg0 i2:(int)arg1 dir1:(int)arg2;
- (int)cellParityRelativeToDir1:(int)arg0 i1:(int)arg1 i2:(int)arg2;
- (void)applyStrokesOfBandsNormalToDir:(int)arg0 parity:(int)arg1 part:(int)arg2;
- (void)applyStrokeOfExtremeVectorNormalToDir:(int)arg0 atExtremePos:(int)arg1;
- (void)applyCornerStrokesWithRowPos:(int)arg0 columnPos:(int)arg1 part:(int)arg2;
- (void)createStrokeMatrices;
- (void)applyWholeTableStrokes;
- (void)applyBandStrokes;
- (void)applyExtremeVectorStrokes;
- (void)applyCornerStrokes;
- (struct OADTMatrixPos)dominantCellInRowRange:(struct _NSRange)arg0 columnRange:(struct _NSRange)arg1;
- (void)applyCellPropertiesToTextBodyWithCell:(NSObject *)arg0;
- (void)applyCellStyleToTextBodyWithCell:(NSObject *)arg0;
- (void)applyStylingToTextInCell:(NSObject *)arg0;
- (id)strokeOfSegmentNormalToDir1:(int)arg0 i1:(int)arg1 fromI2:(int)arg2;
- (void)fixVectorAtExtremePositionFlags;
- (void)loadCells;
- (void)applyCellStyles;
- (void)applyStyleStrokes;
- (void)writeResolvedStyling;
- (void)flatten;

@end
