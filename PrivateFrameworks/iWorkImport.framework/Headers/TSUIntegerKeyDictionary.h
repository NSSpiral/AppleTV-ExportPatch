/* Runtime dump - TSUIntegerKeyDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary * mDictionary;
}

- (NSString *)objectForKey:(int)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(int)arg1;
- (void)dealloc;
- (unsigned int)count;
- (TSUIntegerKeyDictionary *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(int)arg0;
- (TSUIntegerKeyDictionary *)initWithCapacity:(unsigned int)arg0;
- (TSUIntegerKeyDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (TSUIntegerKeyDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)valueEnumerator;
- (struct __CFDictionary *)p_cfDictionary;

@end
