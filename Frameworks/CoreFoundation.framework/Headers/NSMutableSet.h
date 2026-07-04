/* Runtime dump - NSMutableSet
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableSet : NSSet

+ (NSSet *)_vk_newWeakSet;
+ (NSSet *)nonRetainingSet;
+ (NSMutableSet *)setWithCapacity:(unsigned int)arg0;

- (void)tsu_xorSet:(NSSet *)arg0;
- (void)tsu_addNonNilObject:(NSObject *)arg0;
- (void)addMessageEntry:(ATVMessageEntry *)arg0;
- (void)addNonNilObject:(NSObject *)arg0;
- (void)xorSet:(NSSet *)arg0;
- (NSString *)physicalDeviceWithAddress:(unsigned int)arg0;
- (void)minusPathSet:(NSSet *)arg0;
- (void)axSafelyAddObject:(NSObject *)arg0;
- (void)pl_addObjectIfNotNil:(id)arg0;
- (NSObject *)mf_uniquedObject:(NSObject *)arg0;
- (void)CDVAddItemParserMappingWithNameSpace:(NSString *)arg0 name:(NSString *)arg1 parseClass:(Class)arg2;
- (void)filterUsingPredicate:(NSPredicate *)arg0;
- (Class)classForCoder;
- (void)addObjects:(id *)arg0 count:(NSObject *)arg1;
- (void)intersectOrderedSet:(NSSet *)arg0;
- (void)replaceObject:(NSObject *)arg0;
- (void)_mutate;
- (void)removeObjectsWithOptions:(unsigned int)arg0 passingTest:(id /* block */)arg1;
- (void)addObjectsFromArray:(NSArray *)arg0 range:(struct _NSRange)arg1;
- (void)addObjectsFromOrderedSet:(NSSet *)arg0 range:(struct _NSRange)arg1;
- (void)addObjectsFromOrderedSet:(NSSet *)arg0;
- (void)addObjectsFromSet:(NSSet *)arg0;
- (void)removeObjectsInArray:(NSArray *)arg0 range:(struct _NSRange)arg1;
- (void)removeObjectsInOrderedSet:(NSSet *)arg0 range:(struct _NSRange)arg1;
- (void)removeObjectsInOrderedSet:(NSSet *)arg0;
- (void)removeObjectsInSet:(NSSet *)arg0;
- (void)removeObjectsPassingTest:(id /* block */)arg0;
- (void)setOrderedSet:(NSSet *)arg0;
- (void)removeObject:(struct objc_method *)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)unionSet:(struct objc_method *)arg0;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (void)removeObjectsInArray:(NSArray *)arg0;
- (NSMutableSet *)initWithCapacity:(unsigned int)arg0;
- (void)intersectSet:(struct objc_method *)arg0;
- (void)minusSet:(struct objc_method *)arg0;
- (NSMutableSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (void)setArray:(NSArray *)arg0;
- (void)setObject:(NSObject *)arg0;
- (void)unionOrderedSet:(NSSet *)arg0;
- (void)minusOrderedSet:(NSSet *)arg0;
- (void)setSet:(struct objc_method *)arg0;

@end
