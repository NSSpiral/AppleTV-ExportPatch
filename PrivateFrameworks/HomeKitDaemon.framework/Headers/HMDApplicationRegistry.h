/* Runtime dump - HMDApplicationRegistry
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationRegistry : NSObject
{
    HMDApplicationMonitor * _monitor;
}

@property (readonly, nonatomic) HMDApplicationMonitor * monitor;

- (HMDApplicationRegistry *)init;
- (void).cxx_destruct;
- (HMDApplicationRegistry *)initWithMessageDispatcher:(HMMessageDispatcher *)arg0;
- (void)stopMonitoringConnection:(NSURLConnection *)arg0;
- (void)startMonitoringConnection:(NSURLConnection *)arg0;
- (void)monitorConnection:(NSURLConnection *)arg0;
- (void)processTerminated:(id)arg0;
- (HMDApplicationMonitor *)monitor;

@end
