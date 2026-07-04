/* Runtime dump - ISUniqueOperationContext
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISUniqueOperationContext : NSObject
{
    NSMutableSet * _operations;
    NSMutableDictionary * _uniqueOperations;
}

- (void)dealloc;
- (ISUniqueOperationContext *)init;
- (void)addOperation:(NSObject *)arg0;
- (void)removeOperation:(NSObject *)arg0;
- (unsigned int)countOfOperations;
- (NSString *)uniqueOperationForKey:(NSString *)arg0;
- (void)setUniqueOperation:(NSObject *)arg0 forKey:(NSString *)arg1;
- (char)containsOperation:(NSObject *)arg0;

@end
