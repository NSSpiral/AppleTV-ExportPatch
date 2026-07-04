/* Runtime dump - MCRemovalPasswordPayload
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCRemovalPasswordPayload : MCPayload
{
    NSString * _removalPasscode;
}

@property (retain, nonatomic) NSString * removalPasscode;

+ (NSArray *)typeStrings;
+ (NSString *)localizedSingularForm;
+ (NSString *)localizedPluralForm;

- (void).cxx_destruct;
- (MCRemovalPasswordPayload *)initWithDictionary:(NSDictionary *)arg0 profile:(MCProfile *)arg1 outError:(id *)arg2;
- (NSDictionary *)stubDictionary;
- (NSString *)removalPasscode;
- (void)setRemovalPasscode:(NSString *)arg0;

@end
