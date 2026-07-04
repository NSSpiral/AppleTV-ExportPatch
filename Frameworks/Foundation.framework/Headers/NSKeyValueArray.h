/* Runtime dump - NSKeyValueArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching>
{
    NSObject * _container;
    NSString * _key;
    NSKeyValueNonmutatingArrayMethodSet * _methods;
}

+ (struct ? *)_proxyNonGCPoolPointer;
+ (NSKeyValueArray *)_proxyShare;

- (struct ?)_proxyLocator;
- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (NSIndexSet *)objectsAtIndexes:(struct objc_method *)arg0;
- (void)getObjects:(id *)arg0 range:(struct _NSRange)arg1;

@end
