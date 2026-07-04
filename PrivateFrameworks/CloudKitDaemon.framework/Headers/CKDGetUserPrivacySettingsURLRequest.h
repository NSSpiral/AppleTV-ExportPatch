/* Runtime dump - CKDGetUserPrivacySettingsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (retain, nonatomic) CKDPUserPrivacySettings * userPrivacySettings;

- (void).cxx_destruct;
- (void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg0;
- (CKDPUserPrivacySettings *)userPrivacySettings;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (int)operationType;

@end
