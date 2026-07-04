/* Runtime dump - ATVOAuth2DPAuthenticator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVOAuth2Authenticator.h>
@interface ATVOAuth2DPAuthenticator : ATVOAuth2Authenticator

@property (readonly) NSString * oauthScope;
@property (readonly) NSString * deviceEndpoint;

- (void)_handleAuthenticationFailedWithError:(NSError *)arg0;
- (NSObject *)_makeAuthenticationController;
- (void)generateCode;
- (NSString *)oauthScope;
- (NSString *)deviceEndpoint;
- (void)_codeDocumentReady:(id)arg0;

@end
