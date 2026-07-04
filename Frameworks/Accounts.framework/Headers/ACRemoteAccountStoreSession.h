/* Runtime dump - ACRemoteAccountStoreSession
 * Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>
{
    NSXPCConnection * _connection;
    char _hasConfiguredRemoteAccountStore;
    char _notificationsEnabled;
    NSString * _spoofedBundleID;
}

@property (copy, nonatomic) NSString * spoofedBundleID;
@property (nonatomic) char notificationsEnabled;

- (void)setSpoofedBundleID:(NSString *)arg0;
- (void)_configureRemoteAccountStoreIfNecessary;
- (NSString *)spoofedBundleID;
- (id)remoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)remoteObjectProxy;
- (void)connect;
- (void).cxx_destruct;
- (void)disconnect;
- (char)notificationsEnabled;
- (void)setNotificationsEnabled:(char)arg0;
- (ACRemoteAccountStoreSession *)initWithXPCConnection:(NSURLConnection *)arg0;

@end
