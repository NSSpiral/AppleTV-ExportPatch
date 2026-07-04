/* Runtime dump - TSUConcurrentCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUConcurrentCache : TSUCache
{
    TSUReadWriteQueue * mReadWriteQueue;
}

@property (readonly, nonatomic) TSUReadWriteQueue * readWriteQueue;

- (NSArray *)objectsForKeys:(NSArray *)arg0 notFoundMarker:(NSObject *)arg1;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (void)addEntriesFromDictionary:(NSDictionary *)arg0;
- (TSUConcurrentCache *)initWithName:(NSString *)arg0;
- (void)unload;
- (char)hasFlushableContent;
- (void)removeObjectForKey:(NSString *)arg0 andWait:(char)arg1;
- (TSUReadWriteQueue *)readWriteQueue;

@end
