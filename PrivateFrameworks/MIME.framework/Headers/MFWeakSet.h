/* Runtime dump - MFWeakSet
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFWeakSet : NSMutableSet
{
    NSLock * _lock;
    unsigned long _gen;
    struct __CFDictionary * _objects;
}

+ (NSSet *)set;
+ (NSSet *)setWithSet:(NSSet *)arg0;
+ (NSObject *)setWithObject:(NSObject *)arg0;
+ (NSArray *)setWithObjects:(struct __CFDictionary *)arg0;
+ (NSArray *)setWithArray:(NSArray *)arg0;
+ (MFWeakSet *)setWithCapacity:(unsigned int)arg0;
+ (NSArray *)setWithObjects:(id *)arg0 count:(unsigned int)arg1;

- (NSDictionary *)objectsWithOptions:(unsigned int)arg0 passingTest:(id /* block */)arg1;
- (MFWeakSet *)initWithSet:(NSSet *)arg0 copyItems:(char)arg1;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (MFWeakSet *)initWithCoder:(NSCoder *)arg0;
- (void)removeObject:(struct objc_method *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (MFWeakSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)makeObjectsPerformSelector:(SEL)arg0;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg0;
- (NSString *)description;
- (void)enumerateObjectsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (void)unionSet:(struct objc_method *)arg0;
- (char)containsObject:(NSObject *)arg0;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (MFWeakSet *)initWithObjects:(struct __CFDictionary *)arg0;
- (MFWeakSet *)initWithCapacity:(unsigned int)arg0;
- (NSObject *)anyObject;
- (void)intersectSet:(struct objc_method *)arg0;
- (NSArray *)allObjects;
- (void)makeObjectsPerformSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)minusSet:(struct objc_method *)arg0;
- (MFWeakSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (id)objectsPassingTest:(id /* block */)arg0;
- (MFWeakSet *)initWithArray:(NSArray *)arg0;
- (NSSet *)setByAddingObjectsFromSet:(NSSet *)arg0;
- (MFWeakSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (char)isEqualToSet:(NSSet *)arg0;
- (char)isSubsetOfSet:(NSSet *)arg0;
- (char)intersectsSet:(NSSet *)arg0;
- (MFWeakSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSObject *)member:(struct objc_method *)arg0;
- (NSArray *)setByAddingObjectsFromArray:(NSArray *)arg0;
- (MFWeakSet *)initWithSet:(NSSet *)arg0;
- (NSArray *)_copyAllItems;
- (NSObject *)setByAddingObject:(NSObject *)arg0;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;
- (void)setSet:(struct objc_method *)arg0;

@end
