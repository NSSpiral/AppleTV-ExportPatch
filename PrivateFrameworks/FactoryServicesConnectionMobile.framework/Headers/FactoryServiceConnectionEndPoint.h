/* Runtime dump - FactoryServiceConnectionEndPoint
 * Image: /System/Library/PrivateFrameworks/FactoryServicesConnectionMobile.framework/FactoryServicesConnectionMobile
 */

@interface FactoryServiceConnectionEndPoint : NSObject <NSXPCListenerDelegate, FactoryServiceXPCInterfaceCommon>
{
    char _isConnected;
    NSXPCConnection * _xpcConnection;
    <FactoryServiceConnectionEndPointMessageHandlingProtocol> * _delegate;
    NSString * _name;
    id _connectionInterruptionHandler;
    id _connectionInvalidationHandler;
    NSXPCListener * _Listener;
    NSString * _serviceName;
}

@property char isConnected;
@property (retain) NSXPCConnection * xpcConnection;
@property (retain) <FactoryServiceConnectionEndPointMessageHandlingProtocol> * delegate;
@property (retain) NSString * name;
@property (copy) id connectionInterruptionHandler;
@property (copy) id connectionInvalidationHandler;
@property (retain) NSXPCListener * Listener;
@property (retain) NSString * serviceName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<FactoryServiceConnectionEndPointMessageHandlingProtocol> *)arg0;
- (FactoryServiceConnectionEndPoint *)init;
- (<FactoryServiceConnectionEndPointMessageHandlingProtocol> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)cleanUp;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)setListener:(BSActionListener *)arg0;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;
- (void)setIsConnected:(char)arg0;
- (void)setConnectionInterruptionHandler:(id /* block */)arg0;
- (void)setConnectionInvalidationHandler:(id /* block */)arg0;
- (void)handleMessageFromConnectedEndPoint:(NSDictionary *)arg0 replyBlock:(id /* block */)arg1;
- (void)sendMessageToConnectedEndPoint:(NSDictionary *)arg0 replyBlock:(id /* block */)arg1;
- (id /* block */)connectionInterruptionHandler;
- (id /* block */)connectionInvalidationHandler;
- (NSXPCListener *)Listener;
- (int)initConnectionWithService:(NSObject *)arg0;
- (int)startServiceWithName:(NSString *)arg0;
- (char)isConnected;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
