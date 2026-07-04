/* Runtime dump - MFSASLAuthenticator
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSASLAuthenticator : NSObject
{
    MFConnection * _connection;
    MFAuthScheme * _authScheme;
    MFAccount * _account;
    int _authenticationState;
}

- (void)dealloc;
- (MFAccount *)account;
- (NSString *)saslName;
- (char)base64EncodeResponseData;
- (void)setAuthenticationState:(int)arg0;
- (NSData *)responseForServerData:(NSData *)arg0;
- (char)justSentPlainTextPassword;
- (int)authenticationState;
- (MFSASLAuthenticator *)initWithAuthScheme:(MFAuthScheme *)arg0 account:(MFAccount *)arg1 connection:(MFConnection *)arg2;
- (MFAuthScheme *)authScheme;
- (char)supportsInitialClientResponse;
- (<MFSASLSecurityLayer> *)securityLayer;
- (char)isUsingSSL;
- (char)couldRetry;
- (void)setMissingPasswordError;

@end
