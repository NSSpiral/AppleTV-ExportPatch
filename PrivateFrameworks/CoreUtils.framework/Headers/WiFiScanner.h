/* Runtime dump - WiFiScanner
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface WiFiScanner : NSObject
{
    char _started;
    NSMutableSet * _devices;
    char _autoPoweredOn;
    NSObject<OS_dispatch_source> * _scanTimer;
    long _stopErr;
    struct __WiFiManagerClient * _wifiManager;
    struct __WiFiDeviceClient * _wifiDevice;
    struct __CFArray * _scanChannels;
    char _scanActive;
    NSObject<OS_dispatch_queue> * _queue;
    struct LogCategory * _ucat;
    unsigned int _scanFlags;
    id _handler;
}

@property (readonly, copy) NSSet * devices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (nonatomic) unsigned int scanFlags;
@property (nonatomic) struct LogCategory * logCategory;
@property (copy, nonatomic) id handler;

- (void)dealloc;
- (WiFiScanner *)init;
- (void)stop;
- (void)_start;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void)start;
- (void)_stop:(long)arg0;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (struct LogCategory *)logCategory;
- (void)setLogCategory:(struct LogCategory *)arg0;
- (void)_stop2;
- (void)_scanTimer;
- (char)_isUnconfiguredIE:(id)arg0;
- (void)_scanProcessResults:(NSArray *)arg0;
- (unsigned int)scanFlags;
- (void)setScanFlags:(unsigned int)arg0;
- (NSSet *)devices;

@end
