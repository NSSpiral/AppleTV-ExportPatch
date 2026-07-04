/* Runtime dump - PLCache
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCache : NSObject
{
    NSMutableDictionary * _cacheEntries;
    int _countLimit;
    int _currentCount;
    int _totalCostLimit;
    int _currentCost;
    struct _opaque_pthread_mutex_t _lock;
    struct entryList _lru;
}

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (PLCache *)initWithCountLimit:(int)arg0 totalCostLimit:(int)arg1;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 cost:(int)arg2;

@end
