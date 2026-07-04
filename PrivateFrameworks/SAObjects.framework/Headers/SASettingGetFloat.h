/* Runtime dump - SASettingGetFloat
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetFloat : SASettingGetNumber

+ (SASettingGetFloat *)getFloat;
+ (NSDictionary *)getFloatWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
