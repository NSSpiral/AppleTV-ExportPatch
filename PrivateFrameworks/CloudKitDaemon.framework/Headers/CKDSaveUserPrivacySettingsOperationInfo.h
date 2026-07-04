/* Runtime dump - CKDSaveUserPrivacySettingsOperationInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo
{
    int _discoverable;
    NSString * _applicationBundleID;
}

@property (nonatomic) int discoverable;
@property (copy, nonatomic) NSString * applicationBundleID;

- (CKDSaveUserPrivacySettingsOperationInfo *)init;
- (void).cxx_destruct;
- (NSString *)applicationBundleID;
- (int)discoverable;
- (void)setDiscoverable:(int)arg0;
- (void)setApplicationBundleID:(NSString *)arg0;

@end
