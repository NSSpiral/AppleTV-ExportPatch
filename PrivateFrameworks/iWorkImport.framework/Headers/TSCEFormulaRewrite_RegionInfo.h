/* Runtime dump - TSCEFormulaRewrite_RegionInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_RegionInfo : NSObject
{
    struct __CFUUID * _tableID;
    struct UUIDData<TSP::UUIDData> _tableUID;
    TSCEFormulaRewrite_Uids * _columnUids;
    TSCEFormulaRewrite_Uids * _rowUids;
}

@property (readonly, nonatomic) struct __CFUUID * tableID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> tableUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids * columnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids * rowUids;

- (struct UUIDData<TSP::UUIDData>)tableUID;
- (struct __CFUUID *)tableID;
- (void)archive:(struct RegionInfoArchive *)arg0;
- (void)unloadIndexes;
- (void)loadIndexesForTable:(id)arg0;
- (TSCEFormulaRewrite_RegionInfo *)initWithTableID:(struct __CFUUID *)arg0 columnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 rowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2;
- (struct ?)topLeftCellCoord;
- (TSCEFormulaRewrite_Uids *)columnUids;
- (TSCEFormulaRewrite_Uids *)rowUids;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (TSCEFormulaRewrite_RegionInfo *)initWithArchive:(struct RegionInfoArchive *)arg0;

@end
