/* Runtime dump - SASettingOpenSettings
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenSettings : SASettingCommand

+ (NSDictionary *)openSettings;
+ (NSDictionary *)openSettingsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
