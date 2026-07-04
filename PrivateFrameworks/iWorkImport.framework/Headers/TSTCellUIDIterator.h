/* Runtime dump - TSTCellUIDIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellUIDIterator : NSObject
{
    struct deque<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _recentRowResults;
    struct deque<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _recentColumnResults;
    TSTCellUIDList * _cellUIDList;
    unsigned long _index;
    unsigned long _rowIndex;
    unsigned long _columnIndex;
    unsigned long _rowRemainDup;
    unsigned long _columnRemainDup;
    unsigned long _lastRowDiffPos;
    unsigned long _lastColumnDiffPos;
    struct TSTCellUID _cellUID;
}

@property (retain, nonatomic) TSTCellUIDList * cellUIDList;
@property (nonatomic) unsigned long index;
@property (nonatomic) unsigned long rowIndex;
@property (nonatomic) unsigned long columnIndex;
@property (nonatomic) unsigned long rowRemainDup;
@property (nonatomic) unsigned long columnRemainDup;
@property (nonatomic) unsigned long lastRowDiffPos;
@property (nonatomic) unsigned long lastColumnDiffPos;
@property (nonatomic) struct TSTCellUID cellUID;

- (TSTCellUIDList *)cellUIDList;
- (struct TSTCellUID)nextCellUID;
- (TSTCellUIDIterator *)initWithCellUIDList:(TSTCellUIDList *)arg0;
- (struct UUIDData<TSP::UUIDData>)p_nextCellRefIdWithUIDIndexList:(NSArray *)arg0 UIDs:(id)arg1 index:(SEL)arg2 remainDup:(struct vector<int, std::__1::allocator<int> > *)arg3 lastDiffPos:(struct vector<int, std::__1::allocator<int> >)arg4 recentResults:(NSArray *)arg5;
- (void)setCellUIDList:(TSTCellUIDList *)arg0;
- (unsigned long)rowRemainDup;
- (void)setRowRemainDup:(unsigned long)arg0;
- (unsigned long)columnRemainDup;
- (void)setColumnRemainDup:(unsigned long)arg0;
- (unsigned long)lastRowDiffPos;
- (void)setLastRowDiffPos:(unsigned long)arg0;
- (unsigned long)lastColumnDiffPos;
- (void)setLastColumnDiffPos:(unsigned long)arg0;
- (struct TSTCellUID)cellUID;
- (void)setCellUID:(struct TSTCellUID)arg0;
- (void)dealloc;
- (unsigned long)rowIndex;
- (unsigned long)index;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setRowIndex:(unsigned long)arg0;
- (void)setIndex:(unsigned long)arg0;
- (void)setColumnIndex:(unsigned long)arg0;
- (unsigned long)columnIndex;

@end
