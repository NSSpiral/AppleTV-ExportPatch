/* Runtime dump - OITSUConcurrentCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUConcurrentCache : OITSUCache
{
    OITSUReadWriteQueue * mReadWriteQueue;
}

@property (readonly, nonatomic) OITSUReadWriteQueue * readWriteQueue;

- (NSArray *)objectsForKeys:(NSArray *)arg0 notFoundMarker:(NSObject *)arg1;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (void)addEntriesFromDictionary:(NSDictionary *)arg0;
- (OITSUConcurrentCache *)initWithName:(NSString *)arg0;
- (void)unload;
- (char)hasFlushableContent;
- (void)removeObjectForKey:(NSString *)arg0 andWait:(char)arg1;
- (OITSUReadWriteQueue *)readWriteQueue;

@end
