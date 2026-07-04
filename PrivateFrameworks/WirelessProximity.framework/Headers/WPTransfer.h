/* Runtime dump - WPTransfer
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPTransfer : NSObject <XPCClientDelegate>
{
    int _advertiserState;
    int _scannerState;
    <WPTransferDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    XPCClient * _connection;
    NSObject<OS_xpc_object> * _server;
}

@property int advertiserState;
@property int scannerState;
@property (weak) <WPTransferDelegate> * delegate;
@property (retain) NSObject<OS_dispatch_queue> * queue;
@property (retain) XPCClient * connection;
@property (retain) NSObject<OS_xpc_object> * server;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPTransferDelegate> *)arg0;
- (NSString *)description;
- (<WPTransferDelegate> *)delegate;
- (NSObject<OS_xpc_object> *)server;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setServer:(NSObject<OS_xpc_object> *)arg0;
- (WPTransfer *)initWithDelegate:(<WPTransferDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)stopScan;
- (void)stopAdvertising;
- (int)scannerState;
- (WPTransfer *)initWithDelegate:(<WPTransferDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 machName:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)ignoreDevice;
- (void)startScan;
- (int)advertiserState;
- (void)startAdvertising;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)initXPCHandler:(id /* block */)arg0;
- (WPTransfer *)initWithDelegate:(<WPTransferDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 machName:(NSString *)arg2;
- (NSString *)stateToString:(int)arg0;
- (void)updateAdvertiserState:(int)arg0;
- (void)updateScannerState:(int)arg0;
- (void)setScannerState:(int)arg0;
- (void)setAdvertiserState:(int)arg0;

@end
