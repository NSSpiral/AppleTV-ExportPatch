/* Runtime dump - VKTileKeyList
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying>
{
    void * _head;
    void * _tail;
    VKTileKeyMap * _map;
    unsigned int _count;
    unsigned int _maxCount;
}

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (VKTileKeyList *)init;
- (NSString *)description;
- (VKTileKeyList *)copyWithZone:(struct _NSZone *)arg0;
- (void)addKey:(struct VKTileKey *)arg0;
- (char)removeKey:(struct VKTileKey *)arg0;
- (char)containsKey:(struct VKTileKey *)arg0;
- (char)isEqualToList:(NSArray *)arg0;
- (VKTileKeyList *)initWithMaxCapacity:(unsigned int)arg0;
- (void)_addKeyToBack:(struct VKTileKey *)arg0;
- (char)addKey:(struct VKTileKey *)arg0 lostKey:(struct VKTileKey)arg1;
- (id)copyWithMaxCapacity:(unsigned int)arg0;
- (struct VKTileKey *)firstKey;
- (unsigned int)capacity;
- (id)listWithout:(id)arg0;
- (void)sort:(NSArray *)arg0;
- (void)removeKeysMatchingPredicate:(NSPredicate *)arg0;

@end
