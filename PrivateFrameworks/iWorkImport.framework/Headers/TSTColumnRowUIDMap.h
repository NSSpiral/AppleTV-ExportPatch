/* Runtime dump - TSTColumnRowUIDMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTColumnRowUIDMap : TSPObject
{
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > mSortedColumnUIDs;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > mSortedRowUIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > mColumnUIDIndexForIndex;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > mRowUIDIndexForIndex;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > mColumnIndexForUIDIndex;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > mRowIndexForUIDIndex;
}

- (TSTColumnRowUIDMap *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (id)rowIndexesForUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (id)columnIndexesForUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)rowUIDsForRowIndexes:(NSArray *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)columnUIDsForColumnIndexes:(NSArray *)arg0;
- (TSTColumnRowUIDMap *)initWithTableModel:(TSTTableModel *)arg0;
- (unsigned short)rowIndexForUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (void)insertNewRowsInIndexRange:(struct _NSRange)arg0;
- (void)insertRowsAtIndexes:(NSArray *)arg0 withUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1;
- (void)insertColumnsAtIndexes:(NSArray *)arg0 withUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1;
- (void)insertNewColumnsInIndexRange:(struct _NSRange)arg0;
- (void)removeRowsInIndexSet:(NSSet *)arg0;
- (void)removeColumnsInIndexSet:(NSSet *)arg0;
- (void)moveRowIndexRange:(struct _NSRange)arg0 toIndex:(unsigned short)arg1;
- (void)moveColumnIndexRange:(struct _NSRange)arg0 toIndex:(unsigned char)arg1;
- (void)swapRowAtIndex:(unsigned short)arg0 withRowAtIndex:(unsigned short)arg1;
- (struct UUIDData<TSP::UUIDData>)columnUIDForIndex:(NSObject *)arg0;
- (struct UUIDData<TSP::UUIDData>)rowUIDForIndex:(NSObject *)arg0;
- (unsigned char)columnIndexForUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (id)mutableRowIndexesForUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)rowUIDs;
- (id)mutableColumnIndexesForUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)columnUIDs;
- (NSIndexSet *)UIDSetForIndexes:(NSArray *)arg0 asRows:(char)arg1;
- (NSSet *)mutableIndexesForUIDSet:(NSSet *)arg0 asRows:(char)arg1;
- (NSSet *)mutableIndexesForUIDSet:(NSSet *)arg0 asRows:(char)arg1 notFoundUIDs:(id)arg2;
- (struct _NSRange)columnRangeForUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (struct _NSRange)rowRangeForUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (TSTColumnRowUIDMap *)initWithContext:(NSObject *)arg0 columnUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 rowUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (void)_removeRowByIndex:(unsigned short)arg0;
- (void)_removeColumnByIndex:(unsigned char)arg0;
- (void)_insertColumnAtIndex:(unsigned char)arg0 withUID:(struct UUIDData<TSP::UUIDData> *)arg1;
- (void)_insertRowAtIndex:(unsigned short)arg0 withUID:(struct UUIDData<TSP::UUIDData> *)arg1;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
