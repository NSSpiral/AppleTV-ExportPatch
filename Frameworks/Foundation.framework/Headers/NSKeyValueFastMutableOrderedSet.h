/* Runtime dump - NSKeyValueFastMutableOrderedSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableOrderedSet : NSKeyValueMutableOrderedSet
{
    NSKeyValueMutatingOrderedSetMethodSet * _mutatingMethods;
}

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObjectsAtIndexes:(struct objc_method *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (void)insertObjects:(NSArray *)arg0 atIndexes:(NSArray *)arg1;
- (void)replaceObjectsAtIndexes:(struct objc_method *)arg0 withObjects:(id *)arg1;

@end
