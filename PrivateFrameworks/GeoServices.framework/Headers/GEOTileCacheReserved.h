/* Runtime dump - GEOTileCacheReserved
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileCacheReserved : NSObject
{
    struct mutex _reservedLock;
    struct list<CacheItem, std::__1::allocator<CacheItem> > _reservedList;
    struct unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *> > > > _reservedMap;
    unsigned int _reservedMaxCapacity;
    unsigned int _reservedMaxCost;
    unsigned int _reservedCurrentCost;
    unsigned int _reservedCurrentCount;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
