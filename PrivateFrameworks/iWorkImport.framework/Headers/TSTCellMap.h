/* Runtime dump - TSTCellMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellMap : TSPObject <NSCopying>
{
    struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > _cellIDs;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > _mergeIDRanges;
    struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > _mergeUIDRanges;
    struct vector<TSUColumnRowRect, std::__1::allocator<TSUColumnRowRect> > _unmergeIDRanges;
    struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > _unmergeUIDRanges;
    NSMutableArray * _mergeActions;
    char _appliesToHidden;
    char _mayModifyFormulasInCells;
    char _mayModifyValuesReferencedByFormulas;
    char _uidBased;
    char _oneToMany;
    TSTCellUIDList * _cellUIDs;
    NSMutableArray * _cellLists;
    struct /* ? */ * _searchableIDMap;
    struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > * _searchableUIDMap;
}

@property (nonatomic) char uidBased;
@property (nonatomic) char mayModifyFormulasInCells;
@property (nonatomic) char mayModifyValuesReferencedByFormulas;
@property (nonatomic) char appliesToHidden;
@property (retain, nonatomic) TSTCellUIDList * cellUIDs;
@property (retain, nonatomic) NSMutableArray * cellLists;
@property (nonatomic) struct /* ? */ * searchableIDMap;
@property (nonatomic) struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > * searchableUIDMap;
@property (readonly, nonatomic) char oneToMany;

- (TSTCellMap *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)addCell:(NSObject *)arg0 andCellID:(struct ?)arg1;
- (char)isUIDBased;
- (void)enumerateCellsWithIDsUsingBlock:(id /* block */)arg0;
- (TSTCellMap *)initWithContext:(NSObject *)arg0 uidBased:(char)arg1;
- (void)addCell:(NSObject *)arg0 andCellUID:(struct TSTCellUID *)arg1;
- (TSTCellUIDList *)cellUIDs;
- (void)addMergeUIDRange:(struct TSTCellUIDRange)arg0;
- (struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > *)mergeUIDRanges;
- (void *)iterator;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)rowUIDs;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)columnUIDs;
- (char)mayModifyFormulasInCells;
- (char)mayModifyValuesReferencedByFormulas;
- (void)remapUIDsByColumnMap:(struct TSUUuidMap *)arg0 rowMap:(struct TSUUuidMap)arg1 ownerMap:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> >)arg2;
- (NSObject *)p_addCell:(NSObject *)arg0;
- (void)addMergeAction:(NSObject *)arg0;
- (unsigned int)p_cellCount;
- (NSMutableArray *)cellLists;
- (void)setCellLists:(NSMutableArray *)arg0;
- (void)setUidBased:(char)arg0;
- (void)setCellUIDs:(TSTCellUIDList *)arg0;
- (char)appliesToHidden;
- (void)setAppliesToHidden:(char)arg0;
- (void)setMayModifyFormulasInCells:(char)arg0;
- (void)setMayModifyValuesReferencedByFormulas:(char)arg0;
- (char)isOneToMany;
- (NSObject *)p_cellAtIndex:(unsigned int)arg0 inCellListArray:(NSArray *)arg1;
- (void)enumerateCellsWithUIDsUsingBlock:(id /* block */)arg0;
- (NSMutableArray *)mergeActions;
- (void)popLastCell;
- (void)p_resolveUUIDsToCellIDsByTableInfo:(NSDictionary *)arg0;
- (void)p_resolveCellIDsToUUIDsByTableInfo:(NSDictionary *)arg0;
- (struct /* ? */ *)searchableIDMap;
- (void)setSearchableIDMap:(struct /* ? */ *)arg0;
- (TSTCellMap *)initWithContext:(NSObject *)arg0 cell:(NSObject *)arg1 cellUIDList:(TSTCellUIDList *)arg2;
- (TSTCellMap *)initWithContext:(NSObject *)arg0 cell:(NSObject *)arg1 cellIDList:(struct vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> > *)arg2;
- (struct ?)cellIDAtIndex:(unsigned int)arg0;
- (char)containsMergeChanges;
- (NSObject *)mergeRegionMap;
- (NSObject *)unmergeRegionMap;
- (struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > *)unmergeUIDRanges;
- (NSObject *)findCellForCellID:(struct ?)arg0;
- (id)findCellForCellUID:(struct TSTCellUID *)arg0;
- (id)changeDescriptorsForTable:(id)arg0;
- (void)addMergeRange:(struct TSUColumnRowRect)arg0;
- (void)addMergeRanges:(NSArray *)arg0;
- (void)addUnmergeRange:(struct TSUColumnRowRect)arg0;
- (void)addUnmergeUIDRange:(struct TSTCellUIDRange)arg0;
- (void)addUnmergeRanges:(NSArray *)arg0;
- (void)addMergeActions:(id)arg0;
- (void)clearMerges;
- (NSDictionary *)cellIDBasedCellMapByTableInfo:(NSDictionary *)arg0;
- (NSDictionary *)uuidBasedCellMapByTableInfo:(NSDictionary *)arg0;
- (id)cellMapMaskedByUIDs:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0 inRows:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg1;
- (struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > *)searchableUIDMap;
- (void)setSearchableUIDMap:(struct unordered_map<TSTCellUID, TSTCell *, std::__1::hash<TSTCellUID>, std::__1::equal_to<TSTCellUID>, std::__1::allocator<std::__1::pair<const TSTCellUID, TSTCell *> > > *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (TSTCellMap *)copyWithZone:(struct _NSZone *)arg0;
- (TSTCellMap *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (NSObject *)cellAtIndex:(unsigned int)arg0;

@end
