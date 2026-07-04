/* Runtime dump - PSRestrictionsPasscodeController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRestrictionsPasscodeController : NSObject

+ (char)validatePIN:(id)arg0;
+ (void)setPIN:(NSSet *)arg0;
+ (char)settingEnabled;
+ (PSRestrictionsPasscodeController *)_keychainPasswordForRestrictions;
+ (void)_removeKeychainPasswordForRestrictions;
+ (NSDictionary *)_restrictionPasswordDictionary;
+ (PSRestrictionsPasscodeController *)_generateSalt;
+ (NSString *)newHashDataForPassword:(NSString *)arg0 andSalt:(id)arg1;
+ (void)setPasswordForRestrictions:(id)arg0;
+ (void)removePasswordForRestrictions;
+ (PSRestrictionsPasscodeController *)passwordForRestrictions;
+ (char)legacyRestrictionsInEffect;
+ (void)migrateRestrictionsPasscode;
+ (PSRestrictionsPasscodeController *)saltForRestrictions;

@end
