/* Runtime dump - TSUCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCache : TSUFlushableObject
{
    NSString * mCacheName;
    NSMutableDictionary * mCache;
}

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (TSUCache *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(NSString *)arg0;
- (TSUCache *)initWithName:(NSString *)arg0;
- (void)unload;
- (char)hasFlushableContent;
- (NSString *)p_objectForKey:(NSString *)arg0;
- (void)p_addEntriesFromDictionary:(NSDictionary *)arg0;
- (NSArray *)p_objectsForKeys:(NSArray *)arg0 notFoundMarker:(NSObject *)arg1;

@end
