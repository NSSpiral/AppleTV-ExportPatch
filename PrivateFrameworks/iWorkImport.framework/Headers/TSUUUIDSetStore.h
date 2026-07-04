/* Runtime dump - TSUUUIDSetStore
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDSetStore : NSObject <NSCopying>
{
    NSLock * _lock;
    TSUSparseArray * _uuidSetForIndex;
    NSMutableDictionary * _indexesUsingUuid;
    unsigned int _highestIndex;
}

@property (readonly) unsigned int count;

- (void)foreachUuidSet:(NSSet *)arg0;
- (unsigned int)indexOfSet:(NSSet *)arg0;
- (void)p_addSet:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (id)indexesUsingUuid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (NSObject *)setForIndex:(unsigned int)arg0;
- (void)_foreachUuidSet:(NSSet *)arg0;
- (unsigned int)addSetForUuids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)removeSetAtIndex:(unsigned int)arg0;
- (char)containsUuidSet:(NSSet *)arg0;
- (id)indexesUsingAnyOfUuids:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (NSIndexSet *)subsetStoreForIndexes:(NSArray *)arg0;
- (unsigned int)addSetForSingleUuid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (TSUUUIDSetStore *)initFromMessage:(struct UuidSetStoreArchive *)arg0;
- (void)encodeToArchive:(struct UuidSetStoreArchive *)arg0;
- (unsigned int)count;
- (TSUUUIDSetStore *)init;
- (NSString *)description;
- (TSUUUIDSetStore *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (unsigned int)addSet:(NSSet *)arg0;

@end
