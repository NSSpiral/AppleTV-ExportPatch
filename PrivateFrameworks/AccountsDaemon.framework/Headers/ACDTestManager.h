/* Runtime dump - ACDTestManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDTestManager : NSObject
{
    NSXPCListener * _accountStoreConnectionListener;
    NSXPCListener * _oauthSignerConnectionListener;
    NSXPCListener * _authenticationDialogConnectionListener;
    NSString * _storePath;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint * remoteAccountStoreEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint * remoteOAuthSignerEndpoint;

+ (NSObject *)testServer;

- (void).cxx_destruct;
- (NSString *)_pseudoUniqueDatabasePath;
- (void)startTestServer;
- (void)stopTestServer;
- (NSXPCListenerEndpoint *)remoteAccountStoreEndpoint;
- (NSXPCListenerEndpoint *)remoteOAuthSignerEndpoint;

@end
