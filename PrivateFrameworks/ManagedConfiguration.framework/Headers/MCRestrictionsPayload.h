/* Runtime dump - MCRestrictionsPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCRestrictionsPayload : MCPayload
{
    NSMutableDictionary * _restrictions;
    NSString * _iCloudPassword;
}

@property (retain, nonatomic) NSString * iCloudPassword;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (void).cxx_destruct;
- (NSString *)_invalidFieldErrorWithFieldName:(NSString *)arg0;
- (NSMutableDictionary *)restrictions;
- (MCRestrictionsPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSArray *)installationWarnings;
- (NSArray *)_restrictedFeatureStrings;
- (NSArray *)_enforcedFeatureStrings;
- (NSDictionary *)_defaultMediaSettings;
- (NSArray *)_intersectionStrings;
- (NSArray *)_unionStrings;
- (NSArray *)localizedRestrictionStrings;
- (void)_insertRestrictedBoolForKey:(NSString *)arg0 value:(NSObject *)arg1 preferenc:(char)arg2;
- (NSString *)iCloudPassword;
- (void)setICloudPassword:(NSString *)arg0;

@end
