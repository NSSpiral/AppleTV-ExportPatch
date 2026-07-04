/* Runtime dump - PSBiometricIdentity
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSBiometricIdentity : NSObject

+ (NSArray *)identities;
+ (void)removeIdentity:(NSObject *)arg0;
+ (NSObject *)nameForIdentity:(NSObject *)arg0;
+ (int)maximumIdentityCount;
+ (void)setName:(NSString *)arg0 forIdentity:(NSObject *)arg1;
+ (NSString *)nextIdentityName;

@end
