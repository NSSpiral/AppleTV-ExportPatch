/* Runtime dump - OAURLRequestSigner
 * Image: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

@interface OAURLRequestSigner : NSObject
{
    OACredential * _credential;
    int _signatureMethod;
}

@property (nonatomic) int signatureMethod;

- (Class)signer;
- (NSURLRequest *)signedURLRequestWithRequest:(NSURLRequest *)arg0;
- (OAURLRequestSigner *)initWithCredential:(OACredential *)arg0;
- (void)dealloc;
- (NSURLRequest *)signedURLRequestWithRequest:(NSURLRequest *)arg0 applicationID:(NSObject *)arg1 timestamp:(NSDate *)arg2;
- (int)signatureMethod;
- (NSString *)signatureMethodString;
- (NSObject *)applyApplicationID:(NSObject *)arg0 toRequest:(NSURLRequest *)arg1 containsMultiPartData:(char)arg2;
- (id)oauthNonce;
- (NSDate *)timestamp:(NSDate *)arg0;
- (id)oauthParametersWithNonce:(int)arg0 timeStamp:(NSDate *)arg1;
- (NSObject *)oauthAuthorizationHeaderWithSignature:(NSObject *)arg0 nonce:(int)arg1 timestamp:(NSDate *)arg2;
- (void)setSignatureMethod:(int)arg0;

@end
