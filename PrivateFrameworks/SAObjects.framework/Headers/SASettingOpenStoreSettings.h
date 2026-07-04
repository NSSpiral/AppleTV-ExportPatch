/* Runtime dump - SASettingOpenStoreSettings
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenStoreSettings : SASettingOpenAppSettings

+ (NSDictionary *)openStoreSettings;
+ (NSDictionary *)openStoreSettingsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
