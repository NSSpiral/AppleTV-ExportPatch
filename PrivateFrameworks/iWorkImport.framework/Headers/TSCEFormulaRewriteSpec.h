/* Runtime dump - TSCEFormulaRewriteSpec
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewriteSpec : NSObject
{
    int _type;
    struct __CFUUID * _tableID;
    struct __CFUUID * _conditionalStyleOwnerID;
    id _info;
}

@property (readonly, nonatomic) int rewriteType;
@property (readonly, nonatomic) struct __CFUUID * tableID;
@property (readonly, nonatomic) struct __CFUUID * conditionalStyleOwnerID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> tableUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> conditionalStyleOwnerUID;

- (struct UUIDData<TSP::UUIDData>)tableUID;
- (struct UUIDData<TSP::UUIDData>)conditionalStyleOwnerUID;
- (struct __CFUUID *)tableID;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)expandedRowColumnUuids;
- (struct __CFUUID *)affectedOwnerID;
- (struct __CFUUID *)affectedConditionalStyleOwnerID;
- (struct ?)updatedCellCoordinateForTableUID:(struct UUIDData<TSP::UUIDData> *)arg0 originalCellCoordinate:(struct UUIDData<TSP::UUIDData>)arg1;
- (struct ?)previousCellCoordinateForTableUID:(struct UUIDData<TSP::UUIDData> *)arg0 updatedCellCoordinate:(struct UUIDData<TSP::UUIDData>)arg1;
- (TSCEFormulaRewriteSpec *)initWithOwnerDeletion:(struct __CFUUID *)arg0;
- (TSCEFormulaRewriteSpec *)initWithOwnerInsertion:(struct __CFUUID *)arg0;
- (TSCEFormulaRewriteSpec *)initWithOwnerDeletionForCharts:(struct __CFUUID *)arg0;
- (TSCEFormulaRewriteSpec *)initForTableResize:(struct __CFUUID *)arg0;
- (TSCEFormulaRewriteSpec *)initWithTransposeTable:(struct __CFUUID *)arg0 withNumberOfFooterRows:(unsigned short)arg1;
- (TSCEFormulaRewriteSpec *)initForRemoveRowsOrColumnsFromTable:(struct __CFUUID *)arg0 rowColumnUuids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 areRows:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (TSCEFormulaRewriteSpec *)initForInsertingRowsOrColumnsIntoTable:(struct __CFUUID *)arg0 rowColumnUuids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 areRows:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (TSCEFormulaRewriteSpec *)initForMovingRowsOrColumnsInTable:(struct __CFUUID *)arg0 rowColumnUuids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 areRows:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (TSCEFormulaRewriteSpec *)initForSortWithTableID:(struct __CFUUID *)arg0 rowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1;
- (TSCEFormulaRewriteSpec *)initForMovingRegionWithSrcTableID:(struct __CFUUID *)arg0 srcColumnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 srcRowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2 dstTableID:(struct UUIDData<TSP::UUIDData> *)arg3 dstColumnUids:(struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg4 dstRowUids:(TSCEFormulaRewrite_Uids *)arg5;
- (TSCEFormulaRewriteSpec *)initForMergeCellsWithTableID:(struct __CFUUID *)arg0 columnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 rowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (TSCEFormulaRewriteSpec *)initForUndoMergeCellsWithTableID:(struct __CFUUID *)arg0 columnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 rowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (TSCEFormulaRewriteSpec *)initForTableIDReassignment:(struct TSUUuidMap *)arg0;
- (NSDictionary *)rewriteInfo;
- (struct UUIDData<TSP::UUIDData>)affectedOwnerUID;
- (struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)affectedOwnerUIDs;
- (struct UUIDData<TSP::UUIDData>)affectedConditionalStyleOwnerUID;
- (struct ?)updatedCellCoordinateForTableID:(struct __CFUUID *)arg0 originalCellCoordinate:(struct ?)arg1;
- (struct ?)previousCellCoordinateForTableID:(struct __CFUUID *)arg0 updatedCellCoordinate:(struct ?)arg1;
- (struct __CFUUID *)updatedTableIDForOriginalTableID:(struct __CFUUID *)arg0 originalCellCoordinate:(struct ?)arg1;
- (struct __CFUUID *)previousTableIDForUpdatedTableID:(struct __CFUUID *)arg0 updatedCellCoordinate:(struct ?)arg1;
- (struct ?)previousMergeAnchorForMergeRange:(struct TSUColumnRowRect)arg0 inTableID:(struct ?)arg1 isUndo:(id)arg2;
- (void)willModifyTable:(id)arg0;
- (void)didModifySrcTable:(id)arg0 dstTable:(id)arg1;
- (void)didModifyTable:(id)arg0;
- (void)reloadMergeIndexesForTable:(id)arg0;
- (void)clearTableIndexes;
- (void)saveToArchive:(struct FormulaRewriteSpecArchive *)arg0 archiver:(NSObject *)arg1;
- (int)rewriteType;
- (struct __CFUUID *)conditionalStyleOwnerID;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (struct TSCERangeCoordinate)affectedRange;
- (TSCEFormulaRewriteSpec *)initWithArchive:(struct FormulaRewriteSpecArchive *)arg0;

@end
