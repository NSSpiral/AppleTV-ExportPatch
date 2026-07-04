/* Runtime dump - HMDPowerManager
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPowerManager : NSObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    char _networkInterfaceActive;
    char _networkAccessRequired;
    unsigned int _powerAssertion;
    struct __SCDynamicStore * _scStore;
    void * _scContext;
    char _started;
}

@property (nonatomic) char networkAccessRequired;

- (void)dealloc;
- (HMDPowerManager *)init;
- (void)stop;
- (void)_update;
- (void)start;
- (void).cxx_destruct;
- (long)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (void)setNetworkAccessRequired:(char)arg0;
- (char)isNetworkAccessRequired;

@end
