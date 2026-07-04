/* Runtime dump - NSKeyValueSlowMutableCollectionGetter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter
{
    NSKeyValueGetter * _baseGetter;
    NSKeyValueSetter * _baseSetter;
}

- (NSKeyValueGetter *)baseGetter;
- (NSKeyValueSlowMutableCollectionGetter *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 baseGetter:(NSKeyValueGetter *)arg2 baseSetter:(NSKeyValueSetter *)arg3 containerIsa:(Class)arg4 proxyClass:(Class)arg5;
- (NSKeyValueSetter *)baseSetter;
- (char)treatNilValuesLikeEmptyCollections;
- (void)dealloc;

@end
