/* Runtime dump - SASettingGetNumber
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetNumber : SASettingGetValue

+ (NSNumber *)getNumber;
+ (NSDictionary *)getNumberWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
