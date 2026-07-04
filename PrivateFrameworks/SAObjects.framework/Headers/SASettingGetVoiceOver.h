/* Runtime dump - SASettingGetVoiceOver
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetVoiceOver : SASettingGetBool

+ (SASettingGetVoiceOver *)getVoiceOver;
+ (NSDictionary *)getVoiceOverWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
