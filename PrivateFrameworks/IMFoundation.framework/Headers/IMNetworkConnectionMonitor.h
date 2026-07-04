/* Runtime dump - IMNetworkConnectionMonitor
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMNetworkConnectionMonitor : IMConnectionMonitor <IMSystemMonitorListener, IMReachabilityDelegate>
{
    char _isConnected;
    char _isSleeping;
    IMReachability * _hostReachability;
    IMReachability * _ipReachability;
    unsigned int _hostFlags;
    unsigned int _ipFlags;
}

@property (retain, nonatomic) IMReachability * _hostReachability;
@property (retain, nonatomic) IMReachability * _ipReachability;
@property (nonatomic) unsigned int _hostFlags;
@property (nonatomic) unsigned int _ipFlags;
@property (nonatomic) char _isConnected;
@property (nonatomic) char _isSleeping;

- (void)dealloc;
- (void)clear;
- (void)_setup;
- (void)_setupReachability;
- (char)isImmediatelyReachable;
- (void)reachabilityDidChange:(NSDictionary *)arg0;
- (void)goConnectedWithLocalSocketAddress:(NSString *)arg0 remoteSocketAddress:(NSString *)arg1;
- (void)goDisconnected;
- (void)_clearReachability:(id *)arg0 flags:(unsigned int *)arg1;
- (void)_doCallbackNow;
- (void)_doCallbackLater;
- (void)_networkManagedUpdated:(id)arg0;
- (IMReachability *)_hostReachability;
- (void)set_hostReachability:(IMReachability *)arg0;
- (IMReachability *)_ipReachability;
- (void)set_ipReachability:(IMReachability *)arg0;
- (unsigned int)_hostFlags;
- (void)set_hostFlags:(unsigned int)arg0;
- (unsigned int)_ipFlags;
- (void)set_ipFlags:(unsigned int)arg0;
- (char)_isConnected;
- (void)set_isConnected:(char)arg0;
- (char)_isSleeping;
- (void)set_isSleeping:(char)arg0;
- (void)systemDidWake;
- (void)systemWillSleep;

@end
