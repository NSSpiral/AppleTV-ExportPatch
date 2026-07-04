/* Runtime dump - SALocalSearchDisambiguationMap
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchDisambiguationMap : SAUISnippet

@property (copy, nonatomic) NSArray * items;

+ (NSObject *)disambiguationMap;
+ (NSDictionary *)disambiguationMapWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (NSString *)encodedClassName;

@end
