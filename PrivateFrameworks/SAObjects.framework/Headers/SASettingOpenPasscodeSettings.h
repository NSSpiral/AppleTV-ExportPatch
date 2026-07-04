/* Runtime dump - SASettingOpenPasscodeSettings
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenPasscodeSettings : SASettingOpenSettings

+ (NSDictionary *)openPasscodeSettings;
+ (NSDictionary *)openPasscodeSettingsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
