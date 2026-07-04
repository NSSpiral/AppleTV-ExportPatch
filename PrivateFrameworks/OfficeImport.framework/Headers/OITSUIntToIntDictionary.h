/* Runtime dump - OITSUIntToIntDictionary
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary * mDictionary;
}

- (NSArray *)allKeys;
- (void)dealloc;
- (unsigned int)count;
- (OITSUIntToIntDictionary *)init;
- (NSString *)description;
- (OITSUIntToIntDictionary *)initWithCapacity:(unsigned int)arg0;
- (OITSUIntToIntDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (OITSUIntToIntDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
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
