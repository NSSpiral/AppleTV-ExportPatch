/* Runtime dump - GEOPlaceDataCache
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCache : NSObject
{
    <_GEOPlaceDataCacheProxy> * _proxyCache;
    int _resultProviderID;
}

@property (readonly, nonatomic) int resultProviderID;

- (void)dealloc;
- (void)setPlaceData:(NSData *)arg0 forKey:(struct _GEOTileKey)arg1;
- (void)setPlaceData:(NSData *)arg0 forMUID:(unsigned long long)arg1;
- (void)deletePhoneNumberMapping;
- (void)shrinkToSize:(unsigned long long)arg0 finished:(id /* block */)arg1 onQueue:(/* block */ id)arg2;
- (id)placeDataForMUID:(unsigned long long)arg0;
- (void)evictPlaceDataForMUID:(unsigned long long)arg0;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg0;
- (int)resultProviderID;
- (NSNumber *)placeDataForPhoneNumber:(unsigned long long)arg0;
- (NSArray *)allCacheEntries;
- (NSString *)placeDataForKey:(struct _GEOTileKey)arg0;
- (void)evictPlaceDataForKey:(struct _GEOTileKey)arg0;
- (void)evictAllEntries;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg0 onQueue:(/* block */ id)arg1;
- (GEOPlaceDataCache *)initWithPath:(NSString *)arg0 resultProviderID:(int)arg1;

@end
