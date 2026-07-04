/* Runtime dump - SSCacheObjectStore
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSCacheObjectStore : NSObject
{
    SSDatabaseCache * _databaseCache;
    NSMutableSet * _factories;
    NSString * _sessionIdentifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void)dealloc;
- (NSString *)description;
- (SSCacheObjectStore *)initWithSessionIdentifier:(NSString *)arg0;
- (NSString *)_factoryForTypeIdentifier:(NSString *)arg0;
- (void)clearSession;
- (char)addObject:(struct objc_method *)arg0 withItemIdentifier:(NSString *)arg1;
- (char)removeObjectWithItemIdentifier:(NSString *)arg0;
- (NSString *)cacheObjectWithItemIdentifier:(NSString *)arg0;
- (void)addCacheObjectFactory:(NSObject *)arg0;
- (void)removeCacheObjectFactory:(NSObject *)arg0;

@end
