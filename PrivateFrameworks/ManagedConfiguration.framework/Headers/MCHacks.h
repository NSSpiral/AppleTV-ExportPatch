/* Runtime dump - MCHacks
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHacks : NSObject

+ (MCHacks *)sharedHacks;

- (id)quantizedGracePeriodInSeconds:(id)arg0;
- (id)quantizedAutoLockInSeconds:(id)arg0;
- (char)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg0;
- (char)_applyHeuristicsToRestrictions:(id)arg0 forProfile:(MCProfile *)arg1 outError:(id *)arg2;
- (id)_permittedGracePeriodNumbers;
- (NSArray *)_selectLargestNumberFromSortedArray:(NSArray *)arg0 equalToOrLessThanNumber:(NSNumber *)arg1;
- (id)_permittedAutoLockNumbers;
- (void)_applyServerSideChangesWithOldRestrictions:(char)arg0 newRestrictions:(SAUpdateRestrictions *)arg1 oldEffectiveUserSettings:(NSDictionary *)arg2 newEffectiveUserSettings:(NSDictionary *)arg3;
- (void)_applyImpliedSettingsToSettingsDictionary:(NSDictionary *)arg0 currentSettings:(NSDictionary *)arg1 restrictions:(SAUpdateRestrictions *)arg2;
- (void)_applyMandatorySettingsToEffectiveUserSettings:(NSDictionary *)arg0;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(NSDictionary *)arg0;
- (NSDictionary *)_deviceSpecificDefaultSettings;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(NSString *)arg0;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(NSString *)arg0;
- (char)isSetupBuddyDone;

@end
