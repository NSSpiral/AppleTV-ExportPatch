/* Runtime dump - WPHomeKit
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPHomeKit : NSObject <XPCClientDelegate>
{
    <WPHomeKitDelegate> * _delegate;
    int _state;
    XPCClient * _connection;
}

@property (readonly) int state;
@property (nonatomic) <WPHomeKitDelegate> * delegate;
@property (retain, nonatomic) XPCClient * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)setDelegate:(<WPHomeKitDelegate> *)arg0;
- (<WPHomeKitDelegate> *)delegate;
- (int)state;
- (void).cxx_destruct;
- (XPCClient *)connection;
- (void)setConnection:(XPCClient *)arg0;
- (WPHomeKit *)initWithDelegate:(<WPHomeKitDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)stopScanning;
- (void)startScanningWithData:(NSData *)arg0;
- (void)checkAllowDuplicate;
- (void)updateState:(int)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;

@end
