/* Runtime dump - GEOPlaceDataCacheRegister
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataCacheRegister : NSObject
{
    NSMutableDictionary * _caches;
}

+ (void)setDiskCachePath:(NSString *)arg0;

- (void)dealloc;
- (GEOPlaceDataCacheRegister *)init;
- (void)deletePhoneNumberMapping;
- (void)shrinkToSize:(unsigned long long)arg0 finished:(id /* block */)arg1;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg0;
- (NSObject *)cacheForProviderID:(int)arg0;
- (id)allCaches;
- (NSArray *)allCacheEntries;
- (void)evictAllEntries;

@end
