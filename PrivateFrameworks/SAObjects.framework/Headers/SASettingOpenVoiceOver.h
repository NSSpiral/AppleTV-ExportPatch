/* Runtime dump - SASettingOpenVoiceOver
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenVoiceOver : SASettingOpenSettings <SASettingSettingsAction>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASettingOpenVoiceOver *)openVoiceOver;
+ (NSDictionary *)openVoiceOverWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
