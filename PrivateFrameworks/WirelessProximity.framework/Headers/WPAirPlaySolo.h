/* Runtime dump - WPAirPlaySolo
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAirPlaySolo : NSObject <XPCClientDelegate>
{
    int _state;
    XPCClient * _connection;
    <WPAirPlaySoloDelegate> * _delegate;
}

@property int state;
@property (retain, nonatomic) XPCClient * connection;
@property (weak, nonatomic) <WPAirPlaySoloDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPAirPlaySoloDelegate> *)arg0;
- (NSString *)description;
- (<WPAirPlaySoloDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (void)stopConnectionlessAdvertising;
- (void)stopConnectionlessScanningWithData:(NSData *)arg0;
- (void)startConnectionlessAdvertisingWithData:(NSData *)arg0;
- (void)startConnectionlessScanningWithData:(NSData *)arg0;
- (WPAirPlaySolo *)initWithDelegate:(<WPAirPlaySoloDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)updateState:(int)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)startTrackingPeer:(NSObject *)arg0 withData:(NSData *)arg1;
- (void)stopTrackingPeer:(NSObject *)arg0 withData:(NSData *)arg1;

@end
