/* Runtime dump - TSTCellIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellIterator : NSObject
{
    TSTTableModel * mTableModel;
    TSTCellRegion * mModelRegion;
    struct NSObject * mModelRegionIterator;
    TSTTableDataStore * mTableDataStore;
    struct ? mPreviousCellID;
    TSTTableTileRowInfo * mCurRow;
    TSTTableTile * mCurTile;
    unsigned short mCurRowID;
    struct _NSRange mCurTileRange;
    TSTCell * mCell;
    char mSkipStyleOnlyCells;
    char mSkipCommentStorageOnlyCells;
    char mDontExpandCellRefs;
    int mRowWalkDirection;
    char mDontCheckSize;
    char mDontReturnMergeRegions;
    char mReturnHiddenCells;
    char mDontInflateFormulas;
    char mReturnEmptyCells;
    char mReturnCellBorder;
}

@property (readonly) char dontExpandCellRefs;
@property (readonly) int rowWalkDirection;
@property (readonly, nonatomic) TSTTableModel * tableModel;

- (TSTTableModel *)tableModel;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0 flags:(unsigned long)arg1;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0 region:(NSObject *)arg1 flags:(unsigned long)arg2;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0 range:(struct TSUColumnRowRect)arg1 flags:(struct ?)arg2;
- (char)getNext:(struct ? *)arg0;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0 range:(struct TSUColumnRowRect)arg1;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0 region:(NSObject *)arg1 flags:(unsigned long)arg2 clampingRange:(struct TSUColumnRowRect)arg3;
- (void)p_resetIterData:(struct ? *)arg0;
- (char)p_getData:(struct ? *)arg0 forCellID:(struct ?)arg1;
- (TSTCellIterator *)initWithTableModel:(TSTTableModel *)arg0 region:(NSObject *)arg1;
- (char)dontExpandCellRefs;
- (int)rowWalkDirection;
- (void)terminate;
- (void)dealloc;
- (void).cxx_construct;

@end
