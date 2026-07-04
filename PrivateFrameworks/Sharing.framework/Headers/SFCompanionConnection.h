/* Runtime dump - SFCompanionConnection
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionConnection : NSObject <SFCompanionConnectionManagerClient, SFCompanionXPCManagerObserver>
{
    char _waitForAccept;
    char _invalid;
    <SFCompanionConnectionDelegate> * _delegate;
    unsigned int _status;
    SFCompanionService * _service;
    SFCompanionInterface * _exportedInterface;
    id _exportedObject;
    SFCompanionInterface * _remoteObjectInterface;
    SFCompanionDevice * _connectedDevice;
    NSString * _connectionID;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSXPCConnection * _userConnection;
    <SFCompanionConnectionManagerProtocol> * _connectionProxy;
}

@property <SFCompanionConnectionDelegate> * delegate;
@property unsigned int status;
@property (retain) SFCompanionService * service;
@property (retain) SFCompanionInterface * exportedInterface;
@property (retain) id exportedObject;
@property (retain) SFCompanionInterface * remoteObjectInterface;
@property (retain, nonatomic) SFCompanionDevice * connectedDevice;
@property char waitForAccept;
@property (readonly, copy, nonatomic) NSString * connectionID;
@property NSObject<OS_dispatch_queue> * workQueue;
@property char invalid;
@property (retain) NSXPCConnection * userConnection;
@property (retain) <SFCompanionConnectionManagerProtocol> * connectionProxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSObject *)exportedObject;
- (SFCompanionInterface *)remoteObjectInterface;
- (void)dealloc;
- (void)setDelegate:(<SFCompanionConnectionDelegate> *)arg0;
- (<SFCompanionConnectionDelegate> *)delegate;
- (void)invalidate;
- (void)suspend;
- (SFCompanionInterface *)exportedInterface;
- (void)setRemoteObjectInterface:(SFCompanionInterface *)arg0;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)remoteObjectProxy;
- (void)connect;
- (void)setExportedInterface:(SFCompanionInterface *)arg0;
- (void)setExportedObject:(NSObject *)arg0;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg0;
- (NSString *)connectionID;
- (void)setService:(SFCompanionService *)arg0;
- (SFCompanionService *)service;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (SFCompanionConnection *)initWithService:(SFCompanionService *)arg0;
- (void)setInvalid:(char)arg0;
- (char)invalid;
- (void)setConnectionProxy:(<SFCompanionConnectionManagerProtocol> *)arg0;
- (<SFCompanionConnectionManagerProtocol> *)connectionProxy;
- (void)xpcManagerConnectionInterrupted;
- (void)connectionResumed;
- (void)setupWorkQueue;
- (void)onqueue_resume;
- (char)waitForAccept;
- (void)onqueue_proxyHandler:(id /* block */)arg0;
- (void)onqueue_invalidate;
- (void)onqueue_setupUserConnection:(NSURLConnection *)arg0;
- (void)invalidationCallback;
- (void)onqueue_openXPCConnection;
- (void)onqueue_userInvalidated;
- (SFCompanionConnection *)initWithConnectionID:(NSString *)arg0;
- (SFCompanionConnection *)initWithDevice:(NSObject *)arg0 serviceType:(NSString *)arg1 delegate:(<SFCompanionConnectionDelegate> *)arg2;
- (SFCompanionConnection *)initWithDevice:(NSObject *)arg0 connectionID:(NSString *)arg1 serviceType:(NSString *)arg2 delegate:(<SFCompanionConnectionDelegate> *)arg3;
- (char)sendData:(NSData *)arg0 withErrorHandler:(SSErrorHandler *)arg1;
- (void)sendData:(NSData *)arg0 withReply:(id /* block */)arg1;
- (SFCompanionDevice *)connectedDevice;
- (void)setConnectedDevice:(SFCompanionDevice *)arg0;
- (void)setWaitForAccept:(char)arg0;
- (NSXPCConnection *)userConnection;
- (void)setUserConnection:(NSXPCConnection *)arg0;

@end
