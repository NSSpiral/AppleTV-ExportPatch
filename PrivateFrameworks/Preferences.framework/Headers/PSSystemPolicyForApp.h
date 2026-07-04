/* Runtime dump - PSSystemPolicyForApp
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemPolicyForApp : NSObject
{
    unsigned int _policyOptions;
    char _forcePolicyOptions;
    NSString * _bundleIdentifier;
}

@property (copy, nonatomic) NSString * bundleIdentifier;

+ (char)isServiceRestricted:(id)arg0;

- (NSString *)bundleIdentifier;
- (PSSystemPolicyForApp *)initWithBundleIdentifier:(NSString *)arg0;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSArray *)specifiers;
- (NSDictionary *)specifiersForPolicyOptions:(unsigned int)arg0 force:(char)arg1;
- (NSArray *)privacySpecifiers;
- (id)notificationSpecifier;
- (NSObject *)privacySpecifierForService:(struct __CFString *)arg0;
- (id)backgroundAppRefreshSpecifier;
- (id)cellularSpecifier;
- (NSDictionary *)_sectionInfo;
- (NSDictionary *)dataUsageWorkspaceInfo;
- (char)isCellularBundleID:(NSObject *)arg0;
- (void)setAppCellularDataEnabled:(id)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)appCellularDataEnabledForSpecifier:(id)arg0;
- (char)_isCellularDataRestricted;
- (char)_supportsBackgroundAppRefresh;
- (void)setBackgroundRefreshEnabled:(id)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)isBackgroundRefreshEnabled:(id)arg0;
- (char)_isBackgroundAppRefreshRestricted;
- (id)locationStatus:(PFUbiquityLocationStatus *)arg0;
- (char)_isLocationServicesRestricted;
- (id)authLevelStringForStatus:(int)arg0;
- (id)locationServicesSpecifier;
- (NSObject *)_privacyAccessForService:(struct __CFString *)arg0;
- (void)setPrivacyAccess:(id)arg0 forSpecifier:(PSPhoneNumberSpecifier *)arg1;
- (id)privacyAccessForSpecifier:(id)arg0;
- (struct __CFBundle *)copyTCCBundleForService:(struct __CFString *)arg0;

@end
