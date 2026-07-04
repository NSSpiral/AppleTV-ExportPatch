/* Runtime dump - TRDXPCServer
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _connections;
    NSXPCListener * _listener;
    unsigned int _serverStartCount;
}

@property (readonly, nonatomic) NSArray * connections;
@property (readonly, nonatomic) NSArray * remoteClientProxies;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TRDXPCServer *)sharedServer;

- (NSArray *)connections;
- (void)dealloc;
- (TRDXPCServer *)init;
- (TRDXPCServer *)_init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)connection:(NSURLConnection *)arg0 handleInvocation:(NSObject *)arg1 isReply:(char)arg2;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (NSArray *)remoteClientProxies;

@end
