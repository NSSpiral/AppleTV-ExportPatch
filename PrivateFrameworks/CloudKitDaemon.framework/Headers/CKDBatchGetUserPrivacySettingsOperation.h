/* Runtime dump - CKDBatchGetUserPrivacySettingsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation
{
    NSArray * _containerPrivacySettings;
}

@property (copy, nonatomic) NSArray * containerPrivacySettings;

+ (NSDictionary *)appPermissionGroupsFromContainerPrivacySettings:(NSDictionary *)arg0;

- (void)main;
- (void).cxx_destruct;
- (NSArray *)containerPrivacySettings;
- (char)shouldCheckAppVersion;
- (void)setContainerPrivacySettings:(NSArray *)arg0;

@end
