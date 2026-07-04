/* Runtime dump - SCRCIndexMap
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCIndexMap : NSObject <NSCopying, NSCoding>
{
    struct __CFDictionary * _map;
}

- (void)dealloc;
- (SCRCIndexMap *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned long)count;
- (SCRCIndexMap *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (SCRCIndexMap *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int *)_createIndexesWithSize:(unsigned int *)arg0;
- (NSObject *)objectForIndex:(unsigned long)arg0;
- (NSObject *)_initWithIndexMap:(NSObject *)arg0;
- (NSObject *)_initAndDeepCopyIndexMap:(NSObject *)arg0;
- (void)setObject:(NSObject *)arg0 forIndex:(unsigned long)arg1;
- (SCRCIndexMap *)initWithObjects:(id *)arg0 andIndexes:(unsigned int *)arg1 count:(unsigned long)arg2;
- (NSObject *)deepCopyWithZone:(struct _NSZone *)arg0;
- (void)removeObjectForIndex:(unsigned long)arg0;
- (NSIndexSet *)indexes;
- (void)addObjectsFromIndexMap:(NSObject *)arg0;

@end
