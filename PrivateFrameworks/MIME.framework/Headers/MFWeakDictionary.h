/* Runtime dump - MFWeakDictionary
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFWeakDictionary : NSMutableDictionary
{
    unsigned long _gen;
    NSLock * _lock;
    NSMutableDictionary * _dictionary;
}

- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (MFWeakDictionary *)initWithCapacity:(unsigned int)arg0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg0;
- (NSArray *)allValues;
- (NSDictionary *)_copyDictionary;

@end
