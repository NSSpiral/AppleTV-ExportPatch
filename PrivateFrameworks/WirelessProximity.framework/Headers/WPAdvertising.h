/* Runtime dump - WPAdvertising
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPAdvertising : NSObject <XPCClientDelegate>
{
    int _state;
    XPCClient * _connection;
    <WPAdvertisingDelegate> * _delegate;
}

@property int state;
@property (retain, nonatomic) XPCClient * connection;
@property (retain, nonatomic) <WPAdvertisingDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPAdvertisingDelegate> *)arg0;
- (NSString *)description;
- (<WPAdvertisingDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (WPAdvertising *)initWithDelegate:(<WPAdvertisingDelegate> *)arg0 queue:(NSObject *)arg1;
- (WPAdvertising *)initWithDelegate:(<WPAdvertisingDelegate> *)arg0;
- (void)updateState:(int)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)registerService:(NSObject *)arg0;
- (void)deregisterService:(NSObject *)arg0;

@end
