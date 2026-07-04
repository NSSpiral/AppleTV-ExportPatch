/* Runtime dump - WebCoreAuthenticationClientAsChallengeSender
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender>
{
    struct AuthenticationClient * m_client;
    struct _CFURLAuthChallenge * m_cfChallenge;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)useCredential:(NSObject *)arg0 forAuthenticationChallenge:(NSObject *)arg1;
- (struct AuthenticationClient *)client;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSObject *)arg0;
- (void)cancelAuthenticationChallenge:(NSObject *)arg0;
- (WebCoreAuthenticationClientAsChallengeSender *)initWithAuthenticationClient:(struct AuthenticationClient *)arg0;
- (void)detachClient;
- (void)setCFChallenge:(struct _CFURLAuthChallenge *)arg0;
- (struct _CFURLAuthChallenge *)cfChallenge;

@end
