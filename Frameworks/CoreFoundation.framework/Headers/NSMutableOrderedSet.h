/* Runtime dump - NSMutableOrderedSet
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableOrderedSet : NSOrderedSet

+ (NSMutableOrderedSet *)orderedSetWithCapacity:(unsigned int)arg0;

- (void)ml_insertObjects:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)pl_insertObjects:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)pl_addObjectsFromArray:(NSArray *)arg0;
- (void)pl_removeObjectsInArray:(NSArray *)arg0;
- (void)filterUsingPredicate:(NSPredicate *)arg0;
- (void)sortUsingDescriptors:(NSArray *)arg0;
- (void)addObjects:(id *)arg0 count:(NSObject *)arg1;
- (void)insertObjects:(id *)arg0 count:(NSObject *)arg1 atIndex:(unsigned int)arg2;
- (void)sortRange:(struct _NSRange)arg0 options:(unsigned int)arg1 usingComparator:(id /* block */)arg2;
- (void)setObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjects:(id *)arg1 count:(NSObject *)arg2;
- (void)intersectOrderedSet:(NSSet *)arg0;
- (void)replaceObject:(NSObject *)arg0;
- (void)_mutate;
- (void)insertObjectsFromArray:(NSArray *)arg0 range:(struct _NSRange)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromOrderedSet:(NSSet *)arg0 range:(struct _NSRange)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjectsFromSet:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg0 inArray:(NSArray *)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg0 inOrderedSet:(NSSet *)arg1 range:(struct _NSRange)arg2;
- (void)removeObjectsInRange:(struct _NSRange)arg0 inSet:(NSSet *)arg1;
- (void)removeObjectsWithOptions:(unsigned int)arg0 passingTest:(id /* block */)arg1;
- (void)addObjectsFromArray:(NSArray *)arg0 range:(struct _NSRange)arg1;
- (void)addObjectsFromOrderedSet:(NSSet *)arg0 range:(struct _NSRange)arg1;
- (void)addObjectsFromOrderedSet:(NSSet *)arg0;
- (void)addObjectsFromSet:(NSSet *)arg0;
- (void)insertObjectsFromArray:(NSArray *)arg0 atIndex:(unsigned int)arg1;
- (void)insertObjectsFromOrderedSet:(NSSet *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObject:(struct objc_method *)arg0 inRange:(struct _NSRange)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg0 inArray:(NSArray *)arg1;
- (void)removeObjectsInArray:(NSArray *)arg0 range:(struct _NSRange)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg0 inOrderedSet:(NSSet *)arg1;
- (void)removeObjectsInOrderedSet:(NSSet *)arg0 range:(struct _NSRange)arg1;
- (void)removeObjectsInOrderedSet:(NSSet *)arg0;
- (void)removeObjectsInSet:(NSSet *)arg0;
- (void)removeObjectsAtIndexes:(struct objc_method *)arg0 options:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (void)removeObjectsPassingTest:(id /* block */)arg0;
- (void)replaceObject:(NSObject *)arg0 inRange:(struct _NSRange)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromArray:(NSArray *)arg1 range:(struct _NSRange)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromArray:(NSArray *)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromOrderedSet:(NSSet *)arg1 range:(struct _NSRange)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromOrderedSet:(NSSet *)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg0 withObjectsFromSet:(NSSet *)arg1;
- (void)rollObjectsInRange:(struct _NSRange)arg0 by:(int)arg1;
- (void)setOrderedSet:(NSSet *)arg0;
- (void)removeObject:(struct objc_method *)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)unionSet:(struct objc_method *)arg0;
- (void)removeLastObject;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (void)removeObjectsInArray:(NSArray *)arg0;
- (NSMutableOrderedSet *)initWithCapacity:(unsigned int)arg0;
- (void)intersectSet:(struct objc_method *)arg0;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)minusSet:(struct objc_method *)arg0;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (Class)classForCoder;
- (void)sortUsingComparator:(id /* block */)arg0;
- (void)removeObjectsAtIndexes:(struct objc_method *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (void)exchangeObjectAtIndex:(unsigned int)arg0 withObjectAtIndex:(unsigned int)arg1;
- (NSMutableOrderedSet *)initWithObjects:(id *)arg0 count:(unsigned int)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg0;
- (void)setArray:(NSArray *)arg0;
- (void)setObject:(NSObject *)arg0;
- (void)sortWithOptions:(unsigned int)arg0 usingComparator:(id /* block */)arg1;
- (void)setObject:(NSObject *)arg0 atIndexedSubscript:(unsigned int)arg1;
- (void)removeFirstObject;
- (void)unionOrderedSet:(NSSet *)arg0;
- (void)minusOrderedSet:(NSSet *)arg0;
- (void)insertObjects:(NSArray *)arg0 atIndexes:(NSArray *)arg1;
- (void)replaceObjectsAtIndexes:(struct objc_method *)arg0 withObjects:(id *)arg1;
- (void)moveObjectsAtIndexes:(NSArray *)arg0 toIndex:(unsigned int)arg1;
- (void)setSet:(struct objc_method *)arg0;

@end
