/* Runtime dump - TSCEFormulaRewriteInfo_RowColumnInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewriteInfo_RowColumnInfo : NSObject
{
    struct UUIDData<TSP::UUIDData> _tableUID;
    struct UUIDData<TSP::UUIDData> _conditionalStyleOwnerUID;
    TSCEFormulaRewrite_Uids * _rowOrColumnUids;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _rowOrColumnUuids;
    char _isRows;
    NSArray * _rangeEntries;
    struct TSCERangeCoordinate _tableRange;
    TSUMutableUUIDSet * _expandedRowColumnUuids;
    TSCEFormulaRewriteInfo_RowColumnInfo * _auxRowColumnInfo;
    TSCEFormulaRewrite_RelocatedMergeCells * _relocatedMergeCells;
    unsigned int _maxMergeFormulaIndex;
}

@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> * tableUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> * conditionalStyleOwnerUID;
@property (readonly, nonatomic) char isRows;
@property (readonly, nonatomic) char isColumns;
@property (readonly, retain, nonatomic) TSCEFormulaRewrite_Uids * rowOrColumnUids;
@property (readonly, nonatomic) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > * rowOrColumnUuids;
@property (readonly, retain, nonatomic) NSIndexSet * rowOrColumnIndices;
@property (readonly, retain, nonatomic) TSUUUIDSet * expandedRowColumnUuids;
@property (readonly, retain, nonatomic) TSCEFormulaRewriteInfo_RowColumnInfo * auxRowColumnInfo;
@property (readonly, retain, nonatomic) TSCEFormulaRewrite_RelocatedMergeCells * relocatedMergeCells;
@property (nonatomic) unsigned int maxMergeFormulaIndex;

- (struct UUIDData<TSP::UUIDData> *)tableUID;
- (struct UUIDData<TSP::UUIDData> *)conditionalStyleOwnerUID;
- (void)archive:(struct ColumnOrRowUuidsInfoArchive *)arg0;
- (void)unloadIndexes;
- (char)isRows;
- (NSIndexSet *)rowOrColumnIndices;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)rowOrColumnUuids;
- (TSCEFormulaRewriteInfo_RowColumnInfo *)initWithFormulaOwnerUID:(struct UUIDData<TSP::UUIDData> *)arg0 uuids:(struct UUIDData<TSP::UUIDData>)arg1 areRows:(struct ?)arg2;
- (unsigned short)offsetForRowIndex:(unsigned short)arg0;
- (unsigned short)offsetForUpdatedRowIndex:(unsigned short)arg0 isRemoveRows:(char)arg1;
- (TSCEFormulaRewrite_Uids *)rowOrColumnUids;
- (struct TSCERangeCoordinate)affectedRangeForRemoveRows;
- (TSCEFormulaRewriteInfo_RowColumnInfo *)auxRowColumnInfo;
- (char)isColumns;
- (TSCEFormulaRewriteInfo_RowColumnInfo *)initWithArchive:(struct ColumnOrRowUuidsInfoArchive *)arg0 tableID:(struct ColumnOrRowUuidsInfoArchive)arg1;
- (void)loadIndexesForTable:(id)arg0;
- (void)loadMergeIndexesForTable:(id)arg0 isRemove:(char)arg1;
- (void)createAuxRowColumnInfoForMove;
- (struct ?)updatedCellCoordinateForRewriteType:(int)arg0 forTableUID:(struct UUIDData<TSP::UUIDData> *)arg1 originalCellCoordinate:(struct UUIDData<TSP::UUIDData>)arg2;
- (struct ?)previousCellCoordinateForRewriteType:(int)arg0 forTableUID:(struct UUIDData<TSP::UUIDData> *)arg1 updatedCellCoordinate:(struct UUIDData<TSP::UUIDData>)arg2;
- (char)indexIsAffected:(unsigned short)arg0;
- (struct UUIDData<TSP::UUIDData>)uuidForIndex:(NSObject *)arg0;
- (unsigned short)indexForUuid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (struct TSCERangeCoordinate)affectedRangeForInsertRows;
- (struct TSCERangeCoordinate)affectedRangeForMoveRows;
- (struct vector<TSCERangeCoordinate, std::__1::allocator<TSCERangeCoordinate> >)coordRangesForInsertRemove;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)uuidsForRowsInRange:(NSObject *)arg0;
- (TSUUUIDSet *)expandedRowColumnUuids;
- (TSCEFormulaRewrite_RelocatedMergeCells *)relocatedMergeCells;
- (unsigned int)maxMergeFormulaIndex;
- (void)setMaxMergeFormulaIndex:(unsigned int)arg0;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct TSCERangeCoordinate)tableRange;

@end
