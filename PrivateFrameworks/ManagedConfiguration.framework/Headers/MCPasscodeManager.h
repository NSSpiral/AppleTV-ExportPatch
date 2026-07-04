/* Runtime dump - MCPasscodeManager
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCPasscodeManager : NSObject

+ (MCPasscodeManager *)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)arg0;
+ (int)unlockScreenTypeForRestrictions:(id)arg0;
+ (char)isDeviceUnlocked;
+ (char)passcode:(NSString *)arg0 compliesWithPolicyFromRestrictions:(id)arg1 checkHistory:(char)arg2 outError:(id *)arg3;
+ (MCPasscodeManager *)characteristicsDictionaryFromPasscode:(id)arg0;
+ (char)_passcodeCharacteristics:(id)arg0 compliesWithPolicyFromRestrictions:(id)arg1 outError:(id *)arg2;
+ (NSError *)deviceLockedError;
+ (MCPasscodeManager *)hashForPasscode:(id)arg0 usingMethod:(int)arg1 salt:(id)arg2;
+ (MCPasscodeManager *)generateSalt;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)arg0;
+ (MCPasscodeManager *)sharedManager;

- (char)isDeviceLocked;
- (NSError *)passcodeExpiryDateOutError:(id *)arg0;
- (char)unlockDeviceWithPasscode:(NSString *)arg0 outError:(id *)arg1;
- (char)currentPasscodeCompliesWithPolicyFromRestrictions:(id)arg0 outError:(id *)arg1;
- (void)lockDeviceImmediately:(char)arg0;
- (char)isPasscodeSet;
- (char)passcode:(NSString *)arg0 compliesWithPolicyCheckHistory:(char)arg1 outError:(id *)arg2;
- (void)passcodeExpiryDateCompletionBlock:(id /* block */)arg0;
- (int)currentUnlockScreenType;
- (int)newPasscodeEntryScreenType;
- (void)lockDevice;
- (NSError *)_wrongPasscodeError;
- (id)_privatePasscodeDict;
- (id)_publicPasscodeDict;
- (char)_checkPasscode:(id)arg0 againstHistoryWithRestrictions:(id)arg1 outError:(id *)arg2;
- (id)_passcodeCharacteristics;
- (NSObject *)localizedDescriptionOfPasscodePolicy;
- (char)isCurrentPasscodeCompliantOutError:(id *)arg0;

@end
