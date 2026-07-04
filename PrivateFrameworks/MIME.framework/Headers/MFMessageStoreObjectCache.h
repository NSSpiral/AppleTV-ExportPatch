/* Runtime dump - MFMessageStoreObjectCache
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageStoreObjectCache : NSObject
{
    NSLock * _lock;
    long _capacity;
    struct __CFDictionary * _cache;
    id _keyGenerator;
    id _comparator;
}

@property (copy, nonatomic) id keyGenerator;
@property (copy, nonatomic) id comparator;

- (id /* block */)comparator;
- (void)dealloc;
- (NSString *)description;
- (NSString *)debugDescription;
- (void)flush;
- (MFMessageStoreObjectCache *)initWithCapacity:(unsigned int)arg0;
- (void)_nts_evictObject;
- (void)_nts_setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setObject:(NSObject *)arg0 forMessage:(NSString *)arg1 kind:(int)arg2;
- (NSObject *)addObject:(struct objc_method *)arg0 forMessage:(NSString *)arg1 kind:(int)arg2;
- (NSString *)objectForMessage:(NSString *)arg0 kind:(int)arg1;
- (id)keyGenerator;
- (void)setKeyGenerator:(id)arg0;
- (void)setComparator:(id /* block */)arg0;

@end
