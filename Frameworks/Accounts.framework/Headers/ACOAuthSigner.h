/* Runtime dump - ACOAuthSigner
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACOAuthSigner : NSObject
{
    NSXPCConnection * _connection;
    ACAccount * _account;
    <ACDOAuthSignerProtocol> * _proxyShim;
    char _shouldIncludeAppIdInRequest;
}

@property (nonatomic) char shouldIncludeAppIdInRequest;

- (ACOAuthSigner *)initWithAccount:(ACAccount *)arg0 remoteEndpoint:(NSObject *)arg1;
- (void)_connectToRemoteOAuthSignerUsingEndpoint:(NSObject *)arg0;
- (void)disconnectFromRemoteOAuthSigner;
- (NSURLRequest *)signedURLRequestWithURLRequest:(NSString *)arg0 callingPID:(id)arg1 timestamp:(NSDate *)arg2;
- (NSURLRequest *)signedURLRequestWithURLRequest:(NSString *)arg0 applicationID:(NSObject *)arg1 timestamp:(NSDate *)arg2;
- (NSURLRequest *)signedURLRequestWithURLRequest:(NSString *)arg0;
- (char)shouldIncludeAppIdInRequest;
- (void)setShouldIncludeAppIdInRequest:(char)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (ACOAuthSigner *)initWithAccount:(ACAccount *)arg0;

@end
