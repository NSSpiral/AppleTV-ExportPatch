/* Runtime dump - NSCache
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCache : NSObject
{
    id _delegate;
    id _private;
    void * _reserved;
}

@property (copy) NSString * name;
@property <NSCacheDelegate> * delegate;
@property unsigned int totalCostLimit;
@property unsigned int countLimit;
@property char evictsObjectsWithDiscardedContent;

- (void)tsp_flushComponent:(id)arg0;
- (void)tsp_cacheComponent:(id)arg0;
- (unsigned char)tsp_currentOperation;
- (id)tsp_currentComponent;
- (void)tsp_performOperation:(unsigned char)arg0 forComponent:(_UIDatePickerComponent *)arg1 usingBlock:(id /* block */)arg2;
- (NSString *)CALobjectForKey:(NSString *)arg0 calculatedWithBlock:(id /* block */)arg1;
- (void)setEvictsObjectsWhenApplicationEntersBackground:(char)arg0;
- (char)evictsObjectsWithDiscardedContent;
- (void)setTotalCostLimit:(unsigned int)arg0;
- (unsigned int)totalCostLimit;
- (unsigned int)countLimit;
- (void)setEvictsObjectsWithDiscardedContent:(char)arg0;
- (char)evictsObjectsWhenApplicationEntersBackground;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)setDelegate:(<NSCacheDelegate> *)arg0;
- (NSCache *)init;
- (void)removeAllObjects;
- (<NSCacheDelegate> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSArray *)allObjects;
- (void)setCountLimit:(unsigned int)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1 cost:(unsigned int)arg2;
- (void)finalize;

@end
