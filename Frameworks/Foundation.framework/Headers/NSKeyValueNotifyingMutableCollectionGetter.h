/* Runtime dump - NSKeyValueNotifyingMutableCollectionGetter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueNotifyingMutableCollectionGetter : NSKeyValueProxyGetter
{
    NSKeyValueProxyGetter * _mutableCollectionGetter;
}

- (NSKeyValueNotifyingMutableCollectionGetter *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 mutableCollectionGetter:(NSKeyValueProxyGetter *)arg2 proxyClass:(Class)arg3;
- (NSKeyValueProxyGetter *)mutableCollectionGetter;
- (void)dealloc;

@end
