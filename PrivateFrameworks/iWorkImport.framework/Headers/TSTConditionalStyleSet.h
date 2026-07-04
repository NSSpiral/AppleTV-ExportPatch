/* Runtime dump - TSTConditionalStyleSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConditionalStyleSet : TSPObject <TSPCopying>
{
    NSMutableArray * mConditionalStyleSetRules;
}

- (TSTConditionalStyleSet *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (NSObject *)copyByRemappingOwnerUIDsWithMap:(struct TSUUuidMap *)arg0 calcEngine:(struct TSUUuidMap)arg1 error:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> >)arg2;
- (NSObject *)copyByRewritingWithSpec:(NSObject *)arg0 inOwner:(struct __CFUUID *)arg1 inCellCoordinate:(struct ?)arg2;
- (NSSet *)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg0 rowOffset:(int)arg1;
- (id)copyByUpdatingHostCellRef:(struct TSCECellRef *)arg0;
- (TSTConditionalStyleSet *)initWithContext:(NSObject *)arg0 rules:(VCImageAttributeRules *)arg1;
- (TSTConditionalStyleSet *)initWithConditionalStyleSet:(NSSet *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)ruleCount;
- (NSObject *)ruleAtIndex:(unsigned int)arg0;
- (NSString *)rules;

@end
