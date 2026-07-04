/* Runtime dump - NSKeyValueFastMutableSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableSet : NSKeyValueMutableSet
{
    NSKeyValueMutatingSetMethodSet * _mutatingMethods;
}

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)removeObject:(struct objc_method *)arg0;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (void)unionSet:(struct objc_method *)arg0;
- (void)addObjectsFromArray:(NSArray *)arg0;
- (void)intersectSet:(struct objc_method *)arg0;
- (void)minusSet:(struct objc_method *)arg0;
- (void)setSet:(struct objc_method *)arg0;

@end
