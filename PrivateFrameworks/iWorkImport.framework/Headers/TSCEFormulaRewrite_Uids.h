/* Runtime dump - TSCEFormulaRewrite_Uids
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaRewrite_Uids : NSObject
{
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _uids;
    NSIndexSet * _indexes;
    struct /* ? */ _indexesForUids;
    struct /* ? */ _uidsForIndexes;
}

@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > * uids;
@property (readonly) NSIndexSet * indexes;

- (void)unloadIndexes;
- (TSCEFormulaRewrite_Uids *)initWithUids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)loadIndexesForTable:(id)arg0 isRows:(char)arg1;
- (struct UUIDData<TSP::UUIDData>)uidForIndex:(NSObject *)arg0;
- (unsigned short)indexForUid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (void)subtractIndexesFromIndexSet:(NSSet *)arg0;
- (void)dealloc;
- (NSString *)description;
- (char)containsIndex:(unsigned short)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)uids;
- (NSIndexSet *)indexes;

@end
