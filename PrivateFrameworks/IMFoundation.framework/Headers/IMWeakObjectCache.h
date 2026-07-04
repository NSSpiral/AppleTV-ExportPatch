/* Runtime dump - IMWeakObjectCache
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMWeakObjectCache : NSObject
{
    NSMutableDictionary * _weakObjectCache;
    struct _opaque_pthread_mutex_t _tableLock;
}

+ (IMWeakObjectCache *)sharedInstance;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (IMWeakObjectCache *)init;
- (NSObject *)copyOrSetObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)copyObjectForKey:(NSString *)arg0;
- (void)removeObject:(struct objc_method *)arg0 key:(NSString *)arg1;

@end
