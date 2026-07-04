/* Runtime dump - BBObjectCache
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObjectCache : NSObject
{
    struct _opaque_pthread_mutex_t _cacheMutex;
    NSMutableDictionary * _cache;
    NSString * _identifier;
}

@property (copy, nonatomic) NSString * identifier;

+ (NSString *)description;
+ (NSString *)objectCacheForIdentifier:(NSString *)arg0;

- (void)dealloc;
- (BBObjectCache *)init;
- (NSString *)description;
- (NSString *)debugDescription;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSObject *)cacheObject:(NSObject *)arg0;
- (void)removeCachedObject:(NSObject *)arg0;
- (NSObject *)cachedObjectForUniqueID:(NSObject *)arg0;
- (NSObject *)_descriptionForObject:(NSObject *)arg0 uniqueID:(NSString *)arg1;

@end
