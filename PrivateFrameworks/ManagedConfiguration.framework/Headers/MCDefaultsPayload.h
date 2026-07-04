/* Runtime dump - MCDefaultsPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDefaultsPayload : MCPayload
{
    NSDictionary * _defaultsByDomain;
}

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (NSString *)description;
- (NSString *)title;
- (void).cxx_destruct;
- (MCDefaultsPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (char)isAllowedToWriteDefaults;
- (NSArray *)domains;
- (NSString *)defaultsForDomain:(NSString *)arg0;

@end
