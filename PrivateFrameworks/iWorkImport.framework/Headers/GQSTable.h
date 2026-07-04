/* Runtime dump - GQSTable
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQSTable : NSObject
{
    GQDTTable * mTable;
    GQDTOverlapCell * mCurrentOverlapCell;
    GQDTCell * mLastCellRead;
    char mIsStreaming;
    char mAlwaysPutReadCellsInArray;
    long mCellCount;
    char mIsCounting;
}

- (void)skipCells:(long)arg0;
- (void)incrementCellPosition;
- (char)isCounting;
- (NSObject *)currentOverlapCell;
- (void)setCurrentOverlapCell:(NSObject *)arg0;
- (void)setAlwaysPutReadCellsInArray:(char)arg0;
- (void)setIsCountingCount:(char)arg0;
- (id)lastCellRead;
- (GQSTable *)initWithStreaming:(char)arg0 table:(_UIAlertSheetTable *)arg1;
- (char)alwaysPutReadCellsInArray;
- (void)setLastCellRead:(id)arg0;
- (void)dealloc;
- (long)row;
- (RMTable *)table;
- (char)isStreaming;
- (long)column;

@end
