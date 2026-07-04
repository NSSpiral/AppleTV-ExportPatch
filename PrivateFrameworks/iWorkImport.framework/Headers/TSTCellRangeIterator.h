/* Runtime dump - TSTCellRangeIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellRangeIterator : NSObject
{
    TSTCellIterator * mCellIterator;
    struct ? mIterData;
    char mIterDataValid;
    char mCellValidForDelegate;
    <TSTCellRangeIteratorDelegate> * mDelegate;
}

@property (readonly, nonatomic) char cellValid;

- (TSTCellRangeIterator *)initWithTableModel:(TSTTableModel *)arg0 region:(NSObject *)arg1 delegate:(NSObject *)arg2;
- (TSTCellRangeIterator *)initWithTableModel:(TSTTableModel *)arg0 range:(struct TSUColumnRowRect)arg1 delegate:(struct ?)arg2;
- (char)cellValid;
- (TSTCellRangeIterator *)initWithTableModel:(TSTTableModel *)arg0 delegate:(NSObject *)arg1;
- (char)processRange;
- (void)dealloc;
- (void).cxx_construct;

@end
