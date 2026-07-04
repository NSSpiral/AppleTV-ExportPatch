/* Runtime dump - GQHTableState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHTableState : NSObject
{
    int mPrevRowIndex;
    int mPrevColumnIndex;
    GQDTTable * mTable;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > * mCellCountInColumns;
    int mGroupLevel;
    BOOL mSplitTable;
    double mCurrentTablePosition;
    double mLastAttachmentPosition;
    long mSplitTableIndex;
    double mOriginalTableHeight;
}

- (BOOL)splitTable;
- (double)currentTablePosition;
- (void)addRowHeight:(float)arg0;
- (struct vector<unsigned short, std::__1::allocator<unsigned short> > *)cellCountInColumns;
- (int)prevRowIndex;
- (int)prevColumnIndex;
- (void)setSplitTable:(BOOL)arg0;
- (void)setSplitTableIndex:(long)arg0;
- (void)setOriginalTableHeight:(double)arg0;
- (void)setLastAttachmentPosition:(double)arg0;
- (void)setPrevRowIndex:(int)arg0 columnIndex:(int)arg1;
- (void)setGroupLevel:(int)arg0;
- (int)groupLevel;
- (double)lastAttachmentPosition;
- (long)nextSplitTableIndex;
- (double)originalTableHeight;
- (void)dealloc;
- (GQHTableState *)init;
- (RMTable *)table;
- (void)setTable:(GKTable *)arg0;

@end
