/* Runtime dump - CKDSaveUserPrivacySettingsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString * _bundleID;
    int _discoverableTrinary;
}

@property (copy, nonatomic) NSString * bundleID;
@property (nonatomic) int discoverableTrinary;

- (CKDSaveUserPrivacySettingsURLRequest *)init;
- (void).cxx_destruct;
- (NSString *)bundleID;
- (void)setDiscoverable:(char)arg0;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (void)setBundleID:(NSString *)arg0;
- (void)setDiscoverableTrinary:(int)arg0;
- (int)discoverableTrinary;
- (int)operationType;

@end
