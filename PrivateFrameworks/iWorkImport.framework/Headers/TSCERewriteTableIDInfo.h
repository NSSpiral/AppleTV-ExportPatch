/* Runtime dump - TSCERewriteTableIDInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERewriteTableIDInfo : NSObject
{
    struct TSUUuidMap _tableIDMap;
}

- (char)alreadyHaveMappingsForTableIDs:(struct TSUUuidMap *)arg0;
- (TSCERewriteTableIDInfo *)initWithTableIDMap:(struct TSUUuidMap *)arg0;
- (struct TSUUuidMap *)tableIDMap;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)originalTableIDs;
- (void)archive:(struct RewriteTableIDInfoArchive *)arg0;
- (id)extendMappingWithTableIDs:(struct TSUUuidMap *)arg0;
- (void)rollbackMappings:(id)arg0;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCERewriteTableIDInfo *)initWithArchive:(struct RewriteTableIDInfoArchive *)arg0;

@end
