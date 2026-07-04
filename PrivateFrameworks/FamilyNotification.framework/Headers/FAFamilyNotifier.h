/* Runtime dump - FAFamilyNotifier
 * Image: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
 */

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate>
{
    NSXPCConnection * _conn;
    NSLock * _connLock;
    NSXPCListener * _listener;
    NSString * _identifier;
    NSString * _serviceName;
    <FAFamilyNotificationDelegate> * _delegate;
}

@property (readonly) NSString * identifier;
@property (readonly) NSString * serviceName;
@property (weak) <FAFamilyNotificationDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<FAFamilyNotificationDelegate> *)arg0;
- (<FAFamilyNotificationDelegate> *)delegate;
- (NSString *)identifier;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (NSString *)serviceName;
- (NSURLConnection *)agentConnection;
- (void)removeNotificationWithIdentifier:(NSString *)arg0;
- (void)removeAllNotifications;
- (NSString *)_pendingNotificationsWithClientIdentifier:(NSString *)arg0;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (void)_agentConnectionFailedToBootstrap;
- (void)didActivateNotification:(NSNotification *)arg0;
- (void)didDismissNotification:(NSNotification *)arg0;
- (void)didClearNotification:(NSNotification *)arg0;
- (FAFamilyNotifier *)initWithIdentifier:(NSString *)arg0 machServiceName:(NSString *)arg1;
- (void)deliverNotification:(NSNotification *)arg0;
- (id)_pendingNotificationsForAllClients;
- (NSMutableDictionary *)pendingNotifications;

@end
