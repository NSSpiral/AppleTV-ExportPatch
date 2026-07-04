/* Runtime dump - CertUIConnectionDelegate
 * Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUIConnectionDelegate : NSObject
{
    CertUITrustManager * _trustManager;
    id _forwardingDelegate;
    NSString * _connectionDisplayName;
    struct ? _delegateRespondsTo;
}

@property (weak, nonatomic) id forwardingDelegate;
@property (copy, nonatomic) NSString * connectionDisplayName;

+ (CertUIConnectionDelegate *)defaultServiceForProtocol:(NSObject *)arg0;

- (char)respondsToSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void).cxx_destruct;
- (void)_continueConnectionWithResponse:(int)arg0 challenge:(NSObject *)arg1 service:(NSObject *)arg2;
- (void)setForwardingDelegate:(NSObject *)arg0;
- (NSObject *)forwardingDelegate;
- (NSString *)connectionDisplayName;
- (void)setConnectionDisplayName:(NSString *)arg0;
- (char)connection:(NSURLConnection *)arg0 canAuthenticateAgainstProtectionSpace:(NSObject *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveAuthenticationChallenge:(NSObject *)arg1;

@end
