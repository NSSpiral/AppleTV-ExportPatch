/* Runtime dump - TSPPersistedObjectUUIDMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPersistedObjectUUIDMap : NSObject
{
    struct hash_map<NSUUID *, TSP::ObjectLocation, TSP::NSUUIDHash, TSP::NSUUIDEqualTo, std::__1::allocator<std::__1::pair<NSUUID *const, TSP::ObjectLocation> > > * _map;
}

- (void)setObjectLocation:(struct ObjectLocation)arg0 forUUID:(NSUUID *)arg1;
- (TSPPersistedObjectUUIDMap *)initWithComponents:(NSArray *)arg0;
- (struct ObjectLocation)objectLocationForUUID:(id)arg0;
- (void)didUpdateUUIDDuringRead:(id)arg0 forComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 originalUUID:(id)arg3;
- (void)dealloc;
- (TSPPersistedObjectUUIDMap *)init;

@end
