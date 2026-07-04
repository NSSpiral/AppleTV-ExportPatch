/* Runtime dump - TSUUUIDSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _index;
    struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _uuidSet;
}

@property (readonly) unsigned int count;
@property (readonly) unsigned int index;

- (TSUUUIDSet *)initWithUUIDVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)foreachUuid:(id)arg0;
- (char)containsUuid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (struct UUIDData<TSP::UUIDData>)anyUuid;
- (char)p_addUUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (char)p_removeUUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (void)p_addUUIDs:(struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)p_addUUIDsFromVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)p_removeUUIDsFromVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (TSUUUIDSet *)initWithUUIDSet:(NSSet *)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >)uuidsAsVector;
- (BOOL)isAllInvalid;
- (id)expandedSetWithUuid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (id)reducedSetMinusUuid:(struct UUIDData<TSP::UUIDData> *)arg0;
- (id)expandedSetWithUuids:(struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (id)reducedSetMinusUuids:(struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (id)expandedSetWithUuidsFromVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (id)reducedSetMinusUuidsFromVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)p_removeUUIDs:(struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)saveToMessage:(struct UuidSetStoreArchive_UuidSet *)arg0;
- (TSUUUIDSet *)initFromMessage:(struct UuidSetStoreArchive_UuidSet *)arg0;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSUUUIDSet *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)index;
- (char)intersectsSet:(NSSet *)arg0;
- (void).cxx_construct;
- (TSUUUIDSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setIndex:(unsigned int)arg0;
- (TSUUUIDSet *)initWithUUID:(struct UUIDData<TSP::UUIDData> *)arg0;

@end
