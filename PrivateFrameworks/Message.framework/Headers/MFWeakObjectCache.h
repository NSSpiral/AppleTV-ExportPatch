/* Runtime dump - MFWeakObjectCache
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFWeakObjectCache : NSObject
{
    id _block;
    NSMutableDictionary * _dictionary;
    NSLock * _lock;
}

- (MFWeakObjectCache *)initWithBlock:(id /* block */)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0 wasCached:(char *)arg1;

@end
