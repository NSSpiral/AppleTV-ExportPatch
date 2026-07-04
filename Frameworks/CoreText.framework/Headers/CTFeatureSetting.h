/* Runtime dump - CTFeatureSetting
 * Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface CTFeatureSetting : NSDictionary
{
    NSDictionary * _dictionary;
}

- (CTFeatureSetting *)initWithType:(NSString *)arg0 selector:(NSString *)arg1 tag:(NSString *)arg2 value:(NSObject *)arg3;
- (CTFeatureSetting *)initWithNormalizedDictionary:(NSDictionary *)arg0;
- (char)isEqualToFeatureSetting:(id)arg0;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (CTFeatureSetting *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)type;
- (void *)value;
- (NSString *)selector;
- (NSString *)tag;
- (char)isEqualToDictionary:(NSDictionary *)arg0;
- (NSEnumerator *)keyEnumerator;

@end
