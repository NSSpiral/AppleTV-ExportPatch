/* Runtime dump - VKRasterMapTileCache
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterMapTileCache : NSObject
{
    NSObject<OS_dispatch_queue> * _cacheQ;
    VKLRUCache * _cache;
}

- (void)setObject:(SEL)arg0 forKey:(NSString *)arg1;
- (VKRasterMapTileCache *)initWithMaxCapacity:(unsigned int)arg0;
- (void)objectForKey:(NSString *)arg0 queue:(NSObject *)arg1 callback:(id /* block */)arg2;

@end
