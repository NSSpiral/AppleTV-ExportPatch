/* Runtime dump - TSCEUUidReferenceMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEUUidReferenceMap : NSObject
{
    struct /* ? */ _cellRefsByUuid;
    struct /* ? */ _uuidsByCellRef;
}

+ (TSCEUUidReferenceMap *)_stringForInternalCellRef:(struct TSCEInternalCellReference *)arg0;

- (void)encodeToArchive:(struct UuidReferenceMapArchive *)arg0;
- (void)removeCellRef:(struct TSCEInternalCellReference *)arg0;
- (void)addCellRef:(struct TSCEInternalCellReference *)arg0 forUuid:(struct TSCEInternalCellReference)arg1;
- (void)getCellRefs:(struct unordered_set<TSCECellReference, TSCECellReferenceHash, TSCECellReferenceEqual, std::__1::allocator<TSCECellReference> > *)arg0 dependencyTracker:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> *> >)arg1 referringToUuids:(id)arg2;
- (TSCEUUidReferenceMap *)initFromArchive:(struct UuidReferenceMapArchive *)arg0;
- (void)removeCellRef:(struct TSCEInternalCellReference *)arg0 forUuid:(struct TSCEInternalCellReference)arg1;
- (void)p_getCellRefs:(struct unordered_set<TSCEInternalCellReference, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<TSCEInternalCellReference> > *)arg0 referringToUuids:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCEInternalCellReference, void *> *> >)arg1;
- (void)addCellRef:(struct ? *)arg0 dependencyTracker:(struct ?)arg1 forUuid:(struct __CFUUID *)arg2;
- (void)removeCellRef:(struct ? *)arg0 dependencyTracker:(struct ?)arg1 forUuid:(struct __CFUUID *)arg2;
- (void)getCellRefs:(struct unordered_set<TSCECellReference, TSCECellReferenceHash, TSCECellReferenceEqual, std::__1::allocator<TSCECellReference> > *)arg0 dependencyTracker:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<TSCECellReference, void *> *> >)arg1 referringToUuid:(id)arg2;
- (TSCEUUidReferenceMap *)init;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
