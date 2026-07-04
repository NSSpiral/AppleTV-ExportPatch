/* Runtime dump - NSKeyValueSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueSet : NSSet <NSKeyValueProxyCaching>
{
    NSObject * _container;
    NSString * _key;
    NSKeyValueNonmutatingSetMethodSet * _methods;
}

+ (struct ? *)_proxyNonGCPoolPointer;
+ (NSKeyValueSet *)_proxyShare;

- (struct ?)_proxyLocator;
- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (unsigned int)count;
- (NSEnumerator *)objectEnumerator;
- (NSObject *)member:(struct objc_method *)arg0;

@end
