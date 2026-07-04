/* Runtime dump - NSKeyValueNotifyingMutableArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray
{
    NSMutableArray * _mutableArray;
}

+ (struct ? *)_proxyNonGCPoolPointer;
+ (NSKeyValueNotifyingMutableArray *)_proxyShare;

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeLastObject;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObjectsAtIndexes:(struct objc_method *)arg0;
- (NSIndexSet *)objectsAtIndexes:(struct objc_method *)arg0;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (void)getObjects:(id *)arg0 range:(struct _NSRange)arg1;
- (void)insertObjects:(NSArray *)arg0 atIndexes:(NSArray *)arg1;
- (void)replaceObjectsAtIndexes:(struct objc_method *)arg0 withObjects:(id *)arg1;

@end
