/* Runtime dump - NSKeyValueCollectionGetter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueCollectionGetter : NSKeyValueProxyGetter
{
    NSKeyValueNonmutatingCollectionMethodSet * _methods;
}

- (NSKeyValueCollectionGetter *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 methods:(NSKeyValueNonmutatingCollectionMethodSet *)arg2 proxyClass:(Class)arg3;
- (NSKeyValueNonmutatingCollectionMethodSet *)methods;
- (void)dealloc;

@end
