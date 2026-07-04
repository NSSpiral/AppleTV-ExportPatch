/* Runtime dump - TSTLayoutCellIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutCellIterator : TSTCellIterator
{
    TSTMasterLayout * mMasterLayout;
    struct TSUColumnRowRect mLayoutRange;
    struct ? mLayoutCellID;
    TSTCell * mLayoutCell;
    struct ? mModelIteratorData;
    char mQueriedModel;
    char mModelIteratorHasCell;
    unsigned short mNumberOfLayoutColumns;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfRows;
}

@property (readonly, nonatomic) TSTMasterLayout * masterLayout;
@property (readonly, nonatomic) TSTTableModel * tableModel;

- (TSTTableModel *)tableModel;
- (TSTMasterLayout *)masterLayout;
- (TSTLayoutCellIterator *)initWithLayout:(NSObject *)arg0 range:(struct TSUColumnRowRect)arg1 flags:(struct ?)arg2;
- (TSTLayoutCellIterator *)initWithMasterLayout:(TSTMasterLayout *)arg0 range:(struct TSUColumnRowRect)arg1;
- (TSTLayoutCellIterator *)initWithMasterLayout:(TSTMasterLayout *)arg0;
- (TSTLayoutCellIterator *)initWithMasterLayout:(TSTMasterLayout *)arg0 range:(struct TSUColumnRowRect)arg1 flags:(struct ?)arg2;
- (TSTLayoutCellIterator *)initWithLayout:(NSObject *)arg0 range:(struct TSUColumnRowRect)arg1;
- (TSTLayoutCellIterator *)initWithLayout:(NSObject *)arg0;
- (void)dealloc;
- (void).cxx_construct;

@end
