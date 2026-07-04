/* Runtime dump - OITSUIntegerKeyDictionary
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary * mDictionary;
}

- (NSString *)objectForKey:(int)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(int)arg1;
- (void)dealloc;
- (unsigned int)count;
- (OITSUIntegerKeyDictionary *)init;
- (void)removeAllObjects;
- (NSString *)description;
- (void)removeObjectForKey:(int)arg0;
- (OITSUIntegerKeyDictionary *)initWithCapacity:(unsigned int)arg0;
- (OITSUIntegerKeyDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)allValues;
- (NSEnumerator *)keyEnumerator;
- (OITSUIntegerKeyDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)valueEnumerator;
- (struct __CFDictionary *)p_cfDictionary;

@end
