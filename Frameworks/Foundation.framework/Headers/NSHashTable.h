/* Runtime dump - NSHashTable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (readonly, copy) NSPointerFunctions * pointerFunctions;
@property (readonly) unsigned int count;
@property (readonly, copy) NSArray * allObjects;
@property (readonly, nonatomic) id anyObject;
@property (readonly, copy) NSSet * setRepresentation;

+ (NSHashTable *)alloc;
+ (NSHashTable *)allocWithZone:(struct _NSZone *)arg0;
+ (NSHashTable *)hashTableWithOptions:(unsigned int)arg0;
+ (NSHashTable *)weakObjectsHashTable;
+ (NSHashTable *)hashTableWithWeakObjects;

- (void)_mapkit_removeObjects:(NSArray *)arg0;
- (NSPointerFunctions *)pointerFunctions;
- (void *)getItem:(void *)arg0;
- (unsigned int)weakCount;
- (void)insertKnownAbsentItem:(void *)arg0;
- (void)getKeys:(void * *)arg0 count:(void *)arg1;
- (NSHashTable *)initWithPointerFunctions:(NSPointerFunctions *)arg0 capacity:(unsigned int)arg1;
- (char)intersectsHashTable:(id)arg0;
- (char)isEqualToHashTable:(id)arg0;
- (char)isSubsetOfHashTable:(id)arg0;
- (void)intersectHashTable:(id)arg0;
- (void)unionHashTable:(id)arg0;
- (void)minusHashTable:(id)arg0;
- (NSMutableSet *)mutableSet;
- (void)removeAllItems;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSHashTable *)initWithCoder:(NSCoder *)arg0;
- (void)removeObject:(struct objc_method *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSHashTable *)init;
- (void)addObject:(struct objc_method *)arg0;
- (NSHashTable *)copy;
- (void)removeAllObjects;
- (NSString *)description;
- (char)containsObject:(NSObject *)arg0;
- (NSObject *)anyObject;
- (NSArray *)allObjects;
- (NSHashTable *)initWithOptions:(unsigned int)arg0 capacity:(unsigned int)arg1;
- (NSHashTable *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (void)removeItem:(void *)arg0;
- (NSSet *)setRepresentation;
- (NSHashTable *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;

@end
