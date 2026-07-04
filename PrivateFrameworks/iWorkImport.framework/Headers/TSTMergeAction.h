/* Runtime dump - TSTMergeAction
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTMergeAction : NSObject
{
    int _type;
    struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > _uidRanges;
    struct vector<TSCEFormula, std::__1::allocator<TSCEFormula> > _mergeFormulas;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > _mergeFormulaIndexes;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) char hasMergeFormulas;
@property (readonly) NSString * description;

+ (NSObject *)stringForMergeType:(int)arg0;

- (void)saveToArchive:(struct MergeOperationArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTMergeAction *)initWithArchive:(struct MergeOperationArchive *)arg0 unarchiver:(struct MergeOperationArchive)arg1;
- (void)enumerateMergeFormulasUsingBlock:(id /* block */)arg0;
- (TSTMergeAction *)initWithType:(int)arg0 uidRanges:(struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > *)arg1;
- (struct vector<TSTCellUIDRange, std::__1::allocator<TSTCellUIDRange> > *)uidRanges;
- (struct vector<TSCEFormula, std::__1::allocator<TSCEFormula> > *)mergeFormulas;
- (struct vector<unsigned int, std::__1::allocator<unsigned int> > *)mergeFormulaIndexes;
- (TSTMergeAction *)initWithType:(int)arg0 uidRange:(struct TSTCellUIDRange *)arg1;
- (char)hasMergeFormulas;
- (void)addFormulaIndex:(unsigned int)arg0;
- (NSObject *)remapUIDsByColumnMap:(struct TSUUuidMap *)arg0 rowMap:(struct TSUUuidMap)arg1 ownerMap:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> >)arg2;
- (id)changeDescriptorForTable:(id)arg0;
- (NSString *)description;
- (int)type;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addFormula:(struct TSCEFormula *)arg0;

@end
