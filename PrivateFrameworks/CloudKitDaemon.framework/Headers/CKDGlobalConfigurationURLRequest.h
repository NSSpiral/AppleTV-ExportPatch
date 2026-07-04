/* Runtime dump - CKDGlobalConfigurationURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration * _configuration;
}

@property (retain, nonatomic) CKDServerConfiguration * configuration;

- (NSURL *)url;
- (void)setConfiguration:(CKDServerConfiguration *)arg0;
- (void).cxx_destruct;
- (CKDServerConfiguration *)configuration;
- (char)requiresConfiguration;
- (char)requiresDeviceID;
- (char)requiresSignature;
- (char)allowsAnonymousAccount;
- (int)serverType;
- (int)partitionType;
- (char)hasRequestBody;
- (NSString *)httpMethod;
- (Class)expectedResponseClass;
- (void)requestDidParsePlistObject:(NSObject *)arg0;
- (NSDictionary *)additionalHeaderValues;

@end
