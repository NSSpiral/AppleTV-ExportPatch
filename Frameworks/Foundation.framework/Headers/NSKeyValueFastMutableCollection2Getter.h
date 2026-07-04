/* Runtime dump - NSKeyValueFastMutableCollection2Getter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter
{
    NSKeyValueGetter * _baseGetter;
    NSKeyValueMutatingCollectionMethodSet * _mutatingMethods;
}

- (NSKeyValueMutatingCollectionMethodSet *)mutatingMethods;
- (NSKeyValueFastMutableCollection2Getter *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 baseGetter:(NSKeyValueGetter *)arg2 mutatingMethods:(NSKeyValueMutatingCollectionMethodSet *)arg3 proxyClass:(Class)arg4;
- (NSKeyValueGetter *)baseGetter;
- (void)dealloc;

@end
