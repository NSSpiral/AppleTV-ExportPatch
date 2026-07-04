/* Runtime dump - CKDGetUserPrivacySettingsOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserPrivacySettingsOperation : CKDOperation
{
    int _discoverable;
}

@property (nonatomic) int discoverable;

- (void)main;
- (CKDGetUserPrivacySettingsOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (int)discoverable;
- (void)setDiscoverable:(int)arg0;
- (void)_handleRetrievedPrivacySettings:(NSDictionary *)arg0;

@end
