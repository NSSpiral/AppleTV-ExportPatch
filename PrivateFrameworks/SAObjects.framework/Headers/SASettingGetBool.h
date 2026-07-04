/* Runtime dump - SASettingGetBool
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetBool : SASettingGetValue

+ (SASettingGetBool *)getBool;
+ (NSDictionary *)getBoolWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
