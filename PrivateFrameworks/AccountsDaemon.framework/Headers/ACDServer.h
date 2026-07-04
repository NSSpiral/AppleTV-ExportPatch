/* Runtime dump - ACDServer
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDServer : NSObject <NSXPCListenerDelegate, ACDAccountStoreDelegate>
{
    NSXPCListener * _accountStoreListener;
    NSXPCListener * _oauthSignerListener;
    NSXPCListener * _authenticationDialogListener;
    NSMutableArray * _accountStoreClients;
    NSMutableArray * _oauthSignerClients;
    NSMutableArray * _authenticationDialogManagerClients;
    NSMutableDictionary * _entitlementsByConnection;
    NSMutableDictionary * _clientsByConnection;
    NSObject<OS_dispatch_queue> * _deferredConnectionResumeQueue;
    NSObject<OS_dispatch_semaphore> * _deferredConnectionResumeQueueSemaphore;
    NSObject<OS_dispatch_queue> * _performMigrationQueue;
    ACDAuthenticationPluginManager * _authenticationPluginManager;
    ACDAccessPluginManager * _accessPluginManager;
    ACDDataclassOwnersManager * _dataclassOwnersManager;
    ACDAuthenticationDialogManager * _authenticationDialogManager;
    ACRemoteDeviceProxy * _remoteDeviceProxy;
}

@property (retain, nonatomic) ACDAuthenticationPluginManager * authenticationPluginManager;
@property (retain, nonatomic) ACDAccessPluginManager * accessPluginManager;
@property (retain, nonatomic) ACDDataclassOwnersManager * dataclassOwnersManager;
@property (retain, nonatomic) ACDAuthenticationDialogManager * authenticationDialogManager;
@property (retain, nonatomic) ACRemoteDeviceProxy * remoteDeviceProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ACDServer *)sharedServer;

- (void)dealloc;
- (ACDServer *)init;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)credentialsDidChangeForAccountWithIdentifier:(NSString *)arg0;
- (ACDDataclassOwnersManager *)dataclassOwnersManager;
- (void)accountStoreDidSaveAccounts;
- (ACDAuthenticationDialogManager *)authenticationDialogManager;
- (ACRemoteDeviceProxy *)remoteDeviceProxy;
- (void)setRemoteDeviceProxy:(ACRemoteDeviceProxy *)arg0;
- (ACDAuthenticationPluginManager *)authenticationPluginManager;
- (void)setAuthenticationPluginManager:(ACDAuthenticationPluginManager *)arg0;
- (ACDAccessPluginManager *)accessPluginManager;
- (void)setAccessPluginManager:(ACDAccessPluginManager *)arg0;
- (void)setDataclassOwnersManager:(ACDDataclassOwnersManager *)arg0;
- (void)setAuthenticationDialogManager:(ACDAuthenticationDialogManager *)arg0;
- (NSURLConnection *)clientForConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)entitlementsForConnection:(NSURLConnection *)arg0;
- (void)setUpWithAccountStoreConnectionListener:(NSXPCListener *)arg0 oauthSignerConnectionListener:(NSXPCListener *)arg1 authenticationDialogConnectionListener:(NSXPCListener *)arg2;
- (void)_signalDeferredConnectionResumeQueueSemaphore;
- (void)_beginObservingLanguageChangeNotfication;
- (void)_beginObservingLaunchNotifications;
- (void)_beginObservingIDSProxyNotifications;
- (void)_stopObservingLanguageChangeNotification;
- (NSURLConnection *)_keyForConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)_enumerateAllEntitlementForConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)createClientForConnection:(NSURLConnection *)arg0;
- (NSObject *)_newDaemonAccountStoreFilterForClient:(NSObject *)arg0;
- (NSObject *)_newOAuthSignerForClient:(NSObject *)arg0;
- (void)shutdown;

@end
