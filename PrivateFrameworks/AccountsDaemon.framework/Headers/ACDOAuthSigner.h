/* Runtime dump - ACDOAuthSigner
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDOAuthSigner : NSObject <ACDOAuthSignerProtocol>
{
    ACDDatabase * _database;
    ACDClient * _client;
    ACDClientAuthorizationManager * _authorizationManager;
    char _shouldIncludeAppIdInRequest;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setShouldIncludeAppIdInRequest:(char)arg0;
- (void).cxx_destruct;
- (void)setClientBundleID:(NSString *)arg0 withHandler:(id /* block */)arg1;
- (NSObject *)ckForAccountType:(NSObject *)arg0;
- (NSObject *)csForAccountType:(NSObject *)arg0;
- (char)_permissionGrantedForBundleID:(NSObject *)arg0 onAccountType:(NSObject *)arg1;
- (NSURLRequest *)_signedRequest:(NSURLRequest *)arg0 withAccountObject:(NSObject *)arg1 applicationID:(NSObject *)arg2 timestamp:(NSDate *)arg3;
- (void)signURLRequest:(NSURLRequest *)arg0 withAccount:(NSObject *)arg1 callingPID:(id)arg2 timestamp:(NSDate *)arg3 handler:(id /* block */)arg4;
- (void)signURLRequest:(NSURLRequest *)arg0 withAccount:(NSObject *)arg1 applicationID:(NSObject *)arg2 timestamp:(NSDate *)arg3 handler:(id /* block */)arg4;
- (NSURLRequest *)signedRequest:(NSURLRequest *)arg0 withAccount:(NSObject *)arg1 applicationID:(NSObject *)arg2 timestamp:(NSDate *)arg3;
- (ACDOAuthSigner *)initWithClient:(ACDClient *)arg0;

@end
