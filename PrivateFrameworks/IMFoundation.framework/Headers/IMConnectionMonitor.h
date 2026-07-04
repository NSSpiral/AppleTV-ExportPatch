/* Runtime dump - IMConnectionMonitor
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMConnectionMonitor : NSObject
{
    NSString * _remoteHost;
    <IMConnectionMonitorDelegate> * _delegate;
}

@property (readonly, nonatomic) char isImmediatelyReachable;
@property (readonly, nonatomic) char requiresDataConnectionActivation;
@property (nonatomic) char isDataConnectionActive;
@property (nonatomic) <IMConnectionMonitorDelegate> * delegate;
@property (readonly, nonatomic) NSString * remoteHost;

+ (IMConnectionMonitor *)alloc;

- (void)dealloc;
- (void)setDelegate:(<IMConnectionMonitorDelegate> *)arg0;
- (<IMConnectionMonitorDelegate> *)delegate;
- (void)clear;
- (void)_setup;
- (IMConnectionMonitor *)initWithRemoteHost:(NSString *)arg0 delegate:(<IMConnectionMonitorDelegate> *)arg1;
- (char)isImmediatelyReachable;
- (void)goConnectedWithLocalSocketAddress:(NSString *)arg0 remoteSocketAddress:(NSString *)arg1;
- (void)goDisconnected;
- (void)setDataConnectionActive:(char)arg0;
- (char)isDataConnectionActive;
- (char)requiresDataConnectionActivation;
- (NSString *)remoteHost;

@end
