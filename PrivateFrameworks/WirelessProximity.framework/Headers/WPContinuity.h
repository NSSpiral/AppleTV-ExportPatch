/* Runtime dump - WPContinuity
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPContinuity : NSObject <XPCClientDelegate>
{
    int _state;
    int _btBandwidthState;
    <WPContinuityDelegate> * _delegate;
    XPCClient * _connection;
}

@property int state;
@property int btBandwidthState;
@property (weak, nonatomic) <WPContinuityDelegate> * delegate;
@property (retain, nonatomic) XPCClient * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPContinuityDelegate> *)arg0;
- (<WPContinuityDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (WPContinuity *)initWithDelegate:(<WPContinuityDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)stopAdvertisingOfType:(int)arg0;
- (void)stopScanningForType:(int)arg0;
- (void)connectToPeer:(NSObject *)arg0;
- (void)disconnectFromPeer:(NSObject *)arg0;
- (void)startTrackingPeer:(NSObject *)arg0 forType:(int)arg1;
- (void)stopTrackingPeer:(NSObject *)arg0 forType:(int)arg1;
- (void)updateState:(int)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)startScanningForType:(int)arg0 withData:(NSData *)arg1 peers:(id)arg2;
- (void)updateBluetoothBandwidthState:(int)arg0;
- (int)btBandwidthState;
- (void)setBtBandwidthState:(int)arg0;
- (void)startAdvertisingOfType:(int)arg0 withData:(NSData *)arg1;
- (void)startScanningForType:(int)arg0 withData:(NSData *)arg1;
- (void)sendData:(NSData *)arg0 toPeer:(NSObject *)arg1;

@end
