/* Runtime dump - SASettingGetWiFi
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetWiFi : SASettingGetBool

+ (SASettingGetWiFi *)getWiFi;
+ (NSDictionary *)getWiFiWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
