/* Runtime dump - NSSimpleAttributeDictionary
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSimpleAttributeDictionary : NSDictionary
{
    unsigned int numElements;
    unsigned int refCount;
    id elements;
}

+ (NSDictionary *)newWithDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)emptyAttributeDictionary;

- (NSString *)newWithKey:(NSString *)arg0 object:(NSObject *)arg1;
- (unsigned int)slotForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSSimpleAttributeDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (NSEnumerator *)keyEnumerator;
- (NSSimpleAttributeDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
