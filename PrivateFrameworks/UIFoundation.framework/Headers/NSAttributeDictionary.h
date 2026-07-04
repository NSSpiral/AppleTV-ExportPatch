/* Runtime dump - NSAttributeDictionary
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionary : NSDictionary
{
    unsigned int numElements;
    id elements;
}

+ (NSDictionary *)newWithDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)emptyAttributeDictionary;
+ (void)initialize;

- (void)getObjects:(id *)arg0 andKeys:(id *)arg1;
- (NSString *)newWithKey:(NSString *)arg0 object:(NSObject *)arg1;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSAttributeDictionary *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEqualToDictionary:(NSDictionary *)arg0;
- (NSEnumerator *)keyEnumerator;
- (NSAttributeDictionary *)mutableCopyWithZone:(struct _NSZone *)arg0;

@end
