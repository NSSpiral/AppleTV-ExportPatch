/* Runtime dump - ADAdSheetConnection
 * Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdSheetConnection : NSObject
{
    <ADAdSheetConnectionDelegate> * _delegate;
    NSMutableArray * _performWhenConnectedBlocks;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection * _adSheetConnection;
}

@property (weak, nonatomic) <ADAdSheetConnectionDelegate> * delegate;
@property (retain, nonatomic) NSMutableArray * performWhenConnectedBlocks;
@property (nonatomic) NSObject<OS_dispatch_queue> * connectionQueue;
@property (retain, nonatomic) NSXPCConnection * adSheetConnection;

- (void)dealloc;
- (void)setDelegate:(<ADAdSheetConnectionDelegate> *)arg0;
- (ADAdSheetConnection *)init;
- (<ADAdSheetConnectionDelegate> *)delegate;
- (<ADSSession_RPC> *)rpcProxy;
- (void)performWhenConnected:(id)arg0;
- (id)rpcProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (void)withAssertion:(unsigned int)arg0 performWhenConnected:(id)arg1;
- (void)setConnectionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)connectionQueue;
- (void)considerConnectingToAdSheet;
- (NSXPCConnection *)adSheetConnection;
- (NSMutableArray *)performWhenConnectedBlocks;
- (void)_considerConnectingToAdSheet;
- (void)setAdSheetConnection:(NSXPCConnection *)arg0;
- (void)setPerformWhenConnectedBlocks:(NSMutableArray *)arg0;

@end
