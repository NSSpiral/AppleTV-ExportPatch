/* Runtime dump - SSDatabaseCache
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDatabaseCache : NSObject
{
    unsigned int _maximumInlineBlobSize;
    NSString * _identifier;
    NSString * _cacheName;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSPersistentCache * _persistentCache;
    SSSQLiteDatabase * _database;
    Class _cacheEntryClass;
}

@property (nonatomic) unsigned int maximumInlineBlobSize;

- (void)dealloc;
- (NSString *)description;
- (void)clear;
- (NSArray *)statistics;
- (SSDatabaseCache *)initWithIdentifier:(NSString *)arg0 cacheName:(NSString *)arg1;
- (char)_setupDatabase;
- (SSDatabaseCache *)initWithIdentifier:(NSString *)arg0 cacheName:(NSString *)arg1 database:(SSSQLiteDatabase *)arg2 cacheEntryClass:(Class)arg3;
- (NSString *)cacheEntryForLookupKey:(NSString *)arg0;
- (unsigned int)maximumInlineBlobSize;
- (void)clearCacheForLookupKey:(NSString *)arg0;
- (int)clearRetiredData;
- (NSData *)setData:(NSData *)arg0 expiring:(double)arg1 retiring:(double)arg2 lookupKey:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
- (NSDictionary *)cacheEntryProperties:(NSDictionary *)arg0 forLookupKeys:(NSArray *)arg1;
- (void)setMaximumInlineBlobSize:(unsigned int)arg0;

@end
