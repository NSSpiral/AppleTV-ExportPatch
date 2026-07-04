/* Runtime dump - WLKCache
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface WLKCache : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _stack;
    NSMutableDictionary * _dictionary;
    unsigned int _countLimit;
}

@property unsigned int countLimit;

- (void)_onQueueRemoveObjectForKey:(NSString *)arg0;
- (unsigned int)countLimit;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(id /* <NSCopying> */)arg1;
- (WLKCache *)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (void).cxx_destruct;
- (void)setCountLimit:(unsigned int)arg0;

@end
