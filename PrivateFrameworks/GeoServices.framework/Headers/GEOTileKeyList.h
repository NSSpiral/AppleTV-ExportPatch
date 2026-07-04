/* Runtime dump - GEOTileKeyList
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying>
{
    void * _head;
    void * _tail;
    GEOTileKeyMap * _map;
    unsigned int _count;
    unsigned int _maxCount;
    unsigned long _mutationsCount;
}

+ (NSData *)listFromXPCData:(NSData *)arg0;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (unsigned int)count;
- (GEOTileKeyList *)init;
- (NSString *)description;
- (GEOTileKeyList *)copyWithZone:(struct _NSZone *)arg0;
- (void)addKey:(struct _GEOTileKey *)arg0;
- (char)intersectsList:(NSArray *)arg0;
- (NSObject *)sublistWithRange:(struct _NSRange)arg0;
- (NSData *)newXPCData;
- (char)removeKey:(struct _GEOTileKey *)arg0;
- (char)containsKey:(struct _GEOTileKey *)arg0;
- (GEOTileKeyList *)initWithMaxCapacity:(unsigned int)arg0;
- (void)_addKeyToBack:(struct _GEOTileKey *)arg0;
- (char)addKey:(struct _GEOTileKey *)arg0 lostKey:(struct _GEOTileKey)arg1;
- (id)copyWithMaxCapacity:(unsigned int)arg0;
- (struct _GEOTileKey *)firstKey;
- (unsigned int)capacity;
- (id)listWithout:(id)arg0;
- (void)sort:(NSArray *)arg0;
- (void)removeKeysMatchingPredicate:(NSPredicate *)arg0;

@end
