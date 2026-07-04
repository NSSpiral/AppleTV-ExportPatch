/* Runtime dump - PCInterfaceUsabilityMonitor
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol>
{
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    int _interfaceIdentifier;
    NSString * _interfaceName;
    CUTWeakReference * _delegateReference;
    void * _reachability;
    char _isInternetReachable;
    void * _dynamicStore;
    struct __CFRunLoopSource * _linkQualitySource;
    struct __CFString * _lqKey;
    int _linkQuality;
    char _trackUsability;
    unsigned int _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray * _offTransitions;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int interfaceIdentifier;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, nonatomic) char isInterfaceUsable;
@property (readonly, nonatomic) char isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) char isInternetReachable;
@property (readonly, retain, nonatomic) NSString * linkQualityString;
@property (readonly, nonatomic) char isPoorLinkQuality;
@property (readonly, nonatomic) char isBadLinkQuality;
@property (readonly, nonatomic) char isRadioHot;
@property (readonly, nonatomic) struct __CFString * currentRAT;
@property (readonly, nonatomic) char isLTEWithCDRX;
@property (readonly, nonatomic) struct __CFString * wwanInterfaceName;
@property (nonatomic) <PCInterfaceUsabilityMonitorDelegate> * delegate;

+ (PCInterfaceUsabilityMonitor *)stringForLinkQuality:(int)arg0;
+ (char)isPoorLinkQuality:(int)arg0;
+ (char)isBadLinkQuality:(int)arg0;

- (void)dealloc;
- (void)setDelegate:(<PCInterfaceUsabilityMonitorDelegate> *)arg0;
- (PCInterfaceUsabilityMonitor *)init;
- (<PCInterfaceUsabilityMonitorDelegate> *)delegate;
- (char)isInterfaceUsable;
- (char)isInternetReachable;
- (NSString *)linkQualityString;
- (char)isPoorLinkQuality;
- (char)isInterfaceHistoricallyUsable;
- (char)isBadLinkQuality;
- (void)_createLinkQualityMonitorOnIvarQueue;
- (void)_createReachabilityMonitorOnIvarQueue;
- (void)_unscheduleLinkQualityMonitorOnIvarQueue;
- (void)_unscheduleReachabilityMonitorOnIvarQueue;
- (void)_flushStaleTransitionsOnIvarQueue;
- (char)_isInterfaceUsableOnIvarQueue;
- (char)_isInterfaceHistoricallyUsableOnIvarQueue;
- (void)_reachabilityCallbackOnIvarQueue:(unsigned int)arg0;
- (void)_callDelegateOnIvarQueueWithBlock:(id /* block */)arg0;
- (void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
- (void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg0;
- (void)_dynamicStoreCallbackOnIvarQueue:(NSObject *)arg0;
- (void)_dynamicStoreCallback:(id /* block */)arg0;
- (void)setTrackedTimeInterval:(double)arg0;
- (void)setThresholdOffTransitionCount:(unsigned int)arg0;
- (void)setTrackUsability:(char)arg0;
- (char)isRadioHot;
- (PCInterfaceUsabilityMonitor *)initWithInterfaceName:(NSString *)arg0 interfaceIdentifier:(int)arg1 delegateQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)_createReachabilityMonitor;
- (void)_reachabilityCallback:(unsigned int)arg0;
- (void)_createLinkQualityMonitor;
- (int)linkQuality;
- (int)interfaceIdentifier;

@end
