/* Runtime dump - TSUMutableUUIDSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMutableUUIDSet : TSUUUIDSet

- (char)addUUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (void)removeAllUuids;
- (char)removeUUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (void)addUUIDs:(struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)removeUUIDs:(struct unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)addUuidsFromSet:(NSSet *)arg0;
- (void)addUuidsFromVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;
- (void)removeUuidsFromSet:(NSSet *)arg0;
- (void)removeUuidsFromVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg0;

@end
