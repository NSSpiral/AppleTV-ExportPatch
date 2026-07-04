/* Runtime dump - WLOTcpServer
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface WLOTcpServer : NSObject
{
    <WLOTcpServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _listenQueue;
    int _port;
    int _sockd;
}

@property (weak, nonatomic) <WLOTcpServerDelegate> * delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * listenQueue;
@property (nonatomic) int port;
@property (nonatomic) int sockd;

- (void)dealloc;
- (void)setDelegate:(<WLOTcpServerDelegate> *)arg0;
- (<WLOTcpServerDelegate> *)delegate;
- (void).cxx_destruct;
- (int)port;
- (NSObject<OS_dispatch_queue> *)listenQueue;
- (void)_listen:(int)arg0;
- (int)sockd;
- (void)setSockd:(int)arg0;
- (WLOTcpServer *)initWithPort:(int)arg0;
- (void)listen;
- (void)setListenQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setPort:(int)arg0;

@end
