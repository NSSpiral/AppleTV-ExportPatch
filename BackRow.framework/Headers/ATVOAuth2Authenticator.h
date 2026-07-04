/* Runtime dump - ATVOAuth2Authenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRAuthenticator.h>
@interface ATVOAuth2Authenticator : BRAuthenticator
{
    NSDate * _codeCreationDate;
    double _codeExpiresIn;
    NSString * _code;
}

@property (readonly) NSString * clientID;
@property (readonly) NSString * code;
@property (readonly) NSString * clientSecret;
@property (readonly) NSString * tokenEndpoint;

- (void)_handleAuthenticationFailedWithError:(NSError *)arg0;
- (void)_sendAuthenticationRequest;
- (char)requiresCode;
- (void)setCode:(NSString *)arg0 withExpiryTime:(double)arg1;
- (NSString *)_makeTokenRequestFromRefreshToken:(NSString *)arg0;
- (id)_makeTokenRequestFromCode:(id)arg0;
- (void)_resetCode;
- (void)_tokenRequestDocumentReady:(id)arg0;
- (NSString *)clientSecret;
- (NSString *)tokenEndpoint;
- (void)_handlePostTokenGenerationWithCompletionHandler:(id /* block */)arg0;
- (void)dealloc;
- (NSString *)code;
- (void)_handleAuthenticationSucceeded;
- (ATVOAuth2Authenticator *)initWithAccount:(ACAccount *)arg0;
- (NSString *)clientID;

@end
