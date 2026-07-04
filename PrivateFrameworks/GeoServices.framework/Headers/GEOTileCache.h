/* Runtime dump - GEOTileCache
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileCache : NSObject
{
    GEOTileCacheReserved * _reserved;
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
}

@property (readonly) unsigned int currentCount;
@property (readonly) unsigned int currentCost;
@property unsigned int maxCapacity;
@property unsigned int maxCost;

- (void)dealloc;
- (GEOTileCache *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (void)_receivedMemoryNotification;
- (NSString *)_description;
- (void)setMaxCapacity:(unsigned int)arg0;
- (void)setMaxCost:(unsigned int)arg0;
- (char)containsKey:(struct _GEOTileKey *)arg0 cost:(struct _GEOTileKey)arg1;
- (void)removeTilesMatchingPredicate:(NSPredicate *)arg0;
- (void)setTile:(VKLabelTile *)arg0 forKey:(struct _GEOTileKey *)arg1 cost:(struct _GEOTileKey)arg2;
- (void)_enteredBackground:(NSNotification *)arg0;
- (void)_evictWithMaxCost:(unsigned int)arg0 maxCapacity:(unsigned int)arg1;
- (void)_removeTileForKey:(struct _GEOTileKey *)arg0;
- (void)enumerate:(id)arg0;
- (unsigned int)maxCapacity;
- (unsigned int)maxCost;
- (void)setNullForKey:(struct _GEOTileKey *)arg0;
- (void)removeTileForKey:(struct _GEOTileKey *)arg0;
- (void)removeTilesWithKeys:(NSArray *)arg0;
- (unsigned int)currentCount;
- (unsigned int)currentCost;
- (NSString *)tileForKey:(struct _GEOTileKey *)arg0;

@end
