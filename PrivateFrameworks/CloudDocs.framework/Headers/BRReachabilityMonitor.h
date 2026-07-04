/* Runtime dump - BRReachabilityMonitor
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRReachabilityMonitor : NSObject
{
    NSHashTable * _reachabilityObservers;
    struct __SCNetworkReachability * _reachabilityRef;
    char _isNetworkReachable;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) char isNetworkReachable;

+ (BRReachabilityMonitor *)sharedReachabilityMonitor;

- (void)dealloc;
- (BRReachabilityMonitor *)init;
- (void)invalidate;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (char)isNetworkReachable;
- (void)setIsNetworkReachable:(char)arg0;

@end
