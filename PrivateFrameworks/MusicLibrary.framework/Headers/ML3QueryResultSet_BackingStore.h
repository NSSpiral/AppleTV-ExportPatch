/* Runtime dump - ML3QueryResultSet_BackingStore
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryResultSet_BackingStore : NSObject
{
    struct vector<long long, std::__1::allocator<long long> > _persistentIDs;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > _sections;
}

@property (readonly, nonatomic) unsigned int count;

- (unsigned int)count;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg0;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg0;
- (long long)persistentIDAtIndex:(unsigned int)arg0;
- (void)reverseEnumeratePersistentIDsUsingBlock:(id /* block */)arg0;
- (char)containsPersistentIDs:(struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > *)arg0;
- (void)reverseEnumerateSectionsUsingBlock:(id /* block */)arg0;
- (id)backingStoreByRemovingPersistentIDs:(struct unordered_set<long long, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long> > *)arg0;

@end
