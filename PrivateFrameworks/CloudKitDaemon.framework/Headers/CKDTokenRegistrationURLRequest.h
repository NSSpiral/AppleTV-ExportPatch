/* Runtime dump - CKDTokenRegistrationURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDTokenRegistrationURLRequest : CKDURLRequest
{
    NSData * _token;
    NSString * _bundleID;
    NSString * _apsEnvironmentString;
}

@property (retain, nonatomic) NSData * token;
@property (retain, nonatomic) NSString * bundleID;
@property (retain, nonatomic) NSString * apsEnvironmentString;

- (void).cxx_destruct;
- (NSData *)token;
- (void)setToken:(NSData *)arg0;
- (NSString *)bundleID;
- (NSString *)apsEnvironmentString;
- (void)setApsEnvironmentString:(NSString *)arg0;
- (NSString *)flowControlKey;
- (char)requiresTokenRegistration;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (NSArray *)requestOperationClasses;
- (CKDTokenRegistrationURLRequest *)initWithToken:(NSData *)arg0 bundleID:(NSString *)arg1;
- (void)setBundleID:(NSString *)arg0;
- (int)operationType;

@end
