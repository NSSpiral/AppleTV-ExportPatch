/* Runtime dump - CKDSaveUserPrivacySettingsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsOperation : CKDOperation
{
    int _discoverable;
    NSString * _applicationBundleID;
}

@property (nonatomic) int discoverable;
@property (copy, nonatomic) NSString * applicationBundleID;

- (void)main;
- (void).cxx_destruct;
- (NSString *)applicationBundleID;
- (CKDSaveUserPrivacySettingsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (int)discoverable;
- (void)setDiscoverable:(int)arg0;
- (char)shouldCheckAppVersion;
- (void)setApplicationBundleID:(NSString *)arg0;

@end
