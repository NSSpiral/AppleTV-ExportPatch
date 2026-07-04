/* Runtime dump - NSKeyValueSlowMutableSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet
{
    NSKeyValueGetter * _valueGetter;
    NSKeyValueSetter * _valueSetter;
    char _treatNilValuesLikeEmptySets;
    id _padding;
}

+ (struct ? *)_proxyNonGCPoolPointer;

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg0;
- (NSString *)_setValueWithSelector:(SEL)arg0;
- (NSString *)_createMutableSetValueWithSelector:(SEL)arg0;
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
