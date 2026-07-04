/* Runtime dump - SASettingGetValue
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetValue : SASettingCommand

+ (SASettingGetValue *)getValue;
+ (NSDictionary *)getValueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
