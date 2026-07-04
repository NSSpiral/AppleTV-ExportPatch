/* Runtime dump - VKTilePool
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTilePool : VKTileKeyMap
{
    NSLock * _lock;
}

- (NSString *)objectForKey:(struct VKTileKey *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(struct VKTileKey *)arg1;
- (void)dealloc;
- (unsigned long)count;
- (VKTilePool *)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(struct VKTileKey *)arg0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (void)removeObjectsForKeys:(NSArray *)arg0;
- (VKTilePool *)initWithMapType:(int)arg0;

@end
