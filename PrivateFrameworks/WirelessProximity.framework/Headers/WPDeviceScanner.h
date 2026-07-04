/* Runtime dump - WPDeviceScanner
 * Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface WPDeviceScanner : NSObject <XPCClientDelegate>
{
    <WPDeviceScannerDelegate> * _delegate;
    XPCClient * _xpcClient;
    int _state;
    NSMutableArray * _liveDevices;
    NSMutableDictionary * _activeScans;
    NSObject<OS_dispatch_queue> * _queue;
}

@property int state;
@property (retain, nonatomic) NSMutableArray * liveDevices;
@property (retain, nonatomic) NSMutableDictionary * activeScans;
@property (retain) NSObject<OS_dispatch_queue> * queue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)connectionInterrupted;
- (void)dealloc;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (WPDeviceScanner *)initWithDelegate:(<WPDeviceScannerDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (WPDeviceScanner *)initWithDelegate:(<WPDeviceScannerDelegate> *)arg0;
- (void)messageArrived:(NSObject *)arg0;
- (void)connectionDied;
- (void)unregisterAllDeviceChanges;
- (void)timerFinished:(id)arg0;
- (NSMutableDictionary *)activeScans;
- (NSMutableArray *)liveDevices;
- (void)changeState:(int)arg0;
- (void)postDevice:(NSObject *)arg0;
- (void)postDevices:(id)arg0;
- (void)registerForDevicesMatching:(id)arg0 options:(NSDictionary *)arg1;
- (void)unregisterForDevices:(id)arg0;
- (void)setLiveDevices:(NSMutableArray *)arg0;
- (void)setActiveScans:(NSMutableDictionary *)arg0;

@end
