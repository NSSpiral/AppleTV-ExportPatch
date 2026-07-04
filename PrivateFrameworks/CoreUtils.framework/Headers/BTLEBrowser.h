/* Runtime dump - BTLEBrowser
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate>
{
    NSMutableDictionary * _accessories;
    CBCentralManager * _centralManager;
    struct BTLEBrowserPrivate * _cfBrowser;
    NSObject<OS_dispatch_source> * _lostTimer;
    NSObject<OS_dispatch_queue> * _queue;
    char _started;
    struct LogCategory * _ucat;
    /* block */ id * _eventHandler_f;
    void * _eventHandler_ctx;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)_start;
- (void)centralManagerDidUpdateState:(NSObject *)arg0;
- (void)centralManager:(CBCentralManager *)arg0 didDiscoverPeripheral:(CBPeripheral *)arg1 advertisementData:(NSDictionary *)arg2 RSSI:(NSNumber *)arg3;
- (void)_stop:(long)arg0;
- (BTLEBrowser *)initWithCFBrowser:(struct BTLEBrowserPrivate *)arg0;
- (void)_postEventType:(unsigned int)arg0 accessory:(HMDAccessory *)arg1;
- (void)_lostTimer;

@end
