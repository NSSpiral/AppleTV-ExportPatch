/* Runtime dump - CKDCloudDatabaseServer
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCloudDatabaseServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener * _xpcListener;
    NSMutableArray * _connectedClients;
    NSObject<OS_dispatch_source> * _sighandlerSource;
    NSOperationQueue * _clientTeardownQueue;
}

@property (retain, nonatomic) NSXPCListener * xpcListener;
@property (retain, nonatomic) NSMutableArray * connectedClients;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * sighandlerSource;
@property (retain, nonatomic) NSOperationQueue * clientTeardownQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CKDCloudDatabaseServer *)sharedServer;

- (void)dealloc;
- (CKDCloudDatabaseServer *)init;
- (void)resume;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)statusReport;
- (NSObject<OS_dispatch_source> *)sighandlerSource;
- (NSXPCListener *)xpcListener;
- (NSMutableArray *)connectedClients;
- (NSOperationQueue *)clientTeardownQueue;
- (id)allClients;
- (void)setXpcListener:(NSXPCListener *)arg0;
- (void)setConnectedClients:(NSMutableArray *)arg0;
- (void)setSighandlerSource:(NSObject<OS_dispatch_source> *)arg0;
- (void)setClientTeardownQueue:(NSOperationQueue *)arg0;

@end
