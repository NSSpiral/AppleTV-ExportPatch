/* Runtime dump - SASettingOpenMCCSettings
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenMCCSettings : SASettingOpenAppSettings

+ (NSDictionary *)openMCCSettings;
+ (NSDictionary *)openMCCSettingsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
