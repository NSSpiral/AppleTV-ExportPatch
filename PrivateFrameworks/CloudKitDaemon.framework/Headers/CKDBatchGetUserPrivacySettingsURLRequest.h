/* Runtime dump - CKDBatchGetUserPrivacySettingsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSArray * _containerPrivacySettings;
}

@property (retain, nonatomic) NSArray * containerPrivacySettings;

- (void).cxx_destruct;
- (NSArray *)containerPrivacySettings;
- (char)requiresTokenRegistration;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (void)setContainerPrivacySettings:(NSArray *)arg0;
- (int)operationType;

@end
