/* Runtime dump - NSKeyValueFastMutableCollection1Getter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter
{
    NSKeyValueNonmutatingCollectionMethodSet * _nonmutatingMethods;
    NSKeyValueMutatingCollectionMethodSet * _mutatingMethods;
}

- (NSKeyValueFastMutableCollection1Getter *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 nonmutatingMethods:(NSKeyValueNonmutatingCollectionMethodSet *)arg2 mutatingMethods:(NSKeyValueMutatingCollectionMethodSet *)arg3 proxyClass:(Class)arg4;
- (NSKeyValueNonmutatingCollectionMethodSet *)nonmutatingMethods;
- (NSKeyValueMutatingCollectionMethodSet *)mutatingMethods;
- (void)dealloc;

@end
