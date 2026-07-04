/* Runtime dump - SASettingSetAirplaneMode
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetAirplaneMode : SASettingSetBool <SASettingSettingsAction>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASettingSetAirplaneMode *)setAirplaneMode;
+ (NSDictionary *)setAirplaneModeWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
