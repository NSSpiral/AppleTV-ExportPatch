/* Runtime dump - SASettingGetGuidedAccess
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingGetGuidedAccess : SASettingGetBool

+ (SASettingGetGuidedAccess *)getGuidedAccess;
+ (NSDictionary *)getGuidedAccessWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
