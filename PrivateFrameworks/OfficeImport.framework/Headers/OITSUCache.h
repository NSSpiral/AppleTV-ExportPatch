/* Runtime dump - OITSUCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCache : OITSUFlushableObject
{
    NSString * mCacheName;
    NSMutableDictionary * mCache;
}

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (OITSUCache *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(NSString *)arg0;
- (OITSUCache *)initWithName:(NSString *)arg0;
- (void)unload;
- (char)hasFlushableContent;
- (NSString *)p_objectForKey:(NSString *)arg0;
- (void)p_addEntriesFromDictionary:(NSDictionary *)arg0;
- (NSArray *)p_objectsForKeys:(NSArray *)arg0 notFoundMarker:(NSObject *)arg1;

@end
