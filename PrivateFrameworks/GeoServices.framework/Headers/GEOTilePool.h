/* Runtime dump - GEOTilePool
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTilePool : NSObject
{
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    struct /* ? */ _pool;
    GEOTileCache * _cache;
}

@property (readonly, nonatomic) unsigned int currentCount;
@property (readonly, nonatomic) unsigned int currentCost;
@property unsigned int maxCapacity;
@property unsigned int maxCost;

- (void)dealloc;
- (GEOTilePool *)init;
- (void)removeAllObjects;
- (void)_receivedMemoryNotification;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setMaxCapacity:(unsigned int)arg0;
- (void)setMaxCost:(unsigned int)arg0;
- (char)containsKey:(struct _GEOTileKey *)arg0 cost:(struct _GEOTileKey)arg1;
- (void)removeTilesMatchingPredicate:(NSPredicate *)arg0;
- (void)setTile:(VKLabelTile *)arg0 forKey:(struct _GEOTileKey *)arg1 cost:(struct _GEOTileKey)arg2;
- (void)_enteredBackground:(NSNotification *)arg0;
- (void)enumerate:(id)arg0;
- (unsigned int)maxCapacity;
- (unsigned int)maxCost;
- (void)setNullForKey:(struct _GEOTileKey *)arg0;
- (void)removeTileForKey:(struct _GEOTileKey *)arg0;
- (void)removeTilesWithKeys:(NSArray *)arg0;
- (unsigned int)currentCount;
- (unsigned int)currentCost;
- (GEOTilePool *)initWithSideCacheEnabled:(char)arg0;
- (NSString *)tileForKey:(struct _GEOTileKey *)arg0;

@end
