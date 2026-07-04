/* Runtime dump - TSUAtomicLRUCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUAtomicLRUCache : TSULRUCache

- (NSArray *)allKeys;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSArray *)allValues;
- (void)setEvictionCallbackTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (void)clearEvictionCallbackTarget;

@end
