/* Runtime dump - HAPRelayActivationClient
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayActivationClient : NSObject
{
    <HAPRelayActivationClientDelegate> * _delegate;
}

@property (weak) <HAPRelayActivationClientDelegate> * delegate;

- (void)setDelegate:(<HAPRelayActivationClientDelegate> *)arg0;
- (<HAPRelayActivationClientDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (void)requestChallenge;
- (void)requestCertificateWithPublicKey:(NSString *)arg0 challengeCertificate:(NSObject *)arg1 challengeResponse:(NSURLResponse *)arg2;

@end
