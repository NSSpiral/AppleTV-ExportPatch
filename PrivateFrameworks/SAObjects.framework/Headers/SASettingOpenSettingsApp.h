/* Runtime dump - SASettingOpenSettingsApp
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenSettingsApp : SASettingOpenSettings <SASettingSettingsAction>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASettingOpenSettingsApp *)openSettingsApp;
+ (NSDictionary *)openSettingsAppWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
