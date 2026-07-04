/* Runtime dump - GKAsyncSocket
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKAsyncSocket : NSObject

@property (nonatomic) NSObject<OS_dispatch_queue> * targetQueue;
@property (copy, nonatomic) id receiveDataHandler;
@property (copy, nonatomic) id connectedHandler;
@property (retain, nonatomic) id socketName;

+ (GKAsyncSocket *)allocWithZone:(struct _NSZone *)arg0;

- (void)invalidate;
- (void)setTargetQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setReceiveDataHandler:(id /* block */)arg0;
- (void)sendData:(NSData *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setConnectedHandler:(id /* block */)arg0;
- (void)setSocketName:(NSString *)arg0;
- (void)tcpConnectSockAddr:(struct sockaddr *)arg0 port:(struct sockaddr)arg1;
- (NSString *)socketName;
- (void)tcpAttachSocketDescriptor:(int)arg0;
- (NSObject<OS_dispatch_queue> *)syncQueue;
- (id /* block */)receiveDataHandler;
- (NSObject<OS_dispatch_queue> *)targetQueue;
- (id /* block */)connectedHandler;
- (void)setSyncQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
