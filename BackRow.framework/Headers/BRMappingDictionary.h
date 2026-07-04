/* Runtime dump - BRMappingDictionary
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMappingDictionary : NSObject
{
    NSMutableDictionary * _info;
}

- (NSString *)transformedValueForKey:(NSString *)arg0 forObject:(NSObject *)arg1;
- (void)setValueTransformer:(NSValueTransformer *)arg0 forKey:(NSString *)arg1;
- (NSString *)valueTransformerForKey:(NSString *)arg0;
- (NSString *)valueForKey:(NSString *)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(id /* <NSCopying> */)arg1;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (long)count;
- (BRMappingDictionary *)init;
- (NSEnumerator *)objectEnumerator;
- (NSEnumerator *)keyEnumerator;

@end
