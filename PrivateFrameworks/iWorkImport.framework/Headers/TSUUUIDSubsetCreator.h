/* Runtime dump - TSUUUIDSubsetCreator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDSubsetCreator : NSObject
{
    TSUUUIDSetStore * _uuidSetStore;
    struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > _baseUuidVector;
    NSMutableDictionary * _createdSubsetsByRange;
}

@property (readonly) struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > * baseUuidVector;
@property (readonly) TSUUUIDSetStore * uuidSetStore;

- (TSUUUIDSubsetCreator *)initWithUuidSetStore:(TSUUUIDSetStore *)arg0 baseUuidVector:(struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)arg1;
- (unsigned int)uuidSetStoreIndexForIndexesInRange:(struct _NSRange)arg0;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > *)baseUuidVector;
- (TSUUUIDSetStore *)uuidSetStore;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
