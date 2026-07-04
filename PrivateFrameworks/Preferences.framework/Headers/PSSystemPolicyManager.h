/* Runtime dump - PSSystemPolicyManager
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSystemPolicyManager : NSObject

+ (void)_populateBBSectionIDs;
+ (char)_shouldIncludeProxy:(NSObject *)arg0;
+ (char)_systemSettingsNeededForProxy:(NSObject *)arg0;
+ (char)_privacySettingsNeededForProxy:(NSObject *)arg0;
+ (char)_locationSettingsNeededForBundleID:(NSObject *)arg0;
+ (char)_backgroundAppRefreshSettingsNeededForProxy:(NSObject *)arg0;
+ (char)_cellularDataSettingsNeededForBundleID:(NSObject *)arg0;
+ (char)_notificationSettingsNeededForBundleID:(NSObject *)arg0;
+ (NSDictionary *)_dataUsageWorkspaceInfo;
+ (PSSystemPolicyManager *)thirdPartyApplicationProxies;
+ (NSObject *)thirdPartyApplicationProxyForBundleID:(NSObject *)arg0;

@end
