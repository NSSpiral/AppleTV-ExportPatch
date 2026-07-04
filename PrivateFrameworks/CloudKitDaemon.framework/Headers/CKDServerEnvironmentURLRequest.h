/* Runtime dump - CKDServerEnvironmentURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDServerEnvironmentURLRequest : CKDURLRequest
{
    int _environment;
}

@property (nonatomic) int environment;

- (NSURL *)url;
- (int)environment;
- (void)setEnvironment:(int)arg0;
- (char)requiresConfiguration;
- (char)requiresDeviceID;
- (char)requiresSignature;
- (char)allowsAnonymousAccount;
- (char)allowsAuthedAccount;
- (int)serverType;
- (int)partitionType;
- (char)hasRequestBody;
- (void)requestDidParseJSONObject:(NSObject *)arg0;

@end
