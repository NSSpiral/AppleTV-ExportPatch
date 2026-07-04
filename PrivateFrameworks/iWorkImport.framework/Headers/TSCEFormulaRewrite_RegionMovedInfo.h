/* Runtime dump - TSCEFormulaRewrite_RegionMovedInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject
{
    TSCEFormulaRewrite_RegionInfo * _srcRegion;
    TSCEFormulaRewrite_RegionInfo * _dstRegion;
    struct TSUUuidMap _srcUidForDstUid;
    struct TSUUuidMap _dstUidForSrcUid;
    char _spanningRows;
    char _spanningColumns;
}

@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo * srcRegion;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo * dstRegion;
@property (readonly, nonatomic) struct __CFUUID * srcTableID;
@property (readonly, nonatomic) struct __CFUUID * dstTableID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> srcTableUID;
@property (readonly, nonatomic) struct UUIDData<TSP::UUIDData> dstTableUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids * srcColumnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids * srcRowUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids * dstColumnUids;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids * dstRowUids;
@property (readonly, nonatomic) struct TSUUuidMap * srcUidForDstUid;
@property (readonly, nonatomic) struct TSUUuidMap * dstUidForSrcUid;
@property (nonatomic) char spanningRows;
@property (nonatomic) char spanningColumns;

- (void)archive:(struct RegionMovedInfoArchive *)arg0;
- (void)unloadIndexes;
- (TSCEFormulaRewrite_RegionMovedInfo *)initWithSrcTableID:(struct __CFUUID *)arg0 srcColumnUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1 srcRowUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg2 dstTableID:(struct UUIDData<TSP::UUIDData> *)arg3 dstColumnUids:(struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)arg4 dstRowUids:(TSCEFormulaRewrite_Uids *)arg5;
- (struct __CFUUID *)srcTableID;
- (struct __CFUUID *)dstTableID;
- (struct UUIDData<TSP::UUIDData>)srcTableUID;
- (struct UUIDData<TSP::UUIDData>)dstTableUID;
- (TSCEFormulaRewrite_Uids *)srcColumnUids;
- (TSCEFormulaRewrite_Uids *)srcRowUids;
- (TSCEFormulaRewrite_Uids *)dstColumnUids;
- (TSCEFormulaRewrite_Uids *)dstRowUids;
- (void)loadIndexesForSrcTable:(id)arg0 dstTable:(id)arg1;
- (struct UUIDData<TSP::UUIDData>)dstUidForSrcUid:(struct TSUUuidMap *)arg0;
- (struct UUIDData<TSP::UUIDData>)srcUidForDstUid:(struct TSUUuidMap *)arg0;
- (TSCEFormulaRewrite_RegionInfo *)srcRegion;
- (TSCEFormulaRewrite_RegionInfo *)dstRegion;
- (struct TSUUuidMap *)srcUidForDstUid;
- (struct TSUUuidMap *)dstUidForSrcUid;
- (char)spanningRows;
- (void)setSpanningRows:(char)arg0;
- (char)spanningColumns;
- (void)setSpanningColumns:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCEFormulaRewrite_RegionMovedInfo *)initWithArchive:(struct RegionMovedInfoArchive *)arg0;

@end
