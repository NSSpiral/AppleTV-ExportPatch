/* Runtime dump - SASettingSetUIGuidedAccess
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetUIGuidedAccess : SASettingSetBool

+ (SASettingSetUIGuidedAccess *)setUIGuidedAccess;
+ (NSDictionary *)setUIGuidedAccessWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
