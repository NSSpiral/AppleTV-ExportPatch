/* Runtime dump - OABRTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABRTable : NSObject
{
    ESDContainer * mSrcTable;
    OADTable * mTgtTable;
    OABReaderState * mState;
    struct CGPoint mScale;
    int mRowCount;
    int mColumnCount;
    OABTableSortedIntArray * mXCoords;
    OABTableSortedIntArray * mYCoords;
    struct OABTable2DArray<EshShape *> * mHorzLines;
    struct OABTable2DArray<EshShape *> * mVertLines;
    struct OABTable2DArray<OABTableCell> * mCells;
}

- (void)dealloc;
- (void).cxx_construct;
- (id)readStrokeFromShape:(struct EshShape *)arg0;
- (void)readAnchor;
- (void)mapScale;
- (void)readCoordinates;
- (void)readCellsAndLines;
- (void)validateTable;
- (void)createTargetTableContents;
- (OABRTable *)initWithSourceTable:(id)arg0 targetTable:(id)arg1 state:(NSObject *)arg2;
- (void)map;

@end
