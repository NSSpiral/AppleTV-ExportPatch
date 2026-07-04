/* Runtime dump - NSKeyValueNotifyingMutableSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet
{
    NSMutableSet * _mutableSet;
}

+ (struct ? *)_proxyNonGCPoolPointer;
+ (NSKeyValueNotifyingMutableSet *)_proxyShare;

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)unionSet:(struct objc_method *)arg0;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (void)intersectSet:(struct objc_method *)arg0;
- (void)minusSet:(struct objc_method *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSObject *)member:(struct objc_method *)arg0;
- (void)setSet:(struct objc_method *)arg0;

@end
