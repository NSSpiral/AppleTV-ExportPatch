/* Runtime dump - SASettingOpenAirplaneMode
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenAirplaneMode : SASettingOpenSettings <SASettingSettingsAction>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASettingOpenAirplaneMode *)openAirplaneMode;
+ (NSDictionary *)openAirplaneModeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
