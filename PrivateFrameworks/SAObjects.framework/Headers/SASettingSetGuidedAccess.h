/* Runtime dump - SASettingSetGuidedAccess
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetGuidedAccess : SASettingSetBool

+ (SASettingSetGuidedAccess *)setGuidedAccess;
+ (NSDictionary *)setGuidedAccessWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
