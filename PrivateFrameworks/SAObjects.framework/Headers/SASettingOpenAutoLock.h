/* Runtime dump - SASettingOpenAutoLock
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingOpenAutoLock : SASettingOpenSettings

+ (SASettingOpenAutoLock *)openAutoLock;
+ (NSDictionary *)openAutoLockWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (char)requiresResponse;

@end
