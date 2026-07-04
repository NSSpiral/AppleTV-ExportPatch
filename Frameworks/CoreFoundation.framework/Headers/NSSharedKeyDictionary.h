/* Runtime dump - NSSharedKeyDictionary
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSSharedKeyDictionary : NSMutableDictionary
{
    NSSharedKeySet * _keyMap;
    unsigned int _count;
    id * _values;
    /* block */ id * _ifkIMP;
    NSMutableDictionary * _sideDic;
    unsigned long _mutations;
}

+ (NSSharedKeyDictionary *)sharedKeyDictionaryWithKeySet:(NSSet *)arg0;

- (void)getObjects:(id *)arg0 andKeys:(id *)arg1 count:(unsigned int)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (NSSharedKeyDictionary *)initWithKeySet:(NSSet *)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (NSSharedKeyDictionary *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (void)removeObjectForKey:(NSString *)arg0;
- (NSSharedKeyDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSEnumerator *)keyEnumerator;
- (NSSharedKeyDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSSet *)keySet;
- (void)finalize;

@end
