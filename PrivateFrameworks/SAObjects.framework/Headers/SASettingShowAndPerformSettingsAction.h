/* Runtime dump - SASettingShowAndPerformSettingsAction
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingShowAndPerformSettingsAction : SABaseClientBoundCommand

@property (retain, nonatomic) <SASettingSettingsAction> * settingsAction;

+ (NSObject *)showAndPerformSettingsAction;
+ (NSDictionary *)showAndPerformSettingsActionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (<SASettingSettingsAction> *)settingsAction;
- (void)setSettingsAction:(<SASettingSettingsAction> *)arg0;

@end
