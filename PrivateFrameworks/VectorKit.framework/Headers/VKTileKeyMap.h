/* Runtime dump - VKTileKeyMap
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileKeyMap : NSObject
{
    int _type;
    void * _map;
}

- (NSString *)objectForKey:(struct VKTileKey *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(struct VKTileKey *)arg1;
- (void)dealloc;
- (unsigned long)count;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(struct VKTileKey *)arg0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (NSString *)contentsDescription;
- (VKTileKeyMap *)initWithMapType:(int)arg0;

@end
