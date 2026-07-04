/* Runtime dump - TSUNoCopyDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUNoCopyDictionary : NSMutableDictionary
{
    struct __CFDictionary * mDictionary;
}

- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (NSArray *)allKeys;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (TSUNoCopyDictionary *)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(NSString *)arg0;
- (TSUNoCopyDictionary *)initWithCapacity:(unsigned int)arg0;
- (TSUNoCopyDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)objectEnumerator;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (TSUNoCopyDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSUNoCopyDictionary *)initWithCFDictionary:(struct __CFDictionary *)arg0;
- (void)setObject:(NSObject *)arg0 forUncopiedKey:(NSString *)arg1;

@end
