/* Runtime dump - MCDomainsPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCDomainsPayload : MCPayload
{
    NSDictionary * _restrictions;
}

@property (retain, nonatomic) NSDictionary * restrictions;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;
+ (NSObject *)invalidDomainPatternErrorWithPattern:(NSObject *)arg0;
+ (char)isPatternValid:(id)arg0 outError:(id *)arg1;

- (void).cxx_destruct;
- (NSDictionary *)restrictions;
- (MCDomainsPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)payloadDescriptionKeyValueSections;
- (void)setRestrictions:(NSDictionary *)arg0;

@end
