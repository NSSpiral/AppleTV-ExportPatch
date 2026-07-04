/* Runtime dump - SASettingGetDoNotDisturb
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetDoNotDisturb : SASettingGetBool

+ (SASettingGetDoNotDisturb *)getDoNotDisturb;
+ (NSDictionary *)getDoNotDisturbWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
