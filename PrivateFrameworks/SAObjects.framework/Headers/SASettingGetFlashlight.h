/* Runtime dump - SASettingGetFlashlight
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetFlashlight : SASettingGetBool

+ (SASettingGetFlashlight *)getFlashlight;
+ (NSDictionary *)getFlashlightWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
