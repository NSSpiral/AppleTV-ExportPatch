/* Runtime dump - CKDMescalCertURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMescalCertURLRequest : CKDURLRequest
{
    NSData * _mescalCert;
}

@property (retain, nonatomic) NSData * mescalCert;

- (NSURL *)url;
- (void).cxx_destruct;
- (char)requiresDeviceID;
- (char)requiresSignature;
- (char)allowsAnonymousAccount;
- (int)serverType;
- (int)partitionType;
- (char)hasRequestBody;
- (NSData *)mescalCert;
- (NSString *)httpMethod;
- (void)requestDidParsePlaintextObject:(NSObject *)arg0;
- (void)setMescalCert:(NSData *)arg0;

@end
