/* Runtime dump - TSUIntToIntDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary * mDictionary;
}

- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)arg0;
- (NSArray *)allKeys;
- (void)dealloc;
- (unsigned int)count;
- (TSUIntToIntDictionary *)init;
- (NSString *)description;
- (TSUIntToIntDictionary *)initWithCapacity:(unsigned int)arg0;
- (TSUIntToIntDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (TSUIntToIntDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (struct __CFDictionary *)p_cfDictionary;
- (int)intForKey:(int)arg0;
- (void)setInt:(int)arg0 forKey:(int)arg1;
- (char)intIsPresentForKey:(int)arg0 outValue:(int *)arg1;
- (void)removeIntForKey:(int)arg0;
- (void)removeAllInts;
- (void)applyFromIntToIntDictionary:(NSDictionary *)arg0;
- (NSArray *)arrayOfBoxedKeys;
- (char)containsKey:(int)arg0;

@end
