/* Runtime dump - SSDatabaseCacheEntry
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDatabaseCacheEntry : SSSQLiteEntity
{
    SSPersistentCache * _persistentCache;
}

+ (ML3DatabaseTable *)databaseTable;
+ (NSArray *)allPropertyKeys;
+ (unsigned long long)_fetchPersistentID:(NSObject *)arg0 inDatabase:(char)arg1;

- (void)dealloc;
- (NSString *)description;
- (SSDatabaseCacheEntry *)initWithLookupKey:(NSString *)arg0 inDatabase:(char)arg1;
- (void)setPersistentCache:(SSPersistentCache *)arg0;
- (id)dataBlob:(char *)arg0;

@end
