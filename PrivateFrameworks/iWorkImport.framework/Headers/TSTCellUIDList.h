/* Runtime dump - TSTCellUIDList
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellUIDList : NSObject <NSCopying>
{
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _rowIdList;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _columnIdList;
    struct vector<int, std::__1::allocator<int> > _rowUIDIndexList;
    struct vector<int, std::__1::allocator<int> > _columnUIDIndexList;
    struct vector<TSTCellUID, std::__1::allocator<TSTCellUID> > _uncompressedCellUIDs;
    unsigned long _compressedSize;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) unsigned long compressedSize;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;

+ (TSTCellUIDList *)cellUIDList;
+ (NSObject *)cellUIDListFromRange:(struct TSTCellUIDRange *)arg0;

- (void)addCellUID:(struct TSTCellUID *)arg0;
- (void)enumerateCellUIDsUsingBlock:(id /* block */)arg0;
- (void *)iterator;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)rowUIDs;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)columnUIDs;
- (void)addCellRegion:(NSObject *)arg0 withColumnUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 rowUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (TSTCellUIDList *)initFromMessage:(struct CellUIDListArchive *)arg0 unarchiver:(struct CellUIDListArchive)arg1;
- (void)saveToMessage:(struct CellUIDListArchive *)arg0 archiver:(NSObject *)arg1;
- (void)remapUIDsByColumnMap:(struct TSUUuidMap *)arg0 rowMap:(struct TSUUuidMap)arg1;
- (void)p_compressUID:(struct UUIDData<TSP::UUIDData> *)arg0 index:(struct UUIDData<TSP::UUIDData>)arg1 UIDtoIndexMap:(struct ?)arg2 UIDs:(id)arg3 compressedIndexes:(NSArray *)arg4 lastSameUIDIndex:(unsigned long)arg5;
- (void)compressUIDIndexListFrom:(struct vector<int, std::__1::allocator<int> > *)arg0 withUIDCount:(struct vector<int, std::__1::allocator<int> >)arg1 to:(NSObject *)arg2;
- (struct vector<int, std::__1::allocator<int> > *)compressedRowIndexes;
- (struct vector<int, std::__1::allocator<int> > *)compressedColumnIndexes;
- (void)setCompressedColumnIndexes:(struct vector<int, std::__1::allocator<int> > *)arg0;
- (struct vector<TSTCellUID, std::__1::allocator<TSTCellUID> > *)uncompressedCellUIDs;
- (void)dealloc;
- (unsigned long)count;
- (TSTCellUIDList *)init;
- (TSTCellUIDList *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)compress;
- (unsigned long)compressedSize;

@end
