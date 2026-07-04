/* Runtime dump - NSMapTable
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>

@property (readonly, copy) NSPointerFunctions * keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions * valuePointerFunctions;
@property (readonly) unsigned int count;

+ (NSMapTable *)newTspWeakObjectsMapTable;
+ (NSMapTable *)newTspStrongObjectsMapTable;
+ (NSMapTable *)alloc;
+ (NSMapTable *)mapTableWithStrongToStrongObjects;
+ (NSMapTable *)allocWithZone:(struct _NSZone *)arg0;
+ (NSMapTable *)mapTableWithKeyOptions:(unsigned int)arg0 valueOptions:(unsigned int)arg1;
+ (NSMapTable *)mapTableWithWeakToWeakObjects;
+ (NSMapTable *)strongToStrongObjectsMapTable;
+ (NSMapTable *)mapTableWithWeakToStrongObjects;
+ (NSMapTable *)mapTableWithStrongToWeakObjects;
+ (NSMapTable *)weakToWeakObjectsMapTable;
+ (NSMapTable *)weakToStrongObjectsMapTable;
+ (NSMapTable *)strongToWeakObjectsMapTable;

- (void)tsp_setObject:(NSObject *)arg0 forIdentifier:(long long)arg1;
- (void)tsp_enumerateObjectsUsingBlock:(id /* block */)arg0;
- (NSString *)tsp_objectForIdentifier:(long long)arg0;
- (void)tsp_enumerateIdentifiersAndObjectsUsingBlock:(id /* block */)arg0;
- (void)tsp_removeObjectForIdentifier:(long long)arg0;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(NSObject *)arg0 forKeyedSubscript:(id)arg1;
- (NSArray *)allKeys;
- (NSArray *)allKeys;
- (NSArray *)CKAllKeys;
- (NSArray *)CKAllValues;
- (NSString *)bs_takeObjectForKey:(NSString *)arg0;
- (NSEnumerator *)enumerator;
- (NSPointerFunctions *)keyPointerFunctions;
- (NSPointerFunctions *)valuePointerFunctions;
- (void)setItem:(void *)arg0 forKey:(void)arg1;
- (void)setItem:(void *)arg0 forAbsentKey:(void)arg1;
- (void)setItem:(void *)arg0 forKnownAbsentKey:(void)arg1;
- (void *)existingItemForSetItem:(void *)arg0 forAbsentKey:(void)arg1;
- (void)replaceItem:(void *)arg0 forExistingKey:(void)arg1;
- (char)mapMember:(void *)arg0 originalKey:(void)arg1 value:(void * *)arg2;
- (unsigned int)getKeys:(void * *)arg0 values:(void *)arg1;
- (NSDictionary *)mutableDictionary;
- (void)removeAllItems;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSMapTable *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSMapTable *)init;
- (NSMapTable *)copy;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSMapTable *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSMapTable *)initWithKeyOptions:(unsigned int)arg0 valueOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (NSArray *)allValues;
- (NSDictionary *)dictionaryRepresentation;
- (NSEnumerator *)keyEnumerator;
- (NSMapTable *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSMapTable *)initWithKeyPointerFunctions:(NSPointerFunctions *)arg0 valuePointerFunctions:(NSPointerFunctions *)arg1 capacity:(unsigned int)arg2;

@end
