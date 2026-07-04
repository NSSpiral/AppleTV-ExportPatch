/* Runtime dump - NSKeyValueFastMutableSet2
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableSet2 : NSKeyValueFastMutableSet
{
    NSKeyValueGetter * _valueGetter;
}

+ (struct ? *)_proxyNonGCPoolPointer;

- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (NSString *)_nonNilSetValueWithSelector:(SEL)arg0;
- (unsigned int)count;
- (NSEnumerator *)objectEnumerator;
- (NSObject *)member:(struct objc_method *)arg0;

@end
